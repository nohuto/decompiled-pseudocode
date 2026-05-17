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
  __int64 v0; // rdx
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlImageRvaToSection(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + *(unsigned int *)(v1 + 12);
  v3 = *(unsigned int *)(v1 + 8);
  result = sub_18007234C(v2, v3);
  qword_18017A280 = v3;
  qword_18017A290 = v2;
  return result;
}
