/*
 * XREFs of SmKmStoreHelperWorker @ 0x140136040
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     SmKmStoreHelperCommandProcess @ 0x140148EEC (SmKmStoreHelperCommandProcess.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140324B5C (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  LONG result; // eax
  unsigned int v5; // esi
  __int128 v6; // xmm1
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v7, 0, 0x28uLL);
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v5 = *(unsigned __int16 *)(a1 + 58);
    if ( v5 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v3 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v7[0] = *(_OWORD *)(a1 + 64);
      *(_QWORD *)&v7[2] = *(_QWORD *)(a1 + 96);
      v7[1] = v6;
      if ( v5 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v7);
        v3 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v3 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v5, v7);
  }
  return result;
}
