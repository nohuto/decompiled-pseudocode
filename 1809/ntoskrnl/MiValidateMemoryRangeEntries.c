/*
 * XREFs of MiValidateMemoryRangeEntries @ 0x1405F7D18
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMemoryRangeEntries(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9

  if ( a3 )
    *a3 = 0LL;
  v3 = 0LL;
  v4 = &a1[2 * a2];
  if ( a1 >= v4 )
  {
LABEL_10:
    if ( a3 )
      *a3 = v3;
    return 1LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = *a1;
      if ( *a1 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v6 = a1[1];
      if ( !v6 )
        return 0LL;
      if ( v6 + v5 < v5 )
        return 0LL;
      if ( v6 + v5 - 1 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v7 = v3 + ((v6 + (*a1 & 0xFFF) + 4095) >> 12);
      if ( v7 < v3 )
        return 0LL;
      a1 += 2;
      v3 = v7;
      if ( a1 >= v4 )
        goto LABEL_10;
    }
  }
}
