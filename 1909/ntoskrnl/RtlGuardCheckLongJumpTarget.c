/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x140314D54
 * Callers:
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14012FF70 (RtlPcToFileHeader.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     bsearch_s @ 0x1401A0CD0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1401CD590 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v5; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  BaseOfImage = IsLongJumpTarget;
  LOBYTE(Key) = IsFastFail;
  if ( (VslGetNestedPageProtectionFlags() & 0x80u) != 0LL )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v5 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v5,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0;
}
