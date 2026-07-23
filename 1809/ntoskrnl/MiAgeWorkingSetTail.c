/*
 * XREFs of MiAgeWorkingSetTail @ 0x140075A40
 * Callers:
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 * Callees:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     MiProcessVmAccessedInfo @ 0x1402B382C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402B38F0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  int i; // r14d
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  char v8; // r8
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  _KPROCESS *Process; // rdx
  __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 168);
  for ( i = 0; ; i = 1 )
  {
    v4 = *(_QWORD *)(v1 + 56);
    if ( !v4 )
      goto LABEL_4;
    v5 = *(unsigned int *)(v4 + 12);
    if ( !(_DWORD)v5 )
      goto LABEL_4;
    v8 = *(_BYTE *)(v4 + 4);
    v9 = qword_14043B1D0;
    if ( (v8 & 2) == 0 )
    {
      v10 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 != 1 )
        goto LABEL_24;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[15] || Process->SecureState.SecureHandle )
        v9 = -1LL;
    }
    v10 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 != 1 )
    {
LABEL_24:
      v12 = 1LL;
      if ( (v8 & 8) != 0 )
        v12 = 2LL;
      goto LABEL_16;
    }
    v12 = 0LL;
LABEL_16:
    if ( *(_BYTE *)(v4 + 5) || *(_QWORD *)(v4 + 16) > v9 )
    {
      if ( (v8 & 1) != 0 )
        KeFlushCurrentTbOnly(v10, v12);
      else
        KeFlushTb(v10, v12);
      *(_BYTE *)(v4 + 5) = 0;
    }
    else if ( (v8 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v5, v4 + 24, v10);
    }
    else
    {
      KeFlushMultipleRangeTb(v5, v4 + 24, v10, (unsigned int)v12);
    }
    *(_BYTE *)(v4 + 4) &= ~8u;
    *(_DWORD *)(v4 + 12) = 0;
    *(_QWORD *)(v4 + 16) = 0LL;
LABEL_4:
    if ( *(_DWORD *)(v1 + 76) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), v1 + 64, 0LL);
    v6 = *(_DWORD **)(v1 + 248);
    if ( !v6 || !*v6 || !(unsigned int)MiQueryEPTAccessedState(a1, v6, (*(_DWORD *)v1 & 3) != 0) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v1 + 248), MiAgeWorkingSetEPTCallback, v1);
  }
  if ( *(_BYTE *)(a1 + 5) || i )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
