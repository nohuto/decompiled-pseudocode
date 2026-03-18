/*
 * XREFs of WMultiStringToAscii @ 0x1C0019364
 * Callers:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0019168 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 */

void __fastcall WMultiStringToAscii(_WORD *a1, unsigned int a2)
{
  _BYTE *v2; // r9
  unsigned int v3; // r8d
  __int16 v4; // ax

  v2 = a1;
  if ( a1 && a2 >= 4 )
  {
    v3 = 0;
    if ( a2 >> 1 != 1 )
    {
      do
      {
        v4 = *a1;
        if ( !*a1 )
        {
          LOBYTE(v4) = 0;
          if ( !a1[1] )
            break;
        }
        *v2 = v4;
        ++a1;
        ++v2;
        ++v3;
      }
      while ( v3 < (a2 >> 1) - 1 );
    }
    if ( a2 > v3 )
      NVMeZeroMemory(v2, a2 - v3);
  }
}
