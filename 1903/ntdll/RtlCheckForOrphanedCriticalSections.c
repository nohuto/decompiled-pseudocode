/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18007D540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return sub_18007D570(a1, &v2);
}
