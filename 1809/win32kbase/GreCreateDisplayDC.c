/*
 * XREFs of GreCreateDisplayDC @ 0x1C001D950
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001DD10 (GreCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C005E130 (NtGdiCreateMetafileDC.c)
 *     UserGetDesktopDC @ 0x1C005E630 (UserGetDesktopDC.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00137F0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001381C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C001DDF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00202A4 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0021520 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0023B9C (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C0023C68 (HmgAllocateDcAttr.c)
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C00ABA50 (DC--AcquireDcVisRgnShared.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C00F6574 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3)
{
  char v3; // r15
  HDC v6; // rsi
  int v7; // r9d
  _QWORD *v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  BOOL v13; // ecx
  unsigned int v14; // eax
  int v15; // edx
  struct _DC_ATTR *DcAttr; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+48h] [rbp-50h]
  struct DC *v25[2]; // [rsp+50h] [rbp-48h] BYREF
  int v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v28 = a3;
  v3 = a3;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  v29 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v25, a2, v3 & 1, v7);
  if ( !v25[0] )
    goto LABEL_38;
  *((_QWORD *)v25[0] + 6) = a1;
  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v29);
  *((_DWORD *)v25[0] + 18) = *(_DWORD *)(a1 + 1824);
  *((_DWORD *)v25[0] + 19) = *(_DWORD *)(a1 + 2128);
  *((_QWORD *)v25[0] + 3) = *(_QWORD *)(a1 + 1800);
  *((_QWORD *)v25[0] + 8) = *(_QWORD *)(a1 + 48);
  if ( a2 == 1 )
  {
    v27 = 0x100000001LL;
    *((_QWORD *)v25[0] + 64) = 0x100000001LL;
  }
  else
  {
    v8 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v29, &v22);
    *((_QWORD *)v25[0] + 64) = *v8;
    if ( a2 )
      goto LABEL_20;
    v9 = *((_DWORD *)v25[0] + 9) | 0x200;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
      v9 = *((_DWORD *)v25[0] + 9) & 0xFFFFFDFF;
    *((_DWORD *)v25[0] + 9) = v9;
    v10 = *((_DWORD *)v25[0] + 9) | 1;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
      v10 = *((_DWORD *)v25[0] + 9) & 0xFFFFFFFE;
    *((_DWORD *)v25[0] + 9) = v10;
    v11 = *((_DWORD *)v25[0] + 9) | 0x1000;
    if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
      v11 = *((_DWORD *)v25[0] + 9) & 0xFFFFEFFF;
    *((_DWORD *)v25[0] + 9) = v11;
    if ( (*(_DWORD *)(a1 + 40) & 0x80u) != 0 )
      goto LABEL_20;
    DC::pSurface(v25[0], *(struct SURFACE **)(a1 + 2552));
    v12 = *((_DWORD *)v25[0] + 9);
    v13 = (v12 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2552) + 112LL) & 0x200) != 0;
    v14 = v12 & 0xFFFF7FFF;
    v15 = v12 | 0x8000;
    if ( !v13 )
      v15 = v14;
    *((_DWORD *)v25[0] + 9) = v15;
  }
  *((_QWORD *)v25[0] + 8) = ghsemGreLock;
LABEL_20:
  if ( (unsigned int)DC::bSetDefaultRegion(v25[0]) )
  {
    if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
      XDCOBJ_vSetDefaultFontWrap(v25, *(_DWORD *)(a1 + 40) & 1);
    DC::AcquireDcVisRgnShared(v25[0], &v23);
    DC::vUpdate_VisRect(v25[0], *((struct REGION **)v25[0] + 143));
    if ( v24 )
      CPushLock::ReleaseLock((CPushLock *)(v23 + 1112));
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
    v21[2] = DcAttr;
    if ( DcAttr )
    {
      if ( a1 == *(_QWORD *)(gpDispInfo + 40) )
        **((_DWORD **)v25[0] + 122) |= 2u;
      v26 = 1;
      if ( (v3 & 2) != 0 )
        *((_DWORD *)v25[0] + 9) |= 8u;
      SetupDCAttributes(v25[0], DcAttr);
      v21[0] = *(_QWORD *)(a1 + 32);
      v17 = v21[0];
      *((_QWORD *)v25[0] + 7) = 0LL;
      if ( v17
        && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29)
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v21) )
      {
        *((_QWORD *)v25[0] + 7) = v18;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)v21);
      }
      v6 = *(HDC *)v25[0];
    }
  }
  if ( v6 )
    GreValidateVisrgn(v6);
LABEL_38:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v25);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return v6;
}
