/*
 * XREFs of ?OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180179D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewPropertiesChanging(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // r8
  char *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_QWORD *)this + 34);
    if ( v3 )
    {
      v4 = (char *)this - 56;
      v5 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v3 + 56LL))(v3, &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 902LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        *((_DWORD *)v4 + 184) = 0;
        return v6;
      }
      v5 = CSingleViewShellExperience::SetPosition(a2, &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 903LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
