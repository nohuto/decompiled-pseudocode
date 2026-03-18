/*
 * XREFs of Controller_CheckForFrameOverlowEventFromIsr @ 0x1C000D7DC
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001F5E0 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     Controller_AreFrameAndTimeDeltaValuesValid @ 0x1C000D788 (Controller_AreFrameAndTimeDeltaValuesValid.c)
 *     Controller_GetFrameNumber @ 0x1C000E6C0 (Controller_GetFrameNumber.c)
 */

void __fastcall Controller_CheckForFrameOverlowEventFromIsr(__int64 a1)
{
  __int64 v2; // rdi
  int FrameNumber; // esi
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 648) )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(a1 + 736) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v5, &v6);
      if ( !v5 )
      {
        if ( v6 )
        {
          ++*(_DWORD *)(a1 + 796);
        }
        else
        {
          KeQueryPerformanceCounter(0LL);
          if ( Controller_AreFrameAndTimeDeltaValuesValid(
                 FrameNumber - *(_DWORD *)(a1 + 760),
                 v2 - *(_QWORD *)(a1 + 744)) )
          {
            *(_QWORD *)(a1 + 776) = v4 - *(_QWORD *)(a1 + 712);
            *(_QWORD *)(a1 + 784) = (unsigned int)(8 * (FrameNumber - *(_DWORD *)(a1 + 720)) - *(_DWORD *)(a1 + 728));
          }
          else
          {
            ++*(_DWORD *)(a1 + 792);
          }
          *(_QWORD *)(a1 + 752) = v4;
          *(_QWORD *)(a1 + 744) = v2;
          *(_DWORD *)(a1 + 760) = FrameNumber;
        }
        *(_QWORD *)(a1 + 736) = v2;
      }
    }
  }
}
