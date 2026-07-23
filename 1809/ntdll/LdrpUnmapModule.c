/*
 * XREFs of LdrpUnmapModule @ 0x180076BA8
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180076BEC (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall LdrpUnmapModule(__int64 a1)
{
  void *v1; // rdx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
    {
      RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
      v1 = *(void **)(a1 + 48);
    }
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
