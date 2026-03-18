/*
 * XREFs of MiDeleteVaTail @ 0x14004DEC0
 * Callers:
 *     <none>
 * Callees:
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     MiDecayPfnFullyInitialized @ 0x1401184D0 (MiDecayPfnFullyInitialized.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  _KPROCESS *Process; // rdx
  unsigned int *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned int v13; // eax
  __int64 v14; // r9
  int *v15; // rdx
  __int64 v16; // rcx

  v1 = (unsigned __int64 *)a1[20];
  MiTerminateWsleCluster(v1 + 6);
  v4 = (unsigned int *)a1[1];
  v5 = v4[3];
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  v11 = *((unsigned __int8 *)v4 + 4);
  v12 = qword_140465850;
  if ( (v11 & 2) == 0 )
  {
    v13 = *v4;
    if ( *v4 != 1 )
      goto LABEL_25;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[19] || Process->SecureState.SecureHandle )
      v12 = -1LL;
  }
  v13 = *v4;
  if ( *v4 == 1 )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
LABEL_25:
  v14 = (unsigned int)((v11 & 8) != 0) + 1;
LABEL_17:
  if ( *((_BYTE *)v4 + 5) || *((_QWORD *)v4 + 2) > v12 )
  {
    if ( (v11 & 1) != 0 )
      KeFlushCurrentTbOnly(v13, Process, v11, v14);
    else
      KeFlushTb(v13, (unsigned int)v14);
    *((_BYTE *)v4 + 5) = 0;
  }
  else
  {
    v15 = (int *)(v4 + 6);
    if ( (v11 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v5, v15, v13, v14);
    else
      KeFlushMultipleRangeTb(v5, v15, v13, v14);
  }
  *((_BYTE *)v4 + 4) &= ~8u;
  v4[3] = 0;
  *((_QWORD *)v4 + 2) = 0LL;
LABEL_2:
  v6 = *v1;
  if ( *v1 )
  {
    v9 = a1[2];
    if ( (*(_BYTE *)(v9 + 184) & 7) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v10 = v1[1];
      v16 = 3LL;
      do
      {
        v6 = (__int64)(v6 << 25) >> 16;
        v10 = v10 << 25 >> 16;
        --v16;
      }
      while ( v16 );
      MiReplicatePteChange(v6, v10);
      v9 = a1[2];
    }
    else
    {
      v6 = 0LL;
      v10 = 0LL;
    }
    MiDeletePteRun(v9, (__int64)v1);
    if ( v6 )
      MiReplicatePteChange(v6, v10);
    *v1 = 0LL;
  }
  v7 = v1[3];
  if ( v7 )
  {
    MiDecayPfnFullyInitialized(v7);
    v1[3] = 0LL;
  }
  return 0LL;
}
