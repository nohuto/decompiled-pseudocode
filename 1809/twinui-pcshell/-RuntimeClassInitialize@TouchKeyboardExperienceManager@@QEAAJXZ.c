/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1802BA300
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1802B3A6C (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  CImmersiveShellComponent *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (TouchKeyboardExperienceManager *)((char *)this + 48);
  *(GUID *)v5 = IID_ITouchKeyboardExperienceManager;
  v6 = 0LL;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 166LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v6 = 0LL;
  *(GUID *)v5 = GUID_ef1669a1_d284_4068_ab56_7c82915861bd;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         v1,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 167LL;
    goto LABEL_3;
  }
  return 0LL;
}
