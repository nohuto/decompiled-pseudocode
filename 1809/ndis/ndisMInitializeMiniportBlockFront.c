/*
 * XREFs of ndisMInitializeMiniportBlockFront @ 0x1C010EAFC
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00CB1EC (ndisMInitializeMiniportBlock.c)
 *     ndisReinitializeMiniportBlock @ 0x1C01196D4 (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     ndisInitializeULongRef @ 0x1C001E560 (ndisInitializeULongRef.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisMInitializeMiniportBlockFront(char *DeferredContext, int a2)
{
  __int64 v3; // rcx
  char v4; // al
  char v5; // al
  size_t v6; // r8
  char v7; // al
  char *v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax

  v3 = *((_QWORD *)DeferredContext + 474);
  *((_DWORD *)DeferredContext + 380) = 0;
  *(_WORD *)DeferredContext = 273;
  *((_WORD *)DeferredContext + 1) = a2;
  *((_QWORD *)DeferredContext + 22) = DeferredContext;
  *((_DWORD *)DeferredContext + 566) = 1;
  *((_QWORD *)DeferredContext + 68) = &ndisGlobalTriageBlock;
  v4 = *(_BYTE *)(v3 + 24);
  if ( (unsigned __int8)v4 < 6u )
  {
    DeferredContext[3164] = 6;
    v5 = 0;
  }
  else
  {
    DeferredContext[3164] = v4;
    v5 = *(_BYTE *)(v3 + 25);
  }
  DeferredContext[3165] = v5;
  v6 = ndisMaxNumberOfProcessors;
  DeferredContext[32] = *(_BYTE *)(v3 + 24);
  v7 = *(_BYTE *)(v3 + 25);
  *((_DWORD *)DeferredContext + 142) = 0;
  v6 *= 8LL;
  DeferredContext[33] = v7;
  v8 = &DeferredContext[a2 - v6];
  DeferredContext[88] = 0;
  *((_QWORD *)DeferredContext + 200) = v8;
  memset(v8, 0, v6);
  *((_DWORD *)DeferredContext + 30) |= 0x400000u;
  *((_QWORD *)DeferredContext + 277) = DeferredContext + 2208;
  *((_QWORD *)DeferredContext + 276) = DeferredContext + 2208;
  *((_QWORD *)DeferredContext + 343) = DeferredContext + 2736;
  *((_QWORD *)DeferredContext + 342) = DeferredContext + 2736;
  *((_QWORD *)DeferredContext + 437) = DeferredContext + 3488;
  *((_QWORD *)DeferredContext + 436) = DeferredContext + 3488;
  *((_QWORD *)DeferredContext + 441) = DeferredContext + 3520;
  *((_QWORD *)DeferredContext + 440) = DeferredContext + 3520;
  *((_QWORD *)DeferredContext + 452) = DeferredContext + 3608;
  *((_QWORD *)DeferredContext + 451) = DeferredContext + 3608;
  *((_QWORD *)DeferredContext + 170) = DeferredContext + 1352;
  *((_QWORD *)DeferredContext + 169) = DeferredContext + 1352;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 399);
  *((_QWORD *)DeferredContext + 410) = 0LL;
  *((_QWORD *)DeferredContext + 412) = ndisPeriodicReceivesWorker;
  *((_QWORD *)DeferredContext + 413) = DeferredContext;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 12);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 251);
  *((_QWORD *)DeferredContext + 17) = DeferredContext + 128;
  *((_QWORD *)DeferredContext + 16) = DeferredContext + 128;
  if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 474) + 26LL) & 2) != 0 )
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 236);
  KeInitializeDpc((PRKDPC)(DeferredContext + 1528), (PKDEFERRED_ROUTINE)ndisMDeferredDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 243) = 0LL;
  *((_QWORD *)DeferredContext + 245) = ndisQueuedCheckForHang;
  *((_QWORD *)DeferredContext + 246) = DeferredContext;
  ndisInitializeULongRef((__int64)(DeferredContext + 4472));
  *((_DWORD *)DeferredContext + 1120) = 0;
  v9 = (__int64 *)(DeferredContext + 880);
  v10 = (__int64 *)(DeferredContext + 1632);
  v11 = 6LL;
  do
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    result = *v9;
    *v10 = *v9;
    *v9 = (__int64)v10;
    v10 += 3;
    ++v9;
    --v11;
  }
  while ( v11 );
  *((_DWORD *)DeferredContext + 504) = 6;
  return result;
}
