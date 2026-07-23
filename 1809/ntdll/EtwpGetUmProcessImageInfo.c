/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x18010F5A0
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpTrackRegBinaryInfo @ 0x18008D3C8 (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = EtwpLoggerArray;
  v4 = a1 & 0x7FFF;
  v9 = v4;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( v4 >= 0x40 )
  {
    v5 = EtwpDemuxUmTraceHandle(a1, &v9);
    if ( v5 )
    {
      v6 = v10;
      goto LABEL_10;
    }
    v4 = v9;
    v2 = EtwpLoggerArray;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v4 + 8));
  v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v4);
  if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v4) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8));
    return 4201;
  }
  v5 = 0;
LABEL_10:
  if ( !v5 )
  {
    v7 = *(_DWORD *)(v6 + 324);
    if ( (v7 & 0x800) != 0 && (v7 & 0x10000) == 0 )
      v5 = EtwpProviderArrivalCallback(v6, a2);
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v6 + 20) + 8));
  }
  return v5;
}
