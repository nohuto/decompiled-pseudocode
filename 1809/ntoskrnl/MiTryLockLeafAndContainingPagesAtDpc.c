/*
 * XREFs of MiTryLockLeafAndContainingPagesAtDpc @ 0x14011B894
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiTryLockLeafPage @ 0x1400829FC (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14011B8F0 (MiTryLockProtoPoolPageAtDpc.c)
 */

__int64 __fastcall MiTryLockLeafAndContainingPagesAtDpc(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r10

  *a2 = 0LL;
  result = MiTryLockProtoPoolPageAtDpc(a1, a3);
  if ( result )
  {
    v6 = MiTryLockLeafPage(a1);
    if ( v6 )
      *a2 = v6;
    return v7;
  }
  return result;
}
