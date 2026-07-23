/*
 * XREFs of PpmExitCoordinatedIdleState @ 0x1402D4030
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14005F330 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 */

char __fastcall PpmExitCoordinatedIdleState(volatile signed __int32 *a1, bool *a2)
{
  char v2; // bl
  signed __int32 v5; // eax
  unsigned __int32 i; // edx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  *a2 = 0;
  memset(v8, 0, 0x20uLL);
  v8[1] = PopCoordinatedIdleExitTimeout;
  BYTE4(v8[3]) = 1;
  v8[2] = 0LL;
LABEL_8:
  for ( i = *a1; i; i = v5 )
  {
    if ( (i & 0x4000000) == 0 )
    {
      if ( (i & 0x3000000) != 0x2000000 || ((i >> 12) & 0xFFF) != KeGetPcr()->Prcb.Number )
      {
        PpmIdleTransitionStall(v8);
        goto LABEL_8;
      }
      v2 = 1;
      *a2 = 1;
      return v2;
    }
    v5 = _InterlockedCompareExchange(a1, i & 0xFA000FFF | ((KeGetPcr()->Prcb.Number & 0xFFF | 0x2000) << 12), i);
    if ( i == v5 )
    {
      v2 = 1;
      *a2 = (i & 0xFFF) == KeGetPcr()->Prcb.Number;
      return v2;
    }
  }
  return v2;
}
