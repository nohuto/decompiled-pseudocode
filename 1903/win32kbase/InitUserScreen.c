/*
 * XREFs of InitUserScreen @ 0x1C00761B4
 * Callers:
 *     InitVideo @ 0x1C00767BC (InitVideo.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreCreateCompatibleDC @ 0x1C0018460 (GreCreateCompatibleDC.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x1C002CD20 (CreateEmptyRgnPublic.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CreateCacheDC @ 0x1C003D880 (CreateCacheDC.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00493A0 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxODI_ColorInit @ 0x1C00756E0 (xxxODI_ColorInit.c)
 *     CreateProfileUserName @ 0x1C0075CC0 (CreateProfileUserName.c)
 *     GreGetSystemFont @ 0x1C0076690 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x1C00766B8 (GreMarkDCUnreadable.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C0076720 (ApiSetEditionInitGlobalCursorSizes.c)
 */

__int64 InitUserScreen()
{
  int v0; // edx
  __int64 ProfileUserName; // rbp
  _DWORD *v2; // rbx
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rcx
  bool v6; // bl
  unsigned int v7; // edi
  void *v8; // rcx
  _WORD *v9; // rbx
  int updated; // ebx
  unsigned int v11; // ebx
  bool v12; // di
  char v13; // di
  bool v14; // bl
  char v15; // bl
  bool v16; // di
  char v17; // di
  bool v18; // bl
  char v19; // bl
  bool v20; // di
  char v21; // di
  bool v22; // bl
  char v23; // bl
  bool v24; // di
  char v25; // di
  bool v26; // bl
  char v27; // bl
  bool v28; // si
  char v29; // si
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  _BYTE v36[40]; // [rsp+30h] [rbp-28h] BYREF
  char v37; // [rsp+60h] [rbp+8h] BYREF

  memset(v36, 0, 24);
  ProfileUserName = CreateProfileUserName((__int64)v36);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 14, 11, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  v2 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v2[1301] = 1;
  *((_QWORD *)v2 + 640) = GreGetSystemFont(1LL);
  *((_QWORD *)v2 + 653) = GreGetSystemFont(0LL);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 0, 0LL, v3);
  v4 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v4 )
    goto LABEL_35;
  GreSelectFont(v4, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 56), 0, 0, 0);
  *(_QWORD *)(gpDispInfo + 64) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v5 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v5 )
    goto LABEL_35;
  GreSelectFont(v5, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64), 0, 0, 0);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v6 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v7 = v6 && ghdcMem2 != 0LL;
  if ( !v7 )
    goto LABEL_32;
  GreSetDCOwnerEx((unsigned int)ghdcMem, 0, 0, 0);
  GreSetDCOwnerEx((unsigned int)ghdcMem2, 0, 0, 0);
  if ( !CreateCachedMonitor() )
    goto LABEL_35;
  v8 = gpsi;
  *((_WORD *)gpsi + 3499) = gdmLogPixels;
  v9 = gpsi;
  *(_WORD *)(PsGetCurrentProcessWin32Process(v8) + 284) = v9[3499];
  if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes()
    && (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37),
        updated = UpdateUserScreen(),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37),
        updated >= 0) )
  {
    ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
    v11 = ghrgnInv0 != 0LL ? v7 : 0;
    ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
    v12 = ghrgnInv1 != 0LL;
    ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnInv2 )
      v13 = v11 & v12;
    else
      v13 = 0;
    ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
    v14 = ghrgnSPB1 != 0LL;
    ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnSPB2 )
      v15 = v13 & v14;
    else
      v15 = 0;
    ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
    v16 = ghrgnSCR != 0LL;
    ghrgnSW = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnSW )
      v17 = v15 & v16;
    else
      v17 = 0;
    ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
    v18 = ghrgnScrl1 != 0LL;
    ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrl2 )
      v19 = v17 & v18;
    else
      v19 = 0;
    ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
    v20 = ghrgnScrlVis != 0LL;
    ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrlSrc )
      v21 = v19 & v20;
    else
      v21 = 0;
    ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
    v22 = ghrgnScrlDst != 0LL;
    ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrlValid )
      v23 = v21 & v22;
    else
      v23 = 0;
    ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
    v24 = ghrgnInvalidSum != 0LL;
    ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnVisNew )
      v25 = v23 & v24;
    else
      v25 = 0;
    ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
    v26 = ghrgnSWP1 != 0LL;
    ghrgnValid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnValid )
      v27 = v25 & v26;
    else
      v27 = 0;
    ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
    v28 = ghrgnValidSum != 0LL;
    ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnInvalid )
      v29 = v27 & v28;
    else
      v29 = 0;
    ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
    LOBYTE(v7) = v29 & (ghrgnGDC != 0LL);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v30, v31);
    v32 = 5LL;
    do
    {
      v7 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v7;
      --v32;
    }
    while ( v32 );
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v33, v34);
    if ( v7 )
    {
      GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 56));
      *((_DWORD *)gpsi + 496) = 0;
      *((_DWORD *)gpsi + 541) = InitSafeBootMode;
      *((_DWORD *)gpsi + 547) = 0;
      xxxODI_ColorInit(ProfileUserName);
      if ( (int)IsPaintScreenBackgroundSupported() >= 0 )
        PaintScreenBackground();
    }
  }
  else
  {
LABEL_35:
    v7 = 0;
  }
LABEL_32:
  if ( ProfileUserName )
    PopAndFreeAlwaysW32ThreadLock(v36);
  return v7;
}
