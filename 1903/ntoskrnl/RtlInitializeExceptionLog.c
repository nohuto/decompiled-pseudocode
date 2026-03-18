/*
 * XREFs of RtlInitializeExceptionLog @ 0x140A3DDE0
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
    return memset(result, 0, 0x11620uLL);
  return result;
}
