/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18003D8BC
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180040920 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180056914 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     _lambda_1b0c182535871ea6c5139e310f080a01_::operator() @ 0x18003D980 (_lambda_1b0c182535871ea6c5139e310f080a01_--operator().c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RuntimeClassInitialize(CApplicationViewBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v2 = (*(__int64 (__fastcall **)(char *, LPVOID *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, pv);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v2,
      -2);
  }
  else
  {
    v7[0] = pv;
    v7[1] = this;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
    v5 = v10;
    if ( v10 )
    {
      lambda_1b0c182535871ea6c5139e310f080a01_::operator()(v7, v10);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v5);
    }
    if ( (unsigned int)EdpGetIsManaged(v4) )
      *((_BYTE *)this + 56) = 1;
    v3 = 0;
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
