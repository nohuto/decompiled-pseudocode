/*
 * XREFs of LdrpUnmapModule @ 0x180076B98
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180076BDC (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
    result = NtUnmapViewOfSection(-1LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
