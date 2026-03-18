/*
 * XREFs of HmgShareLockCheck @ 0x1C002CA80
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C003DB54 (GreSetBitmapOwnerEx.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 *     bDfbSurfacesMigrated @ 0x1C004A640 (bDfbSurfacesMigrated.c)
 *     GreDCSelectPen @ 0x1C0059C10 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C0059E10 (GreDCSelectBrush.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005CC28 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0073954 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BFA20 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00CD144 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ebx
  GdiHandleManager *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  _DWORD *v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int16 *v26; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v26 = 0LL;
  v27 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v27 )
    return v4;
  v5 = v26;
  if ( *((_BYTE *)v26 + 14) == a2 && v26[6] == v3 )
  {
    v6 = *(_DWORD *)v26 & 0xFFFFFF;
    if ( v6 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v26,
                                    1)
             + 13) == HIWORD(v6) )
          v6 = (unsigned __int16)v6;
      }
      else
      {
        v6 = *v26;
      }
    }
    v7 = *((_QWORD *)gpHandleManager + 2);
    v8 = *(_DWORD *)(v7 + 2056);
    if ( v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      goto LABEL_43;
    v9 = ((v6 - v8) >> 16) + 1;
    if ( v6 < v8 )
      v9 = 0LL;
    v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
    if ( (_DWORD)v9 )
      v6 += ((1 - (_DWORD)v9) << 16) - v8;
    if ( v6 >= *(_DWORD *)(v10 + 20) )
LABEL_43:
      v4 = 0LL;
    else
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                     + 16LL * (unsigned __int8)v6
                     + 8);
    ++*(_DWORD *)(v4 + 8);
    if ( a2 == 5 )
    {
      v24 = *(_QWORD *)(v4 + 680);
      v25 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_16;
      v24 = *(_QWORD *)(v4 + 136);
      v25 = 2LL;
    }
    TrackObjectReferenceIncrement(v25, v24);
  }
LABEL_16:
  v11 = *v5 & 0xFFFFFF;
  if ( v11 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v5,
                                  1)
           + 13) == HIWORD(v11) )
        v11 = (unsigned __int16)v11;
    }
    else
    {
      v11 = *(unsigned __int16 *)v5;
    }
  }
  v12 = gpHandleManager;
  v13 = *((_QWORD *)gpHandleManager + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v11 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_47;
  v15 = ((v11 - v14) >> 16) + 1;
  if ( v11 < v14 )
    v15 = 0LL;
  v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
  if ( (_DWORD)v15 )
    v11 += ((1 - (_DWORD)v15) << 16) - v14;
  if ( v11 >= *(_DWORD *)(v16 + 20) )
LABEL_47:
    v17 = 0LL;
  else
    v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                     + 16LL * (unsigned __int8)v11
                     + 8);
  v18 = (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000;
  if ( v18 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v17,
                                  1)
           + 13) == HIWORD(v18) )
        v18 = (unsigned __int16)v18;
    }
    else
    {
      v18 = (unsigned __int16)*v17;
    }
  }
  v19 = *((_QWORD *)v12 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v18 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
  {
    v21 = ((v18 - v20) >> 16) + 1;
    if ( v18 < v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v18 += ((1 - (_DWORD)v21) << 16) - v20;
    *(_DWORD *)(*(_QWORD *)v22 + 24LL * v18 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v4;
}
