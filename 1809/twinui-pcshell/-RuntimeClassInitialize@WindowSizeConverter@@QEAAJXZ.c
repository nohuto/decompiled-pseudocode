/*
 * XREFs of ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x18033331C
 * Callers:
 *     ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180331364 (--$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall WindowSizeConverter::RuntimeClassInitialize(WindowSizeConverter *this)
{
  LPVOID *ppv; // rdi
  int Instance; // ebx
  __int64 v4; // rdx
  GUID v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Instance = CoCreateInstance(
               &GUID_ddc05a5a_351a_4e06_8eaf_54ec1bc2dcea,
               0LL,
               1u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               ppv);
  if ( Instance < 0 )
  {
    v4 = 231LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 64LL))(*ppv);
  if ( Instance < 0 )
  {
    v4 = 232LL;
    goto LABEL_3;
  }
  v7 = 0LL;
  v6 = GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a;
  v8 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (WindowSizeConverter *)((char *)this + 24),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v6,
               1LL);
  if ( Instance < 0 )
  {
    v4 = 233LL;
    goto LABEL_3;
  }
  return 0LL;
}
