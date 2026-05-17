/*
 * XREFs of RtlAddressInSectionTable @ 0x180075A80
 * Callers:
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     sub_1800DF390 @ 0x1800DF390 (sub_1800DF390.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11

  result = RtlImageRvaToSection(a1, a2, a3);
  if ( result )
    return v5 + *(unsigned int *)(result + 20) - (unsigned __int64)*(unsigned int *)(result + 12) + v4;
  return result;
}
