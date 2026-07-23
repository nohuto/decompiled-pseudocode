/*
 * XREFs of MiDeleteVaTail @ 0x140075870
 * Callers:
 *     <none>
 * Callees:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v2; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  ULONG_PTR v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbp
  char v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  _KPROCESS *Process; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = (unsigned __int64 *)a1[21];
  v2 = a1[2];
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  v10 = *(_BYTE *)(v2 + 4);
  v11 = qword_14043B1D0;
  if ( (v10 & 2) == 0 )
  {
    v12 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 != 1 )
      goto LABEL_25;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[15] || Process->SecureState.SecureHandle )
      v11 = -1LL;
  }
  v12 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == 1 )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
LABEL_25:
  v14 = (unsigned int)((v10 & 8) != 0) + 1;
LABEL_17:
  if ( *(_BYTE *)(v2 + 5) || *(_QWORD *)(v2 + 16) > v11 )
  {
    if ( (v10 & 1) != 0 )
      KeFlushCurrentTbOnly(v12, v14);
    else
      KeFlushTb(v12, v14);
    *(_BYTE *)(v2 + 5) = 0;
  }
  else if ( (v10 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(v4, v2 + 24, v12);
  }
  else
  {
    KeFlushMultipleRangeTb(v4, v2 + 24, v12, (unsigned int)v14);
  }
  *(_BYTE *)(v2 + 4) &= ~8u;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0LL;
LABEL_2:
  v5 = *v1;
  if ( *v1 )
  {
    v8 = a1[3];
    if ( (*(_BYTE *)(v8 + 184) & 7) != 0 && v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v9 = v1[1];
      v15 = 3LL;
      do
      {
        v5 = (__int64)(v5 << 25) >> 16;
        v9 = v9 << 25 >> 16;
        --v15;
      }
      while ( v15 );
      MiReplicatePteChange(v5, v9);
      v8 = a1[3];
    }
    else
    {
      v5 = 0LL;
      v9 = 0LL;
    }
    MiDeletePteRun(v8, (__int64)v1);
    if ( v5 )
      MiReplicatePteChange(v5, v9);
    *v1 = 0LL;
  }
  v6 = v1[5];
  if ( v6 )
  {
    MiDecayPfnFullyInitialized(v6);
    v1[5] = 0LL;
  }
  return 0LL;
}
