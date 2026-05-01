/*
 * XREFs of ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1802742B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___::Run @ 0x18026E160 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___--Run.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x180276640 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180267608 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x180269E50 (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x18026DF44 (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x18026ED8C (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations(ViewEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 **v2; // rbp
  int v3; // eax
  __int64 *v4; // rdi
  _QWORD *v5; // rcx
  __int64 **v6[4]; // [rsp+28h] [rbp-20h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 280);
  v2 = (__int64 **)((char *)this + 536);
  while ( 1 )
  {
    AcquireSRWLockExclusive(v1);
    v6[0] = v2;
    v6[1] = 0LL;
    LOBYTE(v3) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(v6);
    if ( !v3 )
      break;
    v4 = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove((__int64)v6);
    StringRawBuffer = (PCWSTR)v4;
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    v5 = (_QWORD *)v4[3];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 40LL))(v5, *v5);
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v4[2], 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      (__int64)(v4 + 1),
      &StringRawBuffer);
    if ( v4 )
      CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(v4);
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
