/*
 * XREFs of GreGetRealizationInfo @ 0x1C013790C
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C005FC50 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C0060F4C (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[7]; // [rsp+30h] [rbp-38h] BYREF

  RealizationInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v8 = 0;
    v7 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v9, 0, 2u);
    v5 = v7;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v7, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return RealizationInfo;
}
