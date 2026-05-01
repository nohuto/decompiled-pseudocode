/*
 * XREFs of ?ShowBorderWithRect@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@UColor@UI@8@URect@Foundation@8@@Z @ 0x18004EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18004E1D8 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::ShowBorderWithRect(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        float *a5)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-38h]
  int v11[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *a5;
  v11[0] = (int)*a5;
  v6 = a5[1];
  v11[1] = (int)v6;
  v11[2] = (int)(float)(v5 + a5[2]);
  v11[3] = (int)(float)(v6 + a5[3]);
  v7 = CSingleViewShellExperience::ShowBorder(
         a1 + 48,
         a2,
         a3 != 0,
         (HIBYTE(a4) << 16) | (BYTE2(a4) << 8) | BYTE1(a4),
         (int)v11);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v7,
      v10);
  return v8;
}
