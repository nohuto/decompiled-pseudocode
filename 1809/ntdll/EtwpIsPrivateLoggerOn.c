/*
 * XREFs of EtwpIsPrivateLoggerOn @ 0x1800866DC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 */

bool __fastcall EtwpIsPrivateLoggerOn(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  bool result; // al
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v1 = EtwpLoggerArray;
  v2 = a1 & 0xFFFF7FFF;
  v6 = a1 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 0;
  if ( v2 >= 0x40 )
  {
    v4 = EtwpDemuxUmTraceHandle(a1, &v6);
    if ( v4 )
    {
      v3 = v7;
      goto LABEL_5;
    }
    v2 = v6;
    v1 = EtwpLoggerArray;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16LL * v2 + 8));
  v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
  if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v2) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
    return 0;
  }
  v4 = 0;
LABEL_5:
  if ( !v4 )
  {
    result = *(_DWORD *)(v3 + 328) != 0;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
    return result;
  }
  return 0;
}
