/*
 * XREFs of EtwpTrackProviderRegistration @ 0x1405C2F34
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  bool v4; // di
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rbp

  result = *(unsigned __int16 *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (*(_WORD *)(a1 + 98) & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  if ( (result & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      result = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 392), *(unsigned __int16 *)(v3 + 88), 0LL);
      v7 = result;
      if ( result )
      {
        LOBYTE(v6) = v4;
        EtwpProviderArrivalCallback(result, v6, a1);
        return EtwpReleaseLoggerContext(v7, 0LL);
      }
    }
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v8) & *(_BYTE *)(a1 + 100)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v3 + v9 + 134), 0LL);
        v11 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(result + 832) & 0x2000000) != 0 )
          {
            LOBYTE(v10) = v4;
            EtwpProviderArrivalCallback(result, v10, a1);
          }
          result = EtwpReleaseLoggerContext(v11, 0LL);
        }
      }
      if ( ((unsigned __int8)(1 << v8) & *(_BYTE *)(a1 + 102)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(
                   EtwpHostSiloState,
                   *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v9 + 134),
                   0LL);
        v13 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(result + 832) & 0x2000000) != 0 )
          {
            LOBYTE(v12) = v4;
            EtwpProviderArrivalCallback(result, v12, a1);
          }
          result = EtwpReleaseLoggerContext(v13, 0LL);
        }
      }
      ++v8;
      v9 += 32LL;
    }
    while ( v8 < 8 );
  }
  return result;
}
