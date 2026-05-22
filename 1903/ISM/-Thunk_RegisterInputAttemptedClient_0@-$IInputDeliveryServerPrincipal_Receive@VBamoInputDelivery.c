/*
 * XREFs of ?Thunk_RegisterInputAttemptedClient_0@?$IInputDeliveryServerPrincipal_Receive@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180002370
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputDeliveryServerPrincipal_Receive<BamoImpl::BamoInputDeliveryServerPrincipalImpl>::Thunk_RegisterInputAttemptedClient_0(
        Microsoft::BamoImpl::BamoPrincipalImpl *a1,
        unsigned int **a2)
{
  unsigned int v3; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v5; // r15
  __int64 v6; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rsi
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  struct Microsoft::BamoImpl::ConversationItem *v9; // rdi
  char *v10; // rbp
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rbx
  int v12; // eax
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = **a2;
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           a1,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 32LL));
  v5 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  v6 = *((_QWORD *)Stub + 5);
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v7, *(_DWORD *)(v6 + 36), v3);
  v9 = Item;
  if ( Item )
    v10 = (char *)Item - 16;
  else
    v10 = 0LL;
  v11 = 0LL;
  if ( !*((_DWORD *)v7 + 35) )
  {
    v11 = v7;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v7);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(*((_QWORD *)a1 - 2) + 72LL))((_QWORD *)a1 - 2, v5, v10);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBBB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v12,
      -2);
    __debugbreak();
  }
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 96));
    *((_DWORD *)v11 + 34) = GetCurrentThreadId();
  }
  if ( v9 && !*((_BYTE *)v9 + 29) )
  {
    LOBYTE(v13) = *((_DWORD *)v9 + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v9 + 2) + 56LL))(
      *((_QWORD *)v9 + 2),
      *((unsigned int *)v9 + 6),
      v13);
  }
  return 0LL;
}
