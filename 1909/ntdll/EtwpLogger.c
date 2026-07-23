/*
 * XREFs of EtwpLogger @ 0x18006D190
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x180005D10 (EtwpSendSessionNotification.c)
 *     EtwpFlushActiveBuffers @ 0x18006D2DC (EtwpFlushActiveBuffers.c)
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 *     EtwpStopLoggerInstance @ 0x180087534 (EtwpStopLoggerInstance.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009D050 (ZwSetEvent.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 BaseAddress)
{
  NTSTATUS v2; // eax
  BOOL v3; // esi
  int active; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  int v7; // edi
  signed int v8; // edi
  void *v9; // rcx
  int v10; // eax
  void *v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(BaseAddress + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(BaseAddress + 40) = 0;
  v14 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v14, 4u);
  while ( *(_DWORD *)(BaseAddress + 328) )
  {
    v2 = NtWaitForSingleObject(
           *(HANDLE *)(BaseAddress + 128),
           0,
           (PLARGE_INTEGER)((BaseAddress + 344) & -(__int64)(*(_QWORD *)(BaseAddress + 344) != 0LL)));
    v3 = v2 == 258 || !v2 && (*(_BYTE *)(BaseAddress + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v3);
    v6 = *(_DWORD *)(BaseAddress + 332);
    v7 = active;
    if ( (v6 & 1) != 0 && active >= 0 && !v3 )
    {
      v10 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
      v6 = *(_DWORD *)(BaseAddress + 332);
      v7 = v10;
    }
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v11 = *(void **)(BaseAddress + 144);
      *(_QWORD *)(BaseAddress + 144) = 0LL;
      v12 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0, 0);
      *(_DWORD *)(BaseAddress + 40) = v12;
      v7 = v12;
      if ( v12 >= 0 )
      {
        NtClose(v11);
        v13 = *(_DWORD *)(BaseAddress + 332);
        if ( (v13 & 1) != 0 )
        {
          EtwpSendSessionNotification(BaseAddress, 1, 0);
          v13 = *(_DWORD *)(BaseAddress + 332);
        }
      }
      else
      {
        v13 = *(_DWORD *)(BaseAddress + 332);
        *(_QWORD *)(BaseAddress + 144) = v11;
        if ( (v13 & 4) != 0 )
          v7 = 0;
      }
      v6 = v13 & 0xFFFFFFFE;
      *(_DWORD *)(BaseAddress + 332) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      *(_DWORD *)(BaseAddress + 332) = v6;
      if ( *(_QWORD *)(BaseAddress + 144) )
      {
        LOBYTE(v5) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v5);
        v6 = *(_DWORD *)(BaseAddress + 332);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      *(_DWORD *)(BaseAddress + 332) = v6 & 0xFFFFFFF9;
      ZwSetEvent(*(HANDLE *)(BaseAddress + 136), 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v8 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*(HANDLE *)(BaseAddress + 144));
  *(_QWORD *)(BaseAddress + 144) = 0LL;
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0xC0070000;
  v9 = *(void **)(BaseAddress + 136);
  *(_DWORD *)(BaseAddress + 40) = v8;
  ZwSetEvent(v9, 0LL);
  EtwpFreeLoggerContext((PVOID)BaseAddress);
  RtlExitUserThread(0);
}
