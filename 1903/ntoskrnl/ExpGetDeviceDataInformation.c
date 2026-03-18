/*
 * XREFs of ExpGetDeviceDataInformation @ 0x140908F10
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140882810 (KseQueryDeviceDataList.c)
 *     ExpStringCapture @ 0x14090A554 (ExpStringCapture.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpGetDeviceDataInformation(int a1, unsigned __int64 a2, int a3)
{
  PVOID PoolWithQuotaTag; // rsi
  int v7; // ebx
  unsigned int v8; // ebx
  int DeviceData; // eax
  unsigned int v10; // ecx
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  PVOID v14; // [rsp+A8h] [rbp+20h] BYREF

  memset(v12, 0, 0x30uLL);
  P = 0LL;
  v14 = 0LL;
  PoolWithQuotaTag = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v12[0] = *(_OWORD *)a2;
  v12[1] = *(_OWORD *)(a2 + 16);
  v12[2] = *(_OWORD *)(a2 + 32);
  v7 = ExpStringCapture(&P, v12);
  if ( v7 >= 0 )
  {
    if ( a1 != 136 || (v7 = ExpStringCapture(&v14, &v12[1]), v7 >= 0) )
    {
      if ( DWORD1(v12[2]) )
      {
        if ( !*((_QWORD *)&v12[2] + 1) )
        {
          v7 = -1073741811;
          goto LABEL_21;
        }
        v8 = DWORD1(v12[2]);
        ProbeForWrite(*((volatile void **)&v12[2] + 1), DWORD1(v12[2]), 2u);
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x4E494444u);
        if ( !PoolWithQuotaTag )
        {
          v7 = -1073741801;
          goto LABEL_21;
        }
      }
      if ( a1 == 136 )
        DeviceData = KseQueryDeviceData((PCWSTR)P, (__int64)v14, &v12[2], (unsigned int *)&v12[2] + 1, PoolWithQuotaTag);
      else
        DeviceData = KseQueryDeviceDataList(
                       (wchar_t *)P,
                       (__int64)PoolWithQuotaTag,
                       DWORD1(v12[2]),
                       (__int64)&v12[2] + 4);
      v7 = DeviceData;
      v10 = DWORD1(v12[2]);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v12[2];
      if ( DeviceData >= 0 )
        memmove(*((void **)&v12[2] + 1), PoolWithQuotaTag, v10);
    }
  }
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0x50535845u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x50535845u);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0x4E494444u);
  return (unsigned int)v7;
}
