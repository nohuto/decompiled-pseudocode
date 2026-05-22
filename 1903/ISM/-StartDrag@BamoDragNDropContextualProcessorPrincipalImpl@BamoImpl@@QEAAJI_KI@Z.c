/*
 * XREFs of ?StartDrag@BamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@QEAAJI_KI@Z @ 0x180069250
 * Callers:
 *     ?Thunk_StartDrag_90@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800693F0 (-Thunk_StartDrag_90@-$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualPro.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::StartDrag(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v13; // rdi
  char *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  v10 = *((_QWORD *)Stub + 5);
  v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v11, *(unsigned int *)(v10 + 36), a4);
  v13 = Item;
  if ( Item )
    v14 = (char *)Item - 16;
  else
    v14 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v21,
    v11);
  v15 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, __int64, char *))(*((_QWORD *)this - 2) + 72LL))(
          (char *)this - 16,
          v9,
          a2,
          a3,
          v14);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      65009LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v15);
  v18 = v21;
  if ( v21 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 96));
    *(_DWORD *)(v18 + 136) = GetCurrentThreadId();
  }
  if ( v13 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v13, v16, v17);
  return 0LL;
}
