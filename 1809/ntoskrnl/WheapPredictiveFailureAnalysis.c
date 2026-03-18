/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x1408DCF64
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1403203D0 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1408DBA20 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1408DCAD8 (WheapPfaMemoryCheck.c)
 */

void __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v3; // r8
  char v4; // bl
  unsigned int v5; // r9d
  unsigned int *v6; // rcx
  unsigned int *v7; // rdi
  unsigned int *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int8 v14; // cf
  __int64 v15; // rdi

  v1 = a1 + 40;
  if ( !WheapPolicyDisableOffline )
  {
    if ( WheapPfaInitialized )
    {
      v3 = *(_WORD *)(a1 + 50);
      if ( v3 )
      {
        if ( *(_DWORD *)(a1 + 52) == 2 && (*(_BYTE *)(a1 + 144) & 1) == 0 )
        {
          v4 = 0;
          v5 = 0;
          v6 = (unsigned int *)(a1 + 168);
          while ( 1 )
          {
            v7 = v6;
            if ( (v6[3] & 1) != 0 )
              break;
            ++v5;
            v6 += 18;
            if ( v5 >= v3 )
              goto LABEL_12;
          }
          v4 = 1;
LABEL_12:
          v8 = (unsigned int *)(v1 + 128);
          if ( v4 )
            v8 = v7;
          v9 = *((_QWORD *)v8 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
          if ( !v9 )
            v9 = *((_QWORD *)v8 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
          if ( !v9 )
          {
            v10 = *(_DWORD *)(a1 + 24);
            v11 = v1 + *v8;
            if ( (v10 & 4) != 0 )
            {
              if ( (v10 & 8) != 0 && (*(_BYTE *)v11 & 2) != 0 )
              {
                LOBYTE(v1) = 1;
                WheaAttemptPhysicalPageOffline(*(_QWORD *)(v11 + 16) >> 12, v1, 0LL);
              }
            }
            else
            {
              v12 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
              v14 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
              v15 = v12;
              if ( v14 )
                ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v12, (ULONG_PTR)&WheapPfaLock);
              if ( v15 )
                *(_BYTE *)(v15 + 26) |= 1u;
              WheapPfaMemoryCheck(v13, v11);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
              KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
            }
          }
        }
      }
    }
  }
}
