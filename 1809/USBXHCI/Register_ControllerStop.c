/*
 * XREFs of Register_ControllerStop @ 0x1C001CAAC
 * Callers:
 *     Controller_D0Exit @ 0x1C000B914 (Controller_D0Exit.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int Ulong; // eax
  int v5; // ebp
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x39u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
  v2 = 0;
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    v5 = 16;
    while ( (XilRegister_ReadUlong(a1, v3 + 4) & 1) == 0 )
    {
      if ( !v5 )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x3Bu,
          (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
          16);
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v5;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x3Au,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      16 - v5,
      1);
  }
  return v2;
}
