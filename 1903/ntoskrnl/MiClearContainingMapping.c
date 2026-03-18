/*
 * XREFs of MiClearContainingMapping @ 0x1400AD570
 * Callers:
 *     MiDeleteTopLevelPage @ 0x1400AD4DC (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // r9d
  __int64 *v11; // r10
  int v12; // r8d

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    v6 = MI_READ_PTE_LOCK_FREE(v5 + 8LL * v4);
    if ( (v6 & 1) != 0 )
    {
      if ( MiPteInShadowRange(v7) && (unsigned int)MiPteHasShadow(v9) )
        v10 = v12;
      *v11 = v6;
      if ( v10 )
        MiWritePteShadow(v11, v6);
    }
    LOBYTE(v6) = 17;
    return MiUnmapPageInHyperSpaceWorker(v8, v6, 0x80000000LL);
  }
  return result;
}
