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
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  __int64 v2; // rdi
  unsigned __int64 PhysicalAddress; // rbx
  unsigned __int64 result; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlSectionTableFromVirtualAddress(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + v1->VirtualAddress;
  PhysicalAddress = v1->Misc.PhysicalAddress;
  result = LdrpMakePermanentImageCommit(v2, PhysicalAddress);
  LdrpMrdataSize = PhysicalAddress;
  LdrpMrdataBase = v2;
  return result;
}
