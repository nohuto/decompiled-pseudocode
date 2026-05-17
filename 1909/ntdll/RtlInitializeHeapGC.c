/*
 * XREFs of RtlInitializeHeapGC @ 0x18007DD18
 * Callers:
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 * Callees:
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 */

void __fastcall RtlInitializeHeapGC(__int64 a1)
{
  int v1; // [rsp+20h] [rbp-50h] BYREF
  __int64 v2; // [rsp+28h] [rbp-48h]
  __int64 v3; // [rsp+30h] [rbp-40h]
  __int64 v4; // [rsp+38h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    v10 = 0LL;
    if ( a1 )
    {
      v3 = 0LL;
      v4 = 0LL;
      v6 = 0LL;
      v7 = 0;
      v2 = a1;
      v5 = 0LL;
      v1 = 3;
      v9 = 72;
      v8 = 2;
      if ( (int)TpAllocTimer((_PEB_LDR_DATA *)&v10, (__int64)RtlpHpGCCallback, 0LL, (__int64)&v1) >= 0 )
      {
        RtlpHpGCTimer = v10;
        RtlpHpGCTimerInitialized = 1;
      }
    }
  }
}
