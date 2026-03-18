/*
 * XREFs of PopDirectedDripsUmTestDeviceCompare @ 0x1408B9090
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PopDirectedDripsUmTestDeviceCompare(
        struct _RTL_AVL_TABLE *Table,
        char *FirstStruct,
        char *SecondStruct)
{
  unsigned int v3; // ebx
  const WCHAR *v4; // rcx
  const WCHAR *v6; // r8
  LONG v7; // eax

  v3 = 0;
  v4 = (const WCHAR *)(FirstStruct + 8);
  if ( *(_DWORD *)FirstStruct )
    v4 = *(const WCHAR **)v4;
  v6 = (const WCHAR *)(SecondStruct + 8);
  if ( *(_DWORD *)SecondStruct )
    v6 = *(const WCHAR **)v6;
  v7 = RtlCompareUnicodeStrings(v4, *((unsigned int *)FirstStruct + 1), v6, *((unsigned int *)SecondStruct + 1), 1u);
  if ( v7 >= 0 )
    return 2 - (unsigned int)(v7 != 0);
  return v3;
}
