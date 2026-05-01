/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x18016CEA4
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016D4EC (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  int v9; // ecx
  int v10; // r10d
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // r8
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // r9d
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  __int64 v31; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v33; // [rsp+38h] [rbp+10h]

  v33 = a2;
  v9 = a6;
  if ( a6 == 1 )
  {
    v9 = 0;
    v10 = HIDWORD(a2) - a4 / 2;
  }
  else
  {
    v10 = HIDWORD(a2);
  }
  if ( v9 )
  {
    if ( v9 != 2 )
    {
      v31 = 777LL;
      goto LABEL_52;
    }
    v16 = a1[3];
    v17 = v16;
    if ( v10 < v16 )
      v17 = v10;
    if ( v17 - a4 <= a1[1] )
    {
      v18 = a1[1];
    }
    else
    {
      if ( v10 < v16 )
        v16 = v10;
      v18 = v16 - a4;
    }
    v14 = a7;
    v19 = v18 + a4;
    a7[1] = v18;
    if ( v18 + a4 >= a1[3] )
      v19 = a1[3];
    a7[3] = v19;
  }
  else
  {
    v11 = a1[1];
    v12 = v11;
    v13 = a1[3];
    if ( v10 > v11 )
      v12 = v10;
    if ( a4 + v12 < v13 )
    {
      if ( v10 > v11 )
        v11 = v10;
      v13 = v11 + a4;
    }
    v14 = a7;
    a7[3] = v13;
    v15 = v13 - a4;
    if ( v15 <= a1[1] )
      v15 = a1[1];
    a7[1] = v15;
  }
  v20 = a5;
  if ( a5 == 1 )
  {
    v20 = 0;
    v21 = a3 / -2 + v33;
  }
  else
  {
    v21 = v33;
  }
  if ( !v20 )
  {
    v22 = *a1;
    v23 = *a1;
    v24 = a1[2];
    if ( v21 > *a1 )
      v23 = v21;
    if ( a3 + v23 < v24 )
    {
      if ( v21 > v22 )
        v22 = v21;
      v24 = v22 + a3;
    }
    v14[2] = v24;
    v25 = v24 - a3;
    if ( v25 <= *a1 )
      v25 = *a1;
    *v14 = v25;
    return 0LL;
  }
  if ( v20 == 2 )
  {
    v26 = a1[2];
    v27 = v26;
    if ( v21 < v26 )
      v27 = v21;
    if ( v27 - a3 <= *a1 )
    {
      v28 = *a1;
    }
    else
    {
      if ( v21 < v26 )
        v26 = v21;
      v28 = v26 - a3;
    }
    v29 = v28 + a3;
    *v14 = v28;
    if ( v28 + a3 >= a1[2] )
      v29 = a1[2];
    v14[2] = v29;
    return 0LL;
  }
  v31 = 799LL;
LABEL_52:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
