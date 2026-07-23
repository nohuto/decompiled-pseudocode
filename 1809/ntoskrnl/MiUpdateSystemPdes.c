/*
 * XREFs of MiUpdateSystemPdes @ 0x1402A5440
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     MiSyncSystemPdes @ 0x14013CD58 (MiSyncSystemPdes.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCopyTopLevelMappings @ 0x14013CE34 (MiCopyTopLevelMappings.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  int v5; // edx
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
      v5 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    if ( !v7 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( v5 )
    MiWritePteShadow((__int64)v6, v3);
  return MiUnmapPageInHyperSpaceWorker(v4, v9, 0x80000000LL);
}
