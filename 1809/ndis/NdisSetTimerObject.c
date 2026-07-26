/*
 * XREFs of NdisSetTimerObject @ 0x1C0011F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqil @ 0x1C0064940 (WPP_SF_qqil.c)
 */

BOOLEAN __stdcall NdisSetTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext)
{
  _BYTE *v4; // r15
  _QWORD *v6; // rsi
  KIRQL v10; // al
  _QWORD *v11; // r8
  _QWORD *v12; // rdx

  v4 = (_BYTE *)*((_QWORD *)TimerObject + 3);
  v6 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( *v4 == 17 && !v6 )
    return 0;
  if ( !FunctionContext )
    FunctionContext = (PVOID)*((_QWORD *)TimerObject + 22);
  *((_QWORD *)TimerObject + 23) = FunctionContext;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6[474] + 26LL) & 2) != 0 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(v6 + 236);
      v11 = (_QWORD *)v6[70];
      v12 = v11;
      if ( !v11 )
        goto LABEL_18;
      do
      {
        if ( v12 == TimerObject )
          break;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_18:
        *(_QWORD *)TimerObject = v11;
        v6[70] = TimerObject;
      }
      KeReleaseSpinLock(v6 + 236, v10);
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = FunctionContext;
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_qqil(TimerObject, DueTime.QuadPart >> 63, v4, TimerObject, abs64(DueTime.QuadPart), MillisecondsPeriod);
  return KeSetTimerEx(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           (PKDPC)((char *)TimerObject + 96));
}
