/*
 * XREFs of PspDeleteThreadSecurity @ 0x1405FC2C4
 * Callers:
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1744);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1904);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1904) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1744), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1640) = 0LL;
  return result;
}
