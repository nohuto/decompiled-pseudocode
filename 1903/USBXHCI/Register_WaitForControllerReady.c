/*
 * XREFs of Register_WaitForControllerReady @ 0x1C0020B64
 * Callers:
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r14
  int v4; // esi
  int i; // ebp
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x44u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = 100;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUlong(a1, v3 + 4) & 0x800) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x45u,
            (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
            i);
        return v1;
      }
      if ( !v4 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x46u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        10000);
    return (unsigned int)-1073741823;
  }
  return v1;
}
