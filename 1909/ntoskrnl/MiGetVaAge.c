/*
 * XREFs of MiGetVaAge @ 0x14005B0B0
 * Callers:
 *     MiTrimPte @ 0x14005AAE0 (MiTrimPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x14012B4C8 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8940 (MiResetAccessBitPteWorker.c)
 *     MiSimpleAgePte @ 0x1402C8AF0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402C9170 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v6; // rax
  char v7; // r8^7

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_BYTE *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL) >> 1) & 7;
  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v6 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v2 >> 3) & 0x1FF));
      v7 = HIBYTE(*(_QWORD *)v2);
      if ( (v6 & 0x20) == 0 )
        v7 = HIBYTE(v3);
      HIBYTE(v3) = v7;
      if ( (v6 & 0x42) != 0 )
        HIBYTE(v3) = v7;
    }
  }
  return HIBYTE(v3) & 0xF;
}
