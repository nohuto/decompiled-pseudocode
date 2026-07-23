/*
 * XREFs of LdrpValidateEntrySection @ 0x18002717C
 * Callers:
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 */

bool __fastcall LdrpValidateEntrySection(__int64 a1)
{
  unsigned int AddressOfEntryPoint; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, *(PVOID *)(a1 + 48), 0LL, &OutHeaders);
  AddressOfEntryPoint = OutHeaders->OptionalHeader.AddressOfEntryPoint;
  return !AddressOfEntryPoint
      || !*(_QWORD *)(a1 + 56)
      || AddressOfEntryPoint >= OutHeaders->OptionalHeader.SizeOfHeaders;
}
