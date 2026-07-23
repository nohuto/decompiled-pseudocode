/*
 * XREFs of SmKmStoreHelperWorker @ 0x140135BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014B8A4 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140307884 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG result; // eax
  unsigned int v6; // esi
  char v7; // bl
  __int128 v8; // xmm1
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v6 = *(unsigned __int16 *)(a1 + 58);
    if ( v6 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v7 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v7 & 2) != 0 )
    {
      v8 = *(_OWORD *)(a1 + 80);
      v9[0] = *(_OWORD *)(a1 + 64);
      v10 = *(_QWORD *)(a1 + 96);
      v9[1] = v8;
      if ( v6 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v9);
        v7 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v7 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v6, v9);
  }
  return result;
}
