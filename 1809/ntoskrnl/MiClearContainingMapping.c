/*
 * XREFs of MiClearContainingMapping @ 0x1400919F4
 * Callers:
 *     MiDeleteTopLevelPage @ 0x140091960 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  _QWORD *v10; // r10
  int v11; // r8d

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    if ( (MI_READ_PTE_LOCK_FREE(v4 + 8 * ((v1 >> 3) & 0x1FF)) & 1) != 0 )
    {
      if ( MiPteInShadowRange(v5) && (unsigned int)MiPteHasShadow(v8, v7) )
        v9 = v11;
      *v10 = v7;
      if ( v9 )
        MiWritePteShadow(v10);
    }
    return MiUnmapPageInHyperSpaceWorker(v6, 0x11u, 0x80000000LL);
  }
  return result;
}
