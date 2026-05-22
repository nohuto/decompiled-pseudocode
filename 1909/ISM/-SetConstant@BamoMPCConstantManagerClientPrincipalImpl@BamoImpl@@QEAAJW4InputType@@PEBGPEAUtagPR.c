/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPROPVARIANT@@I@Z @ 0x18008A8A4
 * Callers:
 *     ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008AF10 (-Thunk_SetConstant_8@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientP.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027170 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v14; // rdi
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           a1,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 32LL));
  v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  v11 = *((_QWORD *)Stub + 5);
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v11 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v12, *(unsigned int *)(v11 + 36), a5);
  v14 = Item;
  if ( Item )
    v15 = (char *)Item - 16;
  else
    v15 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v22,
    v12);
  v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, char *))(*((_QWORD *)a1 - 2) + 80LL))(
          (_QWORD *)a1 - 2,
          v10,
          a2,
          a3,
          a4,
          v15);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      7873LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v16);
  v19 = v22;
  if ( v22 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v22 + 96));
    *(_DWORD *)(v19 + 136) = GetCurrentThreadId();
  }
  if ( v14 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v14, v17, v18);
  return 0LL;
}
