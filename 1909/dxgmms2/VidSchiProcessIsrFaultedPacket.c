/*
 * XREFs of VidSchiProcessIsrFaultedPacket @ 0x1C002EF48
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B220 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B900 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

void __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 64) != a2 && *(_DWORD *)(a1 + 72) != a2 )
  {
    v7 = *(unsigned int *)(a1 + 1404);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 1416);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL);
    if ( v9 == *(_QWORD *)(v5 + 224) || v9 == *(_QWORD *)(v5 + 240) )
    {
      if ( !*(_BYTE *)(v5 + 53) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v7);
        v20[3] = 281LL;
        v20[4] = 5LL;
        v20[5] = v5;
        v20[6] = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL);
        v20[7] = *(unsigned int *)(v8 + 104);
        WdLogEvent5_WdCriticalError(v20);
        __debugbreak();
        JUMPOUT(0x1C002F1B3LL);
      }
      *(_DWORD *)(a1 + 2016) = 1;
      *(_BYTE *)(a1 + 2009) = 1;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 1404), ((_BYTE)v7 + 1) & 0xF);
      v10 = *(unsigned int *)(a1 + 1548);
      *(_DWORD *)(a1 + 492) = ((unsigned __int8)*(_DWORD *)(a1 + 492) + 1) & 0xF;
      v11 = *(_QWORD *)(a1 + 8 * v10 + 1560);
      v12 = ((_BYTE)v10 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1548), ((_BYTE)v10 + 1) & 0xF);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v8 + 104);
      v13 = *(_QWORD *)(v8 + 104);
      *(_QWORD *)(a1 + 64) = v13;
      *(_QWORD *)(a1 + 72) = v13;
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(v8 + 104);
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++*(_QWORD *)(v5 + 416);
      }
      *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ (a3 << 6)) & 0x40;
      v14 = *(_QWORD *)(v8 + 56) == 0LL;
      *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v8 + 72) = 18;
      if ( !v14 )
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)(v8 + 56) + 52LL) = 18;
      }
      v15 = *(_DWORD *)a4;
      v21[0] = 0LL;
      *(_DWORD *)(v8 + 16) = v15;
      v16 = *(_QWORD *)(a4 + 16);
      v17 = *(_QWORD *)(v11 + 104);
      v22 = 0LL;
      v21[1] = v11;
      *(_QWORD *)(v17 + 208) = v16;
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 216LL) = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 220LL) = *(_DWORD *)(a4 + 28);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 224LL) = *(_DWORD *)(a4 + 32);
      *(_QWORD *)(*(_QWORD *)(v11 + 104) + 232LL) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 228LL) = *(_DWORD *)(a4 + 60);
      VidSchiUpdateContextRunningTimeAtISR(v21);
      v19 = *(_QWORD *)(a1 + 8 * v12 + 1560);
      if ( v19 )
      {
        if ( v19 != v11 )
          *(_QWORD *)(v19 + 456) = *(_QWORD *)(v11 + 456);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2860));
      VidSchiProfilePerformanceTick(12LL, v5, a1, v18, 0LL, 0LL, v8, a4);
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1696), (PSLIST_ENTRY)(v8 + 32));
    }
  }
}
