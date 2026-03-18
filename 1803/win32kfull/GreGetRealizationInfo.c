/*
 * XREFs of GreGetRealizationInfo @ 0x1C013B79C
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C0084290 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00875CC (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  int v4; // eax
  __int64 v5; // rdi
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+38h] [rbp-8h]

  RealizationInfo = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v9 = 0;
    v8 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v8 + 496));
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  return RealizationInfo;
}
