/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x180190A84
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180190010 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18017C094 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180181EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall ImmersiveShellStressTool::RuntimeClassInitialize(ImmersiveShellStressTool *this)
{
  volatile int *v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v7 = GUID_fc97f3a6_096f_4649_84e5_df22a101258c;
  v8 = 0LL;
  v9 = 0LL;
  v3 = CImmersiveShellComponent::RegisterServiceInformation(
         (ImmersiveShellStressTool *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v7,
         1LL);
  if ( v3 < 0 )
  {
    v4 = 23LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v6,
      v2);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 13);
  if ( v3 < 0 )
  {
    v4 = 24LL;
    goto LABEL_3;
  }
  return 0LL;
}
