/*
 * XREFs of ExpOwnerEntryToThread @ 0x1400B7A8C
 * Callers:
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1400B7920 (ExReinitializeResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4D4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  if ( (a1[1] & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v1 = *a1;
  result = 0LL;
  if ( (v1 & 3) == 0 )
    return v1;
  return result;
}
