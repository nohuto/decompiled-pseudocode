/*
 * XREFs of PspInheritQuota @ 0x1406C52AC
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall PspInheritQuota(__int64 a1, __int64 a2)
{
  volatile signed __int32 *result; // rax

  if ( a2 )
    result = *(volatile signed __int32 **)(a2 + 1040);
  else
    result = (volatile signed __int32 *)&PspSystemQuotaBlock;
  _InterlockedIncrement(result + 128);
  _InterlockedIncrement(result + 129);
  *(_QWORD *)(a1 + 1040) = result;
  return result;
}
