/*
 * XREFs of sub_1800324FC @ 0x1800324FC
 * Callers:
 *     TpTimerOutstandingCallbackCount @ 0x180030D30 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180031D10 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x1800323A0 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 * Callees:
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_1800324FC(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int ShutdownThreadId; // eax
  PVOID ThreadPoolData; // rax

  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
      if ( (ShutdownThreadId & 0x10000) == 0 )
      {
        if ( (ShutdownThreadId & 0x20000) == 0 )
          goto LABEL_5;
        if ( (_DWORD)a2 )
        {
          a2 = 0LL;
          ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
            LOBYTE(a2) = *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == (_QWORD)Ldr;
          if ( (_DWORD)a2 )
          {
LABEL_5:
            if ( Ldr->SsHandle == off_180118370 )
            {
              Ldr = NtCurrentPeb()->Ldr;
              if ( !Ldr->ShutdownInProgress )
                return 1LL;
            }
          }
        }
      }
    }
  }
  if ( (_DWORD)a3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_18010EFC8(Ldr, a2, a3, 0LL);
  return 0LL;
}
