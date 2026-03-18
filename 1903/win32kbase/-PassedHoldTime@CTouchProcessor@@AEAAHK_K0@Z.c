/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C016E73C
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0176894 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     ApiSetGetPenHoldTime @ 0x1C019F4B0 (ApiSetGetPenHoldTime.c)
 *     ApiSetGetTouchHoldTime @ 0x1C019F574 (ApiSetGetTouchHoldTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

union _LARGE_INTEGER __fastcall CTouchProcessor::PassedHoldTime(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // r14d
  union _LARGE_INTEGER result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  struct _KTHREAD *v11; // rsi
  bool v12; // cf
  bool v13; // zf

  v6 = a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = gliQpcFreq;
  v9 = 0;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (unsigned __int64)(gliQpcFreq.QuadPart - 1) > 0x7FFFFFFD )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    if ( !this[20] )
      this[20] = (struct _KTHREAD *)(gliQpcFreq.QuadPart * (unsigned int)ApiSetGetPenHoldTime() / 1000);
    v10 = (unsigned __int64)this[21];
    if ( !v10 )
    {
      v10 = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetTouchHoldTime() / 1000;
      this[21] = (struct _KTHREAD *)v10;
    }
    v11 = (struct _KTHREAD *)(a4 - a3);
    if ( v6 == 3 )
    {
      v12 = v11 < this[20];
      v13 = v11 == this[20];
    }
    else
    {
      v12 = (unsigned __int64)v11 < v10;
      v13 = v11 == (struct _KTHREAD *)v10;
    }
    LOBYTE(v9) = !v12 && !v13;
    return (union _LARGE_INTEGER)v9;
  }
  return result;
}
