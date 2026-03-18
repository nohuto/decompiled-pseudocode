/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x140286B54
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140821A20 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140821EA0 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140821FF0 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140822620 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140822730 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_4(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(PagedPool, a2, 0x20206F49u);
}
