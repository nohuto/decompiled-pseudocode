/*
 * XREFs of MmDiscardDriverSection @ 0x1409F8A3C
 * Callers:
 *     KeFreeInitializationCode @ 0x14098FB24 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  PVOID v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = MiLookupDataTableEntry(a1, 1);
  v3 = (PVOID)v2[6];
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v5, (unsigned __int64 *)&v6);
    if ( v5 )
      return MiFreeInitializationCode((__int64)v2, v5, v6);
  }
  return result;
}
