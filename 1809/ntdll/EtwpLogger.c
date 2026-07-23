/*
 * XREFs of EtwpLogger @ 0x180059EE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpStopLoggerInstance @ 0x18004CF20 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x180050354 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushActiveBuffers @ 0x18005A0C0 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 BaseAddress)
{
  NTSTATUS v2; // eax
  BOOL v3; // esi
  __int64 v4; // rdx
  int active; // edi
  unsigned int v6; // ecx
  signed int v7; // edi
  void *v8; // rcx
  int v9; // eax
  void *v10; // rsi
  int v11; // eax
  int v12; // ecx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(BaseAddress + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(BaseAddress + 40) = 0;
  v13 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v13, 4u);
  while ( *(_DWORD *)(BaseAddress + 328) )
  {
    v2 = NtWaitForSingleObject(
           *(HANDLE *)(BaseAddress + 128),
           0,
           (PLARGE_INTEGER)((BaseAddress + 344) & -(__int64)(*(_QWORD *)(BaseAddress + 344) != 0LL)));
    v3 = v2 == 258 || !v2 && (*(_BYTE *)(BaseAddress + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v3);
    v6 = *(_DWORD *)(BaseAddress + 332);
    if ( (v6 & 1) != 0 && active >= 0 && !v3 )
    {
      v9 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
      v6 = *(_DWORD *)(BaseAddress + 332);
      active = v9;
    }
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v10 = *(void **)(BaseAddress + 144);
      *(_QWORD *)(BaseAddress + 144) = 0LL;
      v11 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0, 0);
      *(_DWORD *)(BaseAddress + 40) = v11;
      active = v11;
      if ( v11 < 0 )
      {
        v12 = *(_DWORD *)(BaseAddress + 332);
        *(_QWORD *)(BaseAddress + 144) = v10;
        if ( (v12 & 4) != 0 )
          active = 0;
      }
      else
      {
        NtClose(v10);
        v12 = *(_DWORD *)(BaseAddress + 332);
        if ( (v12 & 1) != 0 )
        {
          EtwpSendSessionNotification(BaseAddress, 1, 0);
          v12 = *(_DWORD *)(BaseAddress + 332);
        }
      }
      v6 = v12 & 0xFFFFFFFE;
      *(_DWORD *)(BaseAddress + 332) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      *(_DWORD *)(BaseAddress + 332) = v6;
      if ( *(_QWORD *)(BaseAddress + 144) )
      {
        LOBYTE(v4) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v4);
        v6 = *(_DWORD *)(BaseAddress + 332);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      *(_DWORD *)(BaseAddress + 332) = v6 & 0xFFFFFFF9;
      ZwSetEvent(*(HANDLE *)(BaseAddress + 136), 0LL);
    }
    if ( active < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v7 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*(HANDLE *)(BaseAddress + 144));
  *(_QWORD *)(BaseAddress + 144) = 0LL;
  if ( v7 > 0 )
    v7 = (unsigned __int16)v7 | 0xC0070000;
  v8 = *(void **)(BaseAddress + 136);
  *(_DWORD *)(BaseAddress + 40) = v7;
  ZwSetEvent(v8, 0LL);
  EtwpFreeLoggerContext((PVOID)BaseAddress);
  RtlExitUserThread(0);
}
