/*
 * XREFs of LdrpUnmapModule @ 0x180070468
 * Callers:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpUnloadNode @ 0x18002ECFC (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800CE128 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x1800704AC (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
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
