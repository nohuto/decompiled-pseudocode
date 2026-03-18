/*
 * XREFs of PspDeleteThreadSecurity @ 0x14061131C
 * Callers:
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1760);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1656) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1920);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1920) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1760), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1656) = 0LL;
  return result;
}
