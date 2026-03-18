/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1402F6618
 * Callers:
 *     RtlUnwindEx @ 0x14009DF30 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A18B0 (RtlpxLookupFunctionTable.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DD30 (VslGetNestedPageProtectionFlags.c)
 *     bsearch_s @ 0x140195DC0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1401C6420 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140682014 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2)
{
  __int64 Config; // rax
  rsize_t v4; // r8
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-28h] BYREF
  int Key; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(Key) = a2;
  if ( (VslGetNestedPageProtectionFlags() & 0x80u) != 0LL )
  {
    if ( a1 < *(&xmmword_140558020 + 1) || a1 >= *(&xmmword_140558020 + 1) + (unsigned int)qword_140558030 )
      RtlpxLookupFunctionTable(a1, (__int64)BaseAddress);
    else
      *(_OWORD *)BaseAddress = *(_OWORD *)&xmmword_140558020;
    if ( !BaseAddress[1]
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress[1])) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - LODWORD(BaseAddress[1]), (v4 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v4,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0LL;
}
