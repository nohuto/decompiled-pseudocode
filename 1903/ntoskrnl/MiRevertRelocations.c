/*
 * XREFs of MiRevertRelocations @ 0x14065A5A4
 * Callers:
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400A8B4C (MiGetSubsectionDriverProtos.c)
 *     MiPerformFixups @ 0x14065A690 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocations(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // edi
  unsigned int v9; // esi
  unsigned int v10; // r8d

  result = *(_QWORD *)(a2 + 96);
  v4 = a2 + 128;
  v5 = 0;
  while ( v4 )
  {
    MiGetSubsectionDriverProtos((_QWORD *)v4);
    v9 = a3 - v5;
    if ( v10 <= a3 - v5 )
      v9 = v10;
    if ( v9 )
    {
      do
      {
        result = MiPerformFixups(a1 + (v5++ << 12), a2, 0LL, 3);
        if ( v5 >= a3 )
          return result;
      }
      while ( --v9 );
    }
    result = *(_DWORD *)(v4 + 52) & 0x3FFFFFFF;
    v5 += result;
    if ( v5 >= a3 )
      return result;
    v4 = *(_QWORD *)(v4 + 16);
  }
  return result;
}
