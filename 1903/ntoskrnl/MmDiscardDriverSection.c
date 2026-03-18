/*
 * XREFs of MmDiscardDriverSection @ 0x140A3D50C
 * Callers:
 *     KeFreeInitializationCode @ 0x1409D0B2C (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140710DE8 (MiSnapDriverRange.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  PVOID v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)MiLookupDataTableEntry(a1, 1LL);
  v3 = (PVOID)v2[6];
  result = MI_IS_PHYSICAL_ADDRESS((__int64)v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v5, (unsigned __int64 *)&v6);
    if ( v5 )
      return MiFreeInitializationCode(v2, v5, v6, 0);
  }
  return result;
}
