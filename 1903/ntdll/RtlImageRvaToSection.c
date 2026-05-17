/*
 * XREFs of RtlImageRvaToSection @ 0x18001EFD0
 * Callers:
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x180085120 (RtlImageRvaToVa.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageRvaToSection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // ecx

  v3 = *(unsigned __int16 *)(a1 + 6);
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v4 + 16) + v6 )
      break;
    v4 += 40LL;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  return v4;
}
