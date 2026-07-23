/*
 * XREFs of sub_1800D5DF0 @ 0x1800D5DF0
 * Callers:
 *     sub_180032A38 @ 0x180032A38 (sub_180032A38.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 *     sub_18007234C @ 0x18007234C (sub_18007234C.c)
 */

unsigned __int64 sub_1800D5DF0()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  __int64 v2; // rdi
  unsigned __int64 PhysicalAddress; // rbx
  unsigned __int64 result; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlImageRvaToSection(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + v1->VirtualAddress;
  PhysicalAddress = v1->Misc.PhysicalAddress;
  result = sub_18007234C(v2, PhysicalAddress);
  qword_18017A280 = PhysicalAddress;
  qword_18017A290 = v2;
  return result;
}
