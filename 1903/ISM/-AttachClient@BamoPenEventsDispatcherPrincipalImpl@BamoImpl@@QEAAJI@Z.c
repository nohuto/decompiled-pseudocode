/*
 * XREFs of ?AttachClient@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180031914
 * Callers:
 *     ?Thunk_AttachClient_0@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180033640 (-Thunk_AttachClient_0@-$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalI.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005AA20 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherPrincipalImpl::AttachClient(
        BamoImpl::BamoPenEventsDispatcherPrincipalImpl *this,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  char *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+8h] BYREF

  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
           this,
           *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v5 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 24LL))(Stub);
  v6 = *((_QWORD *)Stub + 5);
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v7, *(unsigned int *)(v6 + 36), a2);
  v9 = Item;
  if ( Item )
    v10 = (char *)Item - 16;
  else
    v10 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v16, v7);
  v11 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 72LL))((char *)this - 16, v5, v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      11516LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v16);
  if ( v9 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9, v12, v13);
  return 0LL;
}
