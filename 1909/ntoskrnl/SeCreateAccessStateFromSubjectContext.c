/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x1405B21D0
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 */

__int64 __fastcall SeCreateAccessStateFromSubjectContext(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        GENERIC_MAPPING *a5)
{
  void *v7; // rcx
  int AccessStateFromSubjectContext; // edi

  v7 = *(void **)a1;
  if ( v7 )
    ObfReferenceObject(v7);
  ObfReferenceObject(*(PVOID *)(a1 + 16));
  AccessStateFromSubjectContext = SepCreateAccessStateFromSubjectContext((_OWORD *)a1, a2, a3, a4, a5);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( *(_QWORD *)a1 )
      ObfDereferenceObject(*(PVOID *)a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
