/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x1408B7380
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x14028AF8C (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned int v4; // r15d
  unsigned int v5; // esi
  __int64 i; // rdi
  __int64 v7; // r14
  unsigned int v8; // ecx

  if ( (HvlEnlightenments & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(v2 + 16);
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)PpmRegisterPerfStates(v2, 1);
  for ( i = 0LL; ; i += 32LL )
  {
    v7 = *(_QWORD *)(v2 + 416);
    if ( *(_BYTE *)(i + v7 + 28) )
      goto LABEL_10;
    v8 = *(_DWORD *)(i + v7);
    if ( v8 == -1 )
      break;
    if ( v3 )
    {
      v1 = HvlRegisterPerfFeedbackCounters(v8, (__int128 *)(v3 + 104LL * v5));
      if ( v1 < 0 )
        goto LABEL_14;
    }
    *(_DWORD *)(KeGetPrcb(*(_DWORD *)(i + v7)) + 24024) = 3;
LABEL_10:
    if ( ++v5 >= v4 )
      return (unsigned int)PpmRegisterPerfStates(v2, 1);
  }
  v1 = -1073741811;
LABEL_14:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v1;
}
