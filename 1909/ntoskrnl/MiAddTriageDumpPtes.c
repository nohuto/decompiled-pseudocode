/*
 * XREFs of MiAddTriageDumpPtes @ 0x1402C5A80
 * Callers:
 *     MmSnapTriageDumpInformation @ 0x1402C6370 (MmSnapTriageDumpInformation.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall MiAddTriageDumpPtes(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  int v4; // eax

  v2 = a1;
  for ( i = 0; i < 4; ++i )
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !i )
    {
      v4 = MI_IS_PHYSICAL_ADDRESS(a1);
      if ( v4 )
        continue;
    }
    LOBYTE(v4) = IoAddTriageDumpDataBlock(v2, (PVOID)8);
  }
  return v4;
}
