/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x1408D3334
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CADC0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408CFB80 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1 + 2, 0x72766E45u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
