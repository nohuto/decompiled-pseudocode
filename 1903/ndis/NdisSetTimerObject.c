/*
 * XREFs of NdisSetTimerObject @ 0x1C001E630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqil @ 0x1C001E730 (WPP_RECORDER_SF_qqil.c)
 */

BOOLEAN __stdcall NdisSetTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext)
{
  _QWORD *v5; // rbp
  KIRQL v9; // al
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx

  v5 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( **((_BYTE **)TimerObject + 3) == 17 && !v5 )
    return 0;
  if ( !FunctionContext )
    FunctionContext = (PVOID)*((_QWORD *)TimerObject + 22);
  *((_QWORD *)TimerObject + 23) = FunctionContext;
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5[470] + 26LL) & 2) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(v5 + 235);
      v10 = (_QWORD *)v5[70];
      v11 = v10;
      if ( !v10 )
        goto LABEL_19;
      while ( v11 != TimerObject )
      {
        v11 = (_QWORD *)*v11;
        if ( !v11 )
          goto LABEL_19;
      }
      if ( !v11 )
      {
LABEL_19:
        *(_QWORD *)TimerObject = v10;
        v5[70] = TimerObject;
      }
      KeReleaseSpinLock(v5 + 235, v9);
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = FunctionContext;
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqil(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      DueTime.QuadPart >> 63,
      MillisecondsPeriod,
      (_DWORD)FunctionContext);
  return KeSetTimerEx(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           (PKDPC)((char *)TimerObject + 96));
}
