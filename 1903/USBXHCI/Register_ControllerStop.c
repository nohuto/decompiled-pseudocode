/*
 * XREFs of Register_ControllerStop @ 0x1C00203FC
 * Callers:
 *     Controller_D0Exit @ 0x1C000DBE0 (Controller_D0Exit.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  int Ulong; // eax
  int i; // r14d
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x39u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v3 + 4) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x3Au,
            (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
            16 - i,
            1);
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x3Bu,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        16);
    return (unsigned int)-1073741823;
  }
  return v1;
}
