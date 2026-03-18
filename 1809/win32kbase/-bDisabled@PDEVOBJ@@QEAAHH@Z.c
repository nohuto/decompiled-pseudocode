/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C00476A0 (DrvEnableMDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     DrvDisableMDEV @ 0x1C00A26D0 (DrvDisableMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C003E2C4 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 Objt; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // ebx

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v6 = *(_QWORD *)this;
  if ( a2 || (v4 = 0x20000, (*(_DWORD *)(v6 + 40) & 0x20000) != 0) )
  {
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && !*(_QWORD *)(v6 + 32) )
      {
        v5 = *(_QWORD *)(v7 + 1800);
        v16 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( v6 != v16 )
          *(_QWORD *)(v6 + 32) = v16;
      }
    }
  }
  v8 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore(v5, v4, v6);
  LODWORD(v9) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v9, 1);
    if ( !Objt )
      break;
    v9 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v8 )
    {
      v14 = *(_DWORD *)(Objt + 36);
      if ( a2 )
        v15 = v14 | 0x1000;
      else
        v15 = v14 & 0xFFFFEFFF;
      *(_DWORD *)(Objt + 36) = v15;
    }
  }
  v17 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore(v12, v11, v13);
  return v17;
}
