/*
 * XREFs of MiCleanupPageTablePages @ 0x1400288B8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 24), a1);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 24), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 24), v4, *(unsigned int *)(a1 + 48));
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
