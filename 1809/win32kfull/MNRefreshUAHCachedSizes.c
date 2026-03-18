/*
 * XREFs of MNRefreshUAHCachedSizes @ 0x1C012982C
 * Callers:
 *     MNClearCachedPopupSizes @ 0x1C01297A0 (MNClearCachedPopupSizes.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0129880 (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall MNRefreshUAHCachedSizes(_QWORD *a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // r11
  __int64 result; // rax

  v1 = 0;
  a1[16] = 0LL;
  v2 = a1;
  a1[17] = 0LL;
  result = a1[5];
  if ( *(_DWORD *)(result + 44) )
  {
    do
    {
      MNUpdateUAHMaxPopupWidths(v2, v2[11] + 96LL * (int)v1);
      result = v2[5];
      ++v1;
    }
    while ( v1 < *(_DWORD *)(result + 44) );
  }
  return result;
}
