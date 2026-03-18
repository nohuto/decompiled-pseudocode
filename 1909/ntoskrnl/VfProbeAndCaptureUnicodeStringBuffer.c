/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x140964310
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409642D8 (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, POOL_TYPE a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v6; // di
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  PVOID PoolWithTag; // rax
  PVOID v10; // rsi

  v4 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = *((_QWORD *)a1 + 1);
    v8 = v7 + v4;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < v7 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(a2, *a1, 0x43536656u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v10;
    v6 = *a1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = v6;
  return 0LL;
}
