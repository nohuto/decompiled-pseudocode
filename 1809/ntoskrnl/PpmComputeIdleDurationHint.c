/*
 * XREFs of PpmComputeIdleDurationHint @ 0x14018051C
 * Callers:
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x1401805C0 (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r9
  __int64 result; // rax
  signed __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  __int16 v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 23808);
  LODWORD(v4) = 0;
  if ( !*(_BYTE *)(a1 + 33) )
  {
    if ( KiSerializeTimerExpiration )
    {
      _m_prefetchw(&PpmPlatformIdleHint);
      v5 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v7 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v5 ^ (unsigned __int16)(v5 ^ (v5 - 1)), v5);
          if ( v5 == v7 )
            break;
          v5 = v7;
          _mm_pause();
          if ( !(_WORD)v7 )
            goto LABEL_4;
        }
        v4 = v5 >> 16;
      }
    }
  }
LABEL_4:
  PpmEstimateIdleDuration(a1, a2, a3, v4, (__int64)&v9, (__int64)&v8, (__int64)&v11, (__int64)&v10);
  *(_WORD *)(v3 + 48) |= v10;
  *(_QWORD *)(v3 + 520) = v8;
  *(_BYTE *)(v3 + 541) = v11;
  result = v9;
  *(_QWORD *)(v3 + 512) = v9;
  return result;
}
