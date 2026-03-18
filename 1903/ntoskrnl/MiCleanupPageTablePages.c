/*
 * XREFs of MiCleanupPageTablePages @ 0x14018667C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x14074E0B0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x1401866E4 (MiFreeLargeZeroPages.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi

  MiFreeLargeZeroPages(*(_QWORD *)(a1 + 32), a1, 0LL);
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 != v2 )
    {
      v4 = v2 - v3;
      MiReturnCommit(*(_QWORD *)(a1 + 32), v4);
      MiReturnSystemCharges(*(_QWORD *)(a1 + 32), v4, *(_DWORD *)(a1 + 56));
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
}
