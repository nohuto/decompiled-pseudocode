/*
 * XREFs of GreGetRealizationInfo @ 0x1C0166578
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C00B1990 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00B2CEC (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // edi
  int v4; // eax
  __int64 v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  RealizationInfo = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v8 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v8 + 504));
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  return RealizationInfo;
}
