/*
 * XREFs of ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x18007B7C4
 * Callers:
 *     ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x18007B780 (-IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSingleViewShellExperience::IsViewCloaked(CSingleViewShellExperience *this)
{
  char v1; // bl
  int v2; // eax
  __int64 v4; // r9
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  if ( !*((_QWORD *)this + 3) )
  {
    v4 = 2147549183LL;
    v5 = 199LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v4);
    return v1;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), &v7);
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 201LL;
    goto LABEL_7;
  }
  return v7 == 0;
}
