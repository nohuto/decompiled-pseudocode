/*
 * XREFs of InitUserScreen @ 0x1C0098FE4
 * Callers:
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C0019D40 (CreateEmptyRgnPublic.c)
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     GreCreateCompatibleDC @ 0x1C001DD10 (GreCreateCompatibleDC.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxODI_ColorInit @ 0x1C00467D0 (xxxODI_ColorInit.c)
 *     CreateProfileUserName @ 0x1C0046DA0 (CreateProfileUserName.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0049674 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 *     GreGetSystemFont @ 0x1C0099670 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x1C0099698 (GreMarkDCUnreadable.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C0099700 (ApiSetEditionInitGlobalCursorSizes.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rax
  _DWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int v6; // edi
  void *v7; // rcx
  _WORD *v8; // rbx
  int updated; // ebx
  unsigned int v10; // ebx
  bool v11; // di
  char v12; // di
  bool v13; // bl
  char v14; // bl
  bool v15; // di
  char v16; // di
  bool v17; // bl
  char v18; // bl
  bool v19; // di
  char v20; // di
  bool v21; // bl
  char v22; // bl
  bool v23; // di
  char v24; // di
  bool v25; // bl
  char v26; // bl
  bool v27; // si
  char v28; // si
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF
  char v36; // [rsp+60h] [rbp+8h] BYREF

  ProfileUserName = CreateProfileUserName((__int64)v35);
  v1 = gpsi;
  v2 = ProfileUserName;
  *((_DWORD *)gpsi + 1275) = 1;
  v1[1301] = 1;
  *((_QWORD *)v1 + 640) = GreGetSystemFont(1LL);
  *((_QWORD *)v1 + 653) = GreGetSystemFont(0LL);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 0, 0);
  v3 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v3 )
    goto LABEL_33;
  GreSelectFont(v3, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 56), 0, 0, 1);
  *(_QWORD *)(gpDispInfo + 64) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v4 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v4 )
    goto LABEL_33;
  GreSelectFont(v4, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64), 0, 0, 1);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v5 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v6 = v5 && ghdcMem2 != 0LL;
  if ( !v6 )
    goto LABEL_30;
  GreSetDCOwnerEx((__int64)ghdcMem, 0, 0, 1);
  GreSetDCOwnerEx((__int64)ghdcMem2, 0, 0, 1);
  if ( !CreateCachedMonitor() )
    goto LABEL_33;
  v7 = gpsi;
  *((_WORD *)gpsi + 3499) = gdmLogPixels;
  v8 = gpsi;
  *(_WORD *)(PsGetCurrentProcessWin32Process(v7) + 284) = v8[3499];
  if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes()
    && (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36),
        updated = UpdateUserScreen(),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36),
        updated >= 0) )
  {
    ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
    v10 = ghrgnInv0 != 0LL ? v6 : 0;
    ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
    v11 = ghrgnInv1 != 0LL;
    ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnInv2 )
      v12 = v10 & v11;
    else
      v12 = 0;
    ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
    v13 = ghrgnSPB1 != 0LL;
    ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnSPB2 )
      v14 = v12 & v13;
    else
      v14 = 0;
    ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
    v15 = ghrgnSCR != 0LL;
    ghrgnSW = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnSW )
      v16 = v14 & v15;
    else
      v16 = 0;
    ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
    v17 = ghrgnScrl1 != 0LL;
    ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrl2 )
      v18 = v16 & v17;
    else
      v18 = 0;
    ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
    v19 = ghrgnScrlVis != 0LL;
    ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrlSrc )
      v20 = v18 & v19;
    else
      v20 = 0;
    ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
    v21 = ghrgnScrlDst != 0LL;
    ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnScrlValid )
      v22 = v20 & v21;
    else
      v22 = 0;
    ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
    v23 = ghrgnInvalidSum != 0LL;
    ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnVisNew )
      v24 = v22 & v23;
    else
      v24 = 0;
    ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
    v25 = ghrgnSWP1 != 0LL;
    ghrgnValid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnValid )
      v26 = v24 & v25;
    else
      v26 = 0;
    ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
    v27 = ghrgnValidSum != 0LL;
    ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
    if ( ghrgnInvalid )
      v28 = v26 & v27;
    else
      v28 = 0;
    ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
    LOBYTE(v6) = v28 & (ghrgnGDC != 0LL);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v29, v30);
    v31 = 5LL;
    do
    {
      v6 = (CreateCacheDC(0LL, 2050LL, 0LL) != 0) & (unsigned __int8)v6;
      --v31;
    }
    while ( v31 );
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v32, v33);
    if ( v6 )
    {
      GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 56));
      *((_DWORD *)gpsi + 496) = 0;
      *((_DWORD *)gpsi + 541) = InitSafeBootMode;
      *((_DWORD *)gpsi + 547) = 0;
      xxxODI_ColorInit(v2);
      if ( (int)IsPaintScreenBackgroundSupported() >= 0 )
        PaintScreenBackground();
    }
  }
  else
  {
LABEL_33:
    v6 = 0;
  }
LABEL_30:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v35);
  return v6;
}
