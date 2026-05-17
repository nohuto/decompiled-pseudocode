/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x18010EA18
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * a2);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
