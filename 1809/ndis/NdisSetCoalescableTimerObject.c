/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x1C0064760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqill @ 0x1C00649A4 (WPP_SF_qqill.c)
 */

BOOLEAN __stdcall NdisSetCoalescableTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext,
        ULONG Tolerance)
{
  _BYTE *v5; // r15
  _QWORD *v7; // rsi
  KIRQL v11; // al
  _QWORD *v12; // r8
  _QWORD *v13; // rdx

  v5 = (_BYTE *)*((_QWORD *)TimerObject + 3);
  v7 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( *v5 == 17 && !v7 )
    return 0;
  if ( !FunctionContext )
    FunctionContext = (PVOID)*((_QWORD *)TimerObject + 22);
  *((_QWORD *)TimerObject + 23) = FunctionContext;
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7[474] + 26LL) & 2) != 0 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(v7 + 236);
      v12 = (_QWORD *)v7[70];
      v13 = v12;
      if ( !v12 )
        goto LABEL_12;
      do
      {
        if ( v13 == TimerObject )
          break;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
      if ( !v13 )
      {
LABEL_12:
        *(_QWORD *)TimerObject = v12;
        v7[70] = TimerObject;
      }
      KeReleaseSpinLock(v7 + 236, v11);
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = FunctionContext;
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_qqill(
      TimerObject,
      DueTime.QuadPart >> 63,
      v5,
      TimerObject,
      abs64(DueTime.QuadPart),
      MillisecondsPeriod,
      Tolerance);
  return KeSetCoalescableTimer(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           Tolerance,
           (PKDPC)((char *)TimerObject + 96));
}
