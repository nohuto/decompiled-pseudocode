/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800471BC
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180046930 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180047828 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        void *const a1,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  unsigned int v3; // ebx
  char v6; // dl
  __int64 *v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  int v10; // eax
  HRESULT ThemeMargins; // eax
  __int64 v12; // r8
  MARGINS *v13; // rdx
  void *v15; // [rsp+28h] [rbp-D8h]
  MARGINS pMargins; // [rsp+40h] [rbp-C0h] BYREF
  struct _MARGINS v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  char *v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  char *v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+80h] [rbp-80h]
  char *v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  char *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  char *v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h]
  char *v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+C0h] [rbp-40h]
  char *v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+D0h] [rbp-30h]
  char *v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+E0h] [rbp-20h]
  char *v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+F0h] [rbp-10h]
  char *v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+100h] [rbp+0h]
  char *v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+110h] [rbp+10h]
  char *v41; // [rsp+118h] [rbp+18h]

  v3 = 0;
  if ( a2 == *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32) )
  {
    v18 = -1;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v18 = 3;
  }
  v19 = (char *)a2 + 8;
  v21 = (char *)a2 + 40;
  v20 = v6 != 0 ? -1 : 5;
  v23 = (char *)a3 + 8;
  v22 = v6 != 0 ? -1 : 4;
  v25 = (char *)a3 + 40;
  v24 = v6 != 0 ? -1 : 6;
  v27 = (char *)a2 + 72;
  v26 = v6 != 0 ? -1 : 88;
  v29 = (char *)a2 + 104;
  v28 = v6 != 0 ? -1 : 90;
  v31 = (char *)a3 + 72;
  v30 = v6 != 0 ? -1 : 89;
  v33 = (char *)a3 + 104;
  v32 = v6 != 0 ? -1 : 91;
  v35 = (char *)a2 + 136;
  v34 = v6 != 0 ? -1 : 7;
  v37 = (char *)a3 + 136;
  v36 = v6 != 0 ? -1 : 8;
  v38 = v6 != 0 ? 36 : 9;
  v39 = (char *)a2 + 168;
  v7 = (__int64 *)&v19;
  v40 = v6 != 0 ? 37 : 10;
  v8 = 0;
  v41 = (char *)a3 + 168;
  while ( 1 )
  {
    if ( *((_DWORD *)v7 - 2) == -1 )
      goto LABEL_9;
    v9 = *v7;
    v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *((_DWORD *)v7 - 2), 4u, &v17, *v7);
    v3 = v10;
    if ( v10 < 0 )
      break;
    ThemeMargins = GetThemeMargins(a1, 0LL, *((_DWORD *)v7 - 2), 0, 3602, 0LL, &pMargins);
    v12 = 0LL;
    v3 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeMargins, 0x3EAu, v15);
      return v3;
    }
    if ( *(_DWORD *)(v9 + 24) )
    {
      do
      {
        v13 = *(MARGINS **)(*(_QWORD *)v9 + 8 * v12);
        v12 = (unsigned int)(v12 + 1);
        v13[4] = pMargins;
      }
      while ( (unsigned int)v12 < *(_DWORD *)(v9 + 24) );
    }
LABEL_9:
    ++v8;
    v7 += 2;
    if ( v8 >= 0xC )
      return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3E9u, v15);
  return v3;
}
