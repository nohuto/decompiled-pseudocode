/*
 * XREFs of LdrpLocateMrdata @ 0x1800D5EB0
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180032A38 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x18001EFD0 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpMakePermanentImageCommit @ 0x1800728EC (LdrpMakePermanentImageCommit.c)
 */

unsigned __int64 LdrpLocateMrdata()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlSectionTableFromVirtualAddress(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + *(unsigned int *)(v1 + 12);
  v3 = *(unsigned int *)(v1 + 8);
  result = LdrpMakePermanentImageCommit(v2, v3);
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v2;
  return result;
}
