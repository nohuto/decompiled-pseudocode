/*
 * XREFs of IopGetMaxValidMemorySizeDown @ 0x140296A68
 * Callers:
 *     IopAddRunTimeTriageDataBlocks @ 0x1402963DC (IopAddRunTimeTriageDataBlocks.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14029D324 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidMemorySizeDown(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 v2; // rdi
  int v4; // ebp
  unsigned int v5; // ebx

  v1 = 0;
  v2 = (a1 - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( !v2 )
    return 0LL;
  v4 = 0;
  v5 = 256;
  do
  {
    if ( !MmIsAddressValidEx(v2) )
      break;
    v1 += v4;
    if ( !v2 )
      break;
    v2 -= 4096LL;
    v4 = 4096;
  }
  while ( v1 < 0x100 );
  if ( v1 < 0x100 )
    return v1;
  return v5;
}
