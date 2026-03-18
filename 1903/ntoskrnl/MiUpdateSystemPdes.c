/*
 * XREFs of MiUpdateSystemPdes @ 0x1402BC5E4
 * Callers:
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     MiSyncSystemPdes @ 0x1400E2E48 (MiSyncSystemPdes.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyTopLevelMappings @ 0x1400E2F44 (MiCopyTopLevelMappings.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 *v6; // r8
  bool v7; // zf
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v9, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  if ( MiPteInShadowRange(v4 + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1LL;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    if ( !v7 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( (_DWORD)v5 )
    MiWritePteShadow((__int64)v6);
  LOBYTE(v5) = v9;
  return MiUnmapPageInHyperSpaceWorker(v4, v5, 0x80000000LL);
}
