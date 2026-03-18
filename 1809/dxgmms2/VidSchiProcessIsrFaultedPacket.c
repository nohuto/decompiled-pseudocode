/*
 * XREFs of VidSchiProcessIsrFaultedPacket @ 0x1C002E7A4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000A2E0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000A9D0 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

void __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD v18[4]; // [rsp+40h] [rbp-38h] BYREF

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
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v7);
        v17[3] = 281LL;
        v17[4] = 5LL;
        v17[5] = v5;
        v17[6] = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL);
        v17[7] = *(unsigned int *)(v8 + 104);
        WdLogEvent5_WdCriticalError(v17);
        __debugbreak();
        JUMPOUT(0x1C002EA0ELL);
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
      *(_DWORD *)(v8 + 16) = *(_DWORD *)a4;
      *(_QWORD *)(*(_QWORD *)(v11 + 104) + 208LL) = *(_QWORD *)(a4 + 16);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 216LL) = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 220LL) = *(_DWORD *)(a4 + 28);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 224LL) = *(_DWORD *)(a4 + 32);
      *(_QWORD *)(*(_QWORD *)(v11 + 104) + 232LL) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 228LL) = *(_DWORD *)(a4 + 60);
      memset(v18, 0, sizeof(v18));
      v18[1] = v11;
      VidSchiUpdateContextRunningTimeAtISR(v18);
      v16 = *(_QWORD *)(a1 + 8 * v12 + 1560);
      if ( v16 )
      {
        if ( v16 != v11 )
          *(_QWORD *)(v16 + 456) = *(_QWORD *)(v11 + 456);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2860));
      VidSchiProfilePerformanceTick(12LL, v5, a1, v15, 0LL, 0LL, v8, a4);
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1696), (PSLIST_ENTRY)(v8 + 32));
    }
  }
}
