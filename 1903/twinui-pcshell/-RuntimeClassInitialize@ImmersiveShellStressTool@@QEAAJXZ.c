/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x1801D7334
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D68C0 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801AB7B4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall ImmersiveShellStressTool::RuntimeClassInitialize(ImmersiveShellStressTool *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  volatile signed __int32 *v5; // rcx
  int v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v6 = GUID_fc97f3a6_096f_4649_84e5_df22a101258c;
  v7 = 0LL;
  v8 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (ImmersiveShellStressTool *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v6,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 23LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(v5);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 13);
  if ( v2 < 0 )
  {
    v3 = 24LL;
    goto LABEL_3;
  }
  return 0LL;
}
