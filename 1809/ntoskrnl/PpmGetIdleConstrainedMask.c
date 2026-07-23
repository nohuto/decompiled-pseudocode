/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x1402D412C
 * Callers:
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     PpmEstimateIdleDuration @ 0x1401805C0 (PpmEstimateIdleDuration.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall PpmGetIdleConstrainedMask(_DWORD *a1)
{
  char v2; // di
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  __int64 v7; // r10

  a1[1] = 0;
  *a1 = 1310721;
  v2 = 0;
  memset(a1 + 2, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *v3;
      v6 = *(_WORD *)(*v3 + 144);
      v7 = *(_QWORD *)(*v3 + 72);
      if ( *(_WORD *)a1 <= v6 )
        *(_WORD *)a1 = v6 + 1;
      *(_QWORD *)&a1[2 * v6 + 2] |= v7;
      if ( *(_QWORD *)(v5 + 72) )
        v2 = 1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
