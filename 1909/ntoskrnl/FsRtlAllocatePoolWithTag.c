/*
 * XREFs of FsRtlAllocatePoolWithTag @ 0x140282FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
