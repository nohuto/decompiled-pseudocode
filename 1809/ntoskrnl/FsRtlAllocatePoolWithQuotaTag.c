/*
 * XREFs of FsRtlAllocatePoolWithQuotaTag @ 0x14026F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuotaTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
