/*
 * XREFs of PopDirectedDripsUmTestDeviceCompare @ 0x1408B9090
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PopDirectedDripsUmTestDeviceCompare(_RTL_AVL_TABLE *a1, char *a2, char *a3)
{
  unsigned int v3; // ebx
  const WCHAR *v4; // rcx
  const WCHAR *v6; // r8
  LONG v7; // eax

  v3 = 0;
  v4 = (const WCHAR *)(a2 + 8);
  if ( *(_DWORD *)a2 )
    v4 = *(const WCHAR **)v4;
  v6 = (const WCHAR *)(a3 + 8);
  if ( *(_DWORD *)a3 )
    v6 = *(const WCHAR **)v6;
  v7 = RtlCompareUnicodeStrings(v4, *((unsigned int *)a2 + 1), v6, *((unsigned int *)a3 + 1), 1u);
  if ( v7 >= 0 )
    return 2 - (unsigned int)(v7 != 0);
  return v3;
}
