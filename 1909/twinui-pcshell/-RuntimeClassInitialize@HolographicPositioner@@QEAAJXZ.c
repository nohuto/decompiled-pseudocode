/*
 * XREFs of ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x18022136C
 * Callers:
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x18021BA4C (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801CA6E4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall HolographicPositioner::RuntimeClassInitialize(HolographicPositioner *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  GUID v5; // [rsp+20h] [rbp-39h] BYREF
  __int64 v6; // [rsp+30h] [rbp-29h]
  __int64 v7; // [rsp+38h] [rbp-21h]
  GUID v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+50h] [rbp-9h]
  __int64 v10; // [rsp+58h] [rbp-1h]
  GUID v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  GUID v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v6 = 0LL;
  v5 = GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa;
  v7 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v8 = GUID_334a8e75_f9cf_4161_9035_68246f9ea21d;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v11 = GUID_538317c5_5bad_4847_962d_42da294f5e0a;
  v16 = 0LL;
  v14 = GUID_5090de35_ed23_43be_9714_586c5041026a;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (HolographicPositioner *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v5,
         4LL);
  if ( v2 < 0 )
  {
    v3 = 346LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 56);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 56);
  if ( v2 < 0 )
  {
    v3 = 348LL;
    goto LABEL_3;
  }
  return 0LL;
}
