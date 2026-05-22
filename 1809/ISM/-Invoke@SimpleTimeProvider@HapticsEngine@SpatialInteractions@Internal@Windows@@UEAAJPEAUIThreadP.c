/*
 * XREFs of ?Invoke@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEAUIThreadPoolTimer@Threading@System@5@@Z @ 0x180123DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::Invoke(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::System::Threading::IThreadPoolTimer *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  HANDLE OwningThread; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 2;
  OwningThread = 0LL;
  EnterCriticalSection(this + 2);
  if ( this[1].OwningThread )
  {
    OwningThread = this[1].OwningThread;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 8LL))(OwningThread);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( OwningThread
    && (v5 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 24LL))(OwningThread), v6 = v5, v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  return v6;
}
