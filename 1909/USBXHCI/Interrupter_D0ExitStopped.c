/*
 * XREFs of Interrupter_D0ExitStopped @ 0x1C001E1C0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x1C00034D8 (WPP_RECORDER_SF_qqdddi.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 */

PDEVICE_OBJECT __fastcall Interrupter_D0ExitStopped(__int64 a1, int a2)
{
  PDEVICE_OBJECT result; // rax
  unsigned int i; // edi
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-48h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qd(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                 5u,
                                 9u,
                                 0x23u,
                                 (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
                                 a1,
                                 a2);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    result = *(PDEVICE_OBJECT *)(a1 + 32);
    v5 = *((_QWORD *)&result->Type + i);
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qqdddi(
                                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                   *(unsigned int *)(v5 + 124),
                                   *(_QWORD *)(v5 + 144),
                                   0x24u,
                                   v6);
    }
  }
  return result;
}
