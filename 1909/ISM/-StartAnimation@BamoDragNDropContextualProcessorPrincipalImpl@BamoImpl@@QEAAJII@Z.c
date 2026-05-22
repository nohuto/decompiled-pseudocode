/*
 * XREFs of ?StartAnimation@BamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x180068ED4
 * Callers:
 *     ?Thunk_StartAnimation_95@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180069190 (-Thunk_StartAnimation_95@-$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextu.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027170 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::StartAnimation(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rdi
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v7 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  v8 = *((_QWORD *)Stub + 5);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v9, *(unsigned int *)(v8 + 36), a3);
  v11 = Item;
  if ( Item )
    v12 = (char *)Item - 16;
  else
    v12 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v19, v9);
  v13 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, char *))(*((_QWORD *)this - 2) + 88LL))(
          (char *)this - 16,
          v7,
          a2,
          v12);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      65079LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v13);
  v16 = v19;
  if ( v19 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 96));
    *(_DWORD *)(v16 + 136) = GetCurrentThreadId();
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v14, v15);
  return 0LL;
}
