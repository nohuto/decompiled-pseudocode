/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180046930
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800463C8 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800466A0 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180047150 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800471BC (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800473EC (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047908 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180047BA4 (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  void *v6; // rsi
  HRESULT ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // edx
  struct CBitmapSource *v24; // rax
  CBaseObject **v25; // r12
  int v26; // edx
  int *v27; // r8
  _QWORD *v28; // rcx
  int v29; // eax
  __int64 v31; // rsi
  __int64 i; // rbx
  CBaseObject *v33; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  RECT *prc; // [rsp+28h] [rbp-D8h]
  unsigned int cxLeftWidth; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+40h] [rbp-C0h]
  struct CBitmapSource *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v40; // [rsp+60h] [rbp-A0h]
  struct _MARGINS v41; // [rsp+70h] [rbp-90h]
  struct _MARGINS v42; // [rsp+80h] [rbp-80h]
  struct _MARGINS v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+A0h] [rbp-60h]
  void *v45; // [rsp+A8h] [rbp-58h]
  struct _MARGINS v46; // [rsp+B0h] [rbp-50h] BYREF
  struct _MARGINS v47; // [rsp+C0h] [rbp-40h] BYREF
  struct _MARGINS v48; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v49; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v50; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v51; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v52; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v53; // [rsp+120h] [rbp+20h] BYREF
  struct _MARGINS v54; // [rsp+130h] [rbp+30h] BYREF
  struct _MARGINS v55; // [rsp+140h] [rbp+40h] BYREF
  struct _MARGINS v56; // [rsp+150h] [rbp+50h] BYREF
  struct _MARGINS v57; // [rsp+160h] [rbp+60h] BYREF
  struct _MARGINS v58; // [rsp+170h] [rbp+70h] BYREF
  MARGINS pMargins; // [rsp+180h] [rbp+80h] BYREF
  struct _MARGINS v60; // [rsp+190h] [rbp+90h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = a1;
  v45 = a1;
  if ( dword_1800DEC00 > *(_DWORD *)(ThreadLocalStoragePointer[tls_index] + 4LL) )
  {
    Init_thread_header(&dword_1800DEC00);
    if ( dword_1800DEC00 == -1 )
    {
      dword_1800DC07C = -2147023728;
      Init_thread_footer(&dword_1800DEC00);
    }
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[1], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1061;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC07C, 1u, ThemeMargins, iPropId, prc);
    return v11;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[3], 2u, &pMargins, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1073;
    goto LABEL_59;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 193) = v38;
  *((_QWORD *)a5 + 193) = v39;
  v13 = a2[4];
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v13, 2u, &pMargins, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1082;
    goto LABEL_59;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 195) = v38;
  *((_QWORD *)a5 + 195) = v39;
  v15 = *((unsigned int *)a2 + 1);
  LODWORD(prc) = 2;
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v15, cxLeftWidth, 0LL, 1);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1100;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2430, (float *)a4 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1103;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2430, (float *)a5 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1104;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2432, (float *)a4 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1107;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2432, (float *)a5 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1108;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1110;
    goto LABEL_59;
  }
  v46 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v46);
  v16 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  LODWORD(prc) = 7;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v16, cxLeftWidth, 5LL, 6);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1127;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1129;
    goto LABEL_59;
  }
  v47 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v47);
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v48 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v48);
  v49 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v49);
  v50 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v50);
  v51 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v51);
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1143;
    goto LABEL_59;
  }
  v17 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[12], 2u, &pMargins, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1149;
    goto LABEL_59;
  }
  v18 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 211) = v38;
  *((_QWORD *)a5 + 211) = v39;
  v19 = a2[13];
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v19, 2u, &pMargins, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1158;
    goto LABEL_59;
  }
  v20 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 213) = v38;
  *((_QWORD *)a5 + 213) = v39;
  v21 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  LODWORD(prc) = 11;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v21, v17, 9LL, 10);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1176;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1178;
    goto LABEL_59;
  }
  v52 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v52);
  v22 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  LODWORD(prc) = 16;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v22, v17, 14LL, 15);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1195;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1197;
    goto LABEL_59;
  }
  v53 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v53);
  v23 = a2[17];
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v6, v23, &v60, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1205;
    goto LABEL_59;
  }
  v24 = v38;
  *((_QWORD *)a4 + 221) = v38;
  *((_QWORD *)a5 + 221) = v24;
  _InterlockedAdd((volatile signed __int32 *)v24 + 2, 1u);
  v54 = v60;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v54);
  v55 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v55);
  v56 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v56);
  v57 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v57);
  v58 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v58);
  v25 = (CBaseObject **)((char *)a5 + 1784);
  v26 = 18;
  v27 = (int *)(a2 + 18);
  *(_QWORD *)&v42.cxLeftWidth = a4 - a5;
  v28 = (_QWORD *)((char *)a5 + 1784);
  v37 = 18;
  *(_QWORD *)&v40.cxLeftWidth = a2 + 18;
  *(_QWORD *)&v41.cxLeftWidth = (char *)a5 + 1784;
  do
  {
    v29 = v26;
    v44 = v26;
    if ( *v27 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, *v27, 2u, &pMargins, &v38);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      v28 = *(_QWORD **)&v41.cxLeftWidth;
      v27 = *(int **)&v40.cxLeftWidth;
      *(_QWORD *)(*(_QWORD *)&v42.cxLeftWidth + *(_QWORD *)&v41.cxLeftWidth) = v38;
      *v28 = v39;
      v29 = v44;
    }
    ++v27;
    v26 = v37 + 1;
    *(_QWORD *)&v40.cxLeftWidth = v27;
    v28 += 2;
    ++v37;
    *(_QWORD *)&v41.cxLeftWidth = v28;
  }
  while ( v29 < 21 );
  if ( (_WORD)v11 == 1168 )
  {
    v31 = *(_QWORD *)&v42.cxLeftWidth;
    for ( i = 18LL; i <= 21; ++i )
    {
      if ( a2[i] )
      {
        v33 = *(CBaseObject **)((char *)v25 + v31);
        if ( v33 )
        {
          CBaseObject::Release(v33);
          *(CBaseObject **)((char *)v25 + v31) = 0LL;
        }
        if ( *v25 )
        {
          CBaseObject::Release(*v25);
          *v25 = 0LL;
        }
      }
      v25 += 2;
    }
    v6 = v45;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v6, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1253;
    goto LABEL_59;
  }
  return v11;
}
