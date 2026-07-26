/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C01196D4
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00EB6F8 (ndisIMInitializeDeviceInstance_ea_1C00EB6F8.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C00600D8 (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C010EAFC (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(char *DeferredContext)
{
  int v1; // esi
  __int64 v3; // rbp
  KIRQL v4; // r13
  int v5; // edi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  __int16 v10; // ax
  void *v11; // rcx
  void *v12; // rcx
  unsigned __int16 v13; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x5Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeferredContext);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = *((_DWORD *)DeferredContext + 30) & 0x40000000;
  v6 = *((_DWORD *)DeferredContext + 31) & 0x8613000;
  v7 = *((_DWORD *)DeferredContext + 675) & 0x200;
  v8 = *((_DWORD *)DeferredContext + 470) & 0x4000;
  v13 = *((_WORD *)DeferredContext + 1);
  if ( (*((_DWORD *)DeferredContext + 30) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)DeferredContext + 3);
    v1 = *((_DWORD *)DeferredContext + 142) & 8;
  }
  memset(DeferredContext + 4, 0, 0xE70uLL);
  ndisMInitializeMiniportBlockFront(DeferredContext, v13);
  *((_DWORD *)DeferredContext + 1114) = 0;
  *((_DWORD *)DeferredContext + 1115) = 0;
  v9 = *((_QWORD *)DeferredContext + 474);
  *((_DWORD *)DeferredContext + 31) = v6;
  *((_DWORD *)DeferredContext + 675) = v7;
  *((_DWORD *)DeferredContext + 30) = v5;
  *((_DWORD *)DeferredContext + 470) = v8;
  v10 = *(_WORD *)(v9 + 26);
  if ( (v10 & 0x40) != 0 )
  {
    v5 |= 0x80u;
    *((_DWORD *)DeferredContext + 142) = v1;
    *((_DWORD *)DeferredContext + 30) = v5;
    *((_QWORD *)DeferredContext + 3) = v3;
    v10 = *(_WORD *)(v9 + 26);
  }
  if ( (v10 & 1) != 0 )
    *((_DWORD *)DeferredContext + 30) = v5 | 0x8000;
  v11 = (void *)*((_QWORD *)DeferredContext + 396);
  if ( v11 )
    memset(v11, 0, 112LL * ndisMaxNumberOfProcessors);
  v12 = (void *)*((_QWORD *)DeferredContext + 516);
  if ( v12 )
    memset(v12, 0, 0x4C8uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((PKSPIN_LOCK)DeferredContext + 559);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x60u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeferredContext);
}
