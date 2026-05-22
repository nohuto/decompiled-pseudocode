/*
 * XREFs of ?UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18006464C
 * Callers:
 *     ?Thunk_UpdateInputDeliveryServer_0@?$IInputSystemProxy_Receive@VBamoInputSystemProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180063720 (-Thunk_UpdateInputDeliveryServer_0@-$IInputSystemProxy_Receive@VBamoInputSystemProxyImpl@BamoImp.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSystemProxyImpl::UpdateInputDeliveryServer(
        BamoImpl::BamoInputSystemProxyImpl *this,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 36LL),
           a2);
  v6 = Item;
  if ( Item )
    v7 = (void (__fastcall ***)(_QWORD))((char *)Item - 16);
  else
    v7 = 0LL;
  v8 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v4, v5);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v13,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL));
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        7532LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v9);
    v10 = v13;
    if ( v13 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 96));
      *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
