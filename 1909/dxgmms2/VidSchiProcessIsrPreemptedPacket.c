/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C000E2F0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B220 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B900 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rbp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  _QWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  unsigned int v22; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 112) != a2 )
  {
    v8 = (a3 & 1) << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1404);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1416);
      _InterlockedExchange((volatile __int32 *)(a1 + 1404), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1548);
      *(_DWORD *)(a1 + 492) = ((unsigned __int8)*(_DWORD *)(a1 + 492) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1560);
      v22 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1548), v22);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 112) = v13;
        v16 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2872));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        v14 = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2876);
        *(_QWORD *)(a1 + 80) = v14;
        v15 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v15 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v16 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[26].Alignment;
      }
      v17 = *(_DWORD *)(v10 + 92);
      v20[0] = 0LL;
      v20[1] = v12;
      *(_DWORD *)(v10 + 92) = v8 | v17 & 0xFFFFFFBF;
      v21 = 0LL;
      VidSchiUpdateContextRunningTimeAtISR(v20);
      v19 = *(_QWORD *)(a1 + 8LL * v22 + 1560);
      if ( v19 )
      {
        if ( v19 != v12 )
          *(_QWORD *)(v19 + 456) = *(_QWORD *)(v12 + 456);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2860));
      VidSchiProfilePerformanceTick(v16, (__int64)v5, a1, v18, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 106, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 112) != a2 );
  }
}
