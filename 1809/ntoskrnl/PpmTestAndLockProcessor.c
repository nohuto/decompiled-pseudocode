/*
 * XREFs of PpmTestAndLockProcessor @ 0x1402D5EB8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402D4454 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D45B4 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmIdleLockProcessor @ 0x1402D4F10 (PpmIdleLockProcessor.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmTestAndLockProcessor(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int32 *v3; // r13
  __int64 v4; // r14
  unsigned __int32 v5; // ebx
  unsigned int v9; // edi
  unsigned int v10; // r8d
  __int64 i; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int32 *)(a1 + 23872);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 23872);
  memset(v17, 0, sizeof(v17));
  v17[1] = PopIdleTransitionTimeout;
  BYTE4(v17[3]) = 1;
  v17[2] = a1;
  while ( (v5 & 0xFF000000) == 0x2000000 )
  {
    PpmIdleTransitionStall((__int64)v17);
    v5 = *v3;
  }
  v9 = -1073741782;
  if ( HIBYTE(v5) - 3 > 2u )
    return v9;
  if ( a3 )
  {
    v10 = *(_DWORD *)a3;
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(a3 + 8) + 24 * i;
      if ( *(_DWORD *)(v4 + 4) == *(_DWORD *)(a1 + 23860) )
        break;
    }
    if ( (_DWORD)i == v10 || !*(_BYTE *)(v4 + 2) )
      return v9;
    if ( !*(_BYTE *)v4 )
      return 0;
  }
  v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v13 = *(_QWORD *)&a2[4 * (v12 >> 6) + 4] >> (v12 & 0x3F);
  if ( (v13 & 1) != 0 )
    return 0;
  LODWORD(v13) = KeGetPcr()->Prcb.Number;
  v14 = *(_QWORD *)(a1 + 23808);
  v15 = (unsigned int)v13;
  _InterlockedOr64(
    (volatile signed __int64 *)(v14
                              + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v13] >> 6)
                              + 80),
    1LL << (KiProcessorIndexToNumberMappingTable[v13] & 0x3F));
  v9 = PpmIdleLockProcessor(v3);
  if ( (v9 & 0x80000000) != 0 )
  {
    _InterlockedAnd64(
      (volatile signed __int64 *)(v14
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v15] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v15] & 0x3F)));
    return v9;
  }
  KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
  if ( !a3 || *(_DWORD *)(v4 + 4) == *(_DWORD *)(a1 + 23860) )
    return 0;
  return v9;
}
