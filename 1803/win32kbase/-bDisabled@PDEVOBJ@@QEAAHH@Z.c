/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0069690 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C0069878 (DrvEnableMDEV.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00CD144 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C006C818 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 Objt; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v4 = *(_QWORD *)this;
  if ( a2 || (*(_DWORD *)(v4 + 40) & 0x20000) != 0 )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v4 + 24);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 && !*(_QWORD *)(v4 + 32) )
      {
        v14 = *(_QWORD *)(**(_QWORD **)(v13 + 1792) + 48LL);
        if ( v4 != v14 )
          *(_QWORD *)(v4 + 32) = v14;
      }
    }
  }
  v5 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore();
  v7 = 0LL;
  while ( 1 )
  {
    LOBYTE(v6) = 1;
    Objt = HmgSafeNextObjt(v7, v6);
    if ( !Objt )
      break;
    v7 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v5 )
    {
      v9 = *(_DWORD *)(Objt + 36);
      if ( a2 )
        v10 = v9 | 0x1000;
      else
        v10 = v9 & 0xFFFFEFFF;
      *(_DWORD *)(Objt + 36) = v10;
    }
  }
  v11 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore();
  return v11;
}
