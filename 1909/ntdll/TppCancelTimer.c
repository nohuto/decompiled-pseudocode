/*
 * XREFs of TppCancelTimer @ 0x18003257C
 * Callers:
 *     TppWaitCompletion @ 0x180030390 (TppWaitCompletion.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180031D10 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     TppTimerpStopCallbackGeneration @ 0x180084BC0 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppUpdateSubQueueTimer @ 0x1800327D4 (TppUpdateSubQueueTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x180036214 (TppPHDelete.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppItePush @ 0x180066F5C (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x18010F73C (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, __int64 a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = -(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL;
    v10 = v9 + a2 + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWTimerCancelled(v10, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v10 + 16, a1 + 248);
      TppPHDelete(v10 + 8, a1 + 288);
      LOBYTE(v12) = v6;
      TppUpdateSubQueueTimer(v10, v12);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive(a1 + 240);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v13);
      RtlReleaseSRWLockExclusive(a1 + 240);
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive(a1 + 240);
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive(a1 + 240);
    return 0;
  }
}
