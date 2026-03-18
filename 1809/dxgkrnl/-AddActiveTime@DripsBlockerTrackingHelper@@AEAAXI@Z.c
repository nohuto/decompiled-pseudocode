/*
 * XREFs of ?AddActiveTime@DripsBlockerTrackingHelper@@AEAAXI@Z @ 0x1C020DE30
 * Callers:
 *     ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C (-StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::AddActiveTime(DripsBlockerTrackingHelper *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int128 v4; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v3 = 9LL * a2;
  if ( *((_BYTE *)this + 72 * a2 + 32) )
  {
    if ( !*((_BYTE *)this + 72 * a2 + 66) )
    {
      v4 = 1000000LL * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *((_QWORD *)this + 9 * a2));
      *((_QWORD *)this + v3 + 1) += v4 / PerformanceFrequency.QuadPart;
    }
  }
}
