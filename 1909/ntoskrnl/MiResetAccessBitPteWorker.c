/*
 * XREFs of MiResetAccessBitPteWorker @ 0x1402C8940
 * Callers:
 *     MiResetAccessBitsEPTCallback @ 0x1402C8A40 (MiResetAccessBitsEPTCallback.c)
 * Callees:
 *     MiClearPteAccessed @ 0x14004D4C0 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x14005B0B0 (MiGetVaAge.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiFlushTbListEarly @ 0x1400DB720 (MiFlushTbListEarly.c)
 */

void __fastcall MiResetAccessBitPteWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // r9
  int VaAge; // r10d
  unsigned __int64 v11; // r11
  int v12; // ebp
  __int64 v13; // rbx
  _KPROCESS *v14; // r8

  VaAge = (unsigned __int8)MiGetVaAge(a1, a3);
  if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(v9) < dword_14046606C )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( (unsigned int)(VaAge - 1) <= 5 )
      MiSetVaAgeList(a1, v11, 1u, 0);
  }
  v13 = 0LL;
  if ( (a6 & 4) == 0 )
    v13 = *(_QWORD *)(a5 + 8);
  if ( (unsigned int)MiClearPteAccessed(a1, a4, a2, v13, *(_DWORD *)a5, (a6 & 4) != 0) )
  {
    if ( v12 == 1 && (a6 & 4) == 0 && *(_DWORD *)a5 )
    {
      if ( v13 )
      {
LABEL_15:
        MiFlushTbListEarly(v13, 0LL, v14);
        return;
      }
      MiLogPageAccess(a1, a2);
    }
    if ( !v13 )
      return;
    goto LABEL_15;
  }
}
