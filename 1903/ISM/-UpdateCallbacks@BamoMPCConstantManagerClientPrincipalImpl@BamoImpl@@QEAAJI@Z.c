/*
 * XREFs of ?UpdateCallbacks@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18008B190
 * Callers:
 *     ?Thunk_UpdateCallbacks_25@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008B180 (-Thunk_UpdateCallbacks_25@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerCl.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::UpdateCallbacks(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rsi
  unsigned int v3; // r9d
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  Microsoft::BamoImpl::BamoProxyImpl *v7; // rdi
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)Stub + 5) + 24LL) + 24LL),
           *(unsigned int *)(*((_QWORD *)Stub + 5) + 36LL),
           v3);
  v7 = Item;
  if ( Item )
    v8 = (void (__fastcall ***)(_QWORD))((char *)Item - 16);
  else
    v8 = 0LL;
  v9 = *((_QWORD *)Stub + 8);
  *((_QWORD *)Stub + 8) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v7 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v7, v5, v6);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v14,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 24LL));
  v10 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 40LL))(
          (char *)this - 16,
          (__int64)Stub - 16);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      7844LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10);
  v11 = v14;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
