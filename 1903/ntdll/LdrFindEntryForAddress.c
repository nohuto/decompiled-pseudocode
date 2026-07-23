/*
 * XREFs of LdrFindEntryForAddress @ 0x180054D40
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180054D90 @ 0x180054D90 (sub_180054D90.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS v3; // ebx
  char *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  v3 = sub_180054D90(DllHandle, &BaseAddress, &v6);
  if ( v3 >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    sub_18001B678(v4);
  }
  return v3;
}
