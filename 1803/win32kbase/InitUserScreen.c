/*
 * XREFs of InitUserScreen @ 0x1C00A67B0
 * Callers:
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C001CD20 (CreateEmptyRgnPublic.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF60 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     CreateProfileUserName @ 0x1C00A7F70 (CreateProfileUserName.c)
 *     xxxODI_ColorInit @ 0x1C00AA830 (xxxODI_ColorInit.c)
 *     GreGetSystemFont @ 0x1C00C8480 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x1C00DADB8 (GreMarkDCUnreadable.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rax
  _DWORD *v1; // rbx
  __int64 v2; // rbp
  int v3; // r9d
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  bool v7; // bl
  void *v8; // rcx
  _WORD *v9; // rbx
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  int updated; // ebx
  unsigned int v13; // ebx
  bool v14; // di
  char v15; // di
  bool v16; // bl
  char v17; // bl
  bool v18; // di
  char v19; // di
  bool v20; // bl
  char v21; // bl
  bool v22; // di
  char v23; // di
  bool v24; // bl
  char v25; // bl
  bool v26; // di
  char v27; // di
  bool v28; // bl
  char v29; // bl
  bool v30; // si
  char v31; // si
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v36; // r8d
  _BYTE v38[56]; // [rsp+20h] [rbp-38h] BYREF
  char v39; // [rsp+60h] [rbp+8h] BYREF

  ProfileUserName = CreateProfileUserName(v38);
  v1 = gpsi;
  v2 = ProfileUserName;
  *((_DWORD *)gpsi + 1275) = 1;
  v1[1301] = 1;
  *((_QWORD *)v1 + 640) = GreGetSystemFont(1LL);
  *((_QWORD *)v1 + 653) = GreGetSystemFont(0LL);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 0, 0, v3);
  v4 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v4 )
    goto LABEL_2;
  GreSelectFont(v4, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 56), 0, 0, 1);
  *(_QWORD *)(gpDispInfo + 64) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v6 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v6 )
    goto LABEL_2;
  GreSelectFont(v6, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64), 0, 0, 1);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v7 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v5 = v7 && ghdcMem2 != 0LL;
  if ( !v5 )
    goto LABEL_46;
  GreSetDCOwnerEx((unsigned int)ghdcMem, 0, 0, 1);
  GreSetDCOwnerEx((unsigned int)ghdcMem2, 0, 0, 1);
  if ( !CreateCachedMonitor() )
    goto LABEL_2;
  v8 = gpsi;
  *((_WORD *)gpsi + 3499) = gdmLogPixels;
  v9 = gpsi;
  *(_WORD *)(PsGetCurrentProcessWin32Process(v8) + 284) = v9[3499];
  v10 = *((_WORD *)gpsi + 3499);
  if ( v10 >= 0x90u )
  {
    if ( v10 >= 0xC0u )
      v11 = v10 >= 0x120u ? (v10 < 0x180u ? 96 : 128) : 64;
    else
      v11 = 48;
  }
  else
  {
    v11 = 32;
  }
  *((_WORD *)gpsi + 3500) = v11;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v39);
  updated = UpdateUserScreen();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v39);
  if ( updated < 0 )
  {
LABEL_2:
    v5 = 0;
    goto LABEL_46;
  }
  ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
  v13 = ghrgnInv0 != 0LL ? v5 : 0;
  ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
  v14 = ghrgnInv1 != 0LL;
  ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnInv2 )
    v15 = v13 & v14;
  else
    v15 = 0;
  ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
  v16 = ghrgnSPB1 != 0LL;
  ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnSPB2 )
    v17 = v15 & v16;
  else
    v17 = 0;
  ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
  v18 = ghrgnSCR != 0LL;
  ghrgnSW = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnSW )
    v19 = v17 & v18;
  else
    v19 = 0;
  ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
  v20 = ghrgnScrl1 != 0LL;
  ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnScrl2 )
    v21 = v19 & v20;
  else
    v21 = 0;
  ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
  v22 = ghrgnScrlVis != 0LL;
  ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnScrlSrc )
    v23 = v21 & v22;
  else
    v23 = 0;
  ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
  v24 = ghrgnScrlDst != 0LL;
  ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnScrlValid )
    v25 = v23 & v24;
  else
    v25 = 0;
  ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
  v26 = ghrgnInvalidSum != 0LL;
  ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnVisNew )
    v27 = v25 & v26;
  else
    v27 = 0;
  ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
  v28 = ghrgnSWP1 != 0LL;
  ghrgnValid = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnValid )
    v29 = v27 & v28;
  else
    v29 = 0;
  ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
  v30 = ghrgnValidSum != 0LL;
  ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
  if ( ghrgnInvalid )
    v31 = v29 & v30;
  else
    v31 = 0;
  ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
  LOBYTE(v5) = v31 & (ghrgnGDC != 0LL);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v32, v33);
  v34 = 5LL;
  do
  {
    v5 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v5;
    --v34;
  }
  while ( v34 );
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v35, v36);
  if ( v5 )
  {
    GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 56));
    *((_DWORD *)gpsi + 496) = 0;
    *((_DWORD *)gpsi + 541) = InitSafeBootMode;
    *((_DWORD *)gpsi + 547) = 0;
    xxxODI_ColorInit(v2);
    if ( (int)IsPaintScreenBackgroundSupported() >= 0 )
      PaintScreenBackground();
  }
LABEL_46:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v38);
  return v5;
}
