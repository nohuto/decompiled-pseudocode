/*
 * XREFs of Interrupter_D0ExitStopped @ 0x1C001ADDC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x1C0003018 (WPP_RECORDER_SF_qqdddi.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 */

PDEVICE_OBJECT __fastcall Interrupter_D0ExitStopped(__int64 a1, int a2)
{
  PDEVICE_OBJECT result; // rax
  unsigned int i; // edi
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-48h]

  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qd(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                               5u,
                               9u,
                               0x23u,
                               (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
                               a1,
                               a2);
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    result = *(PDEVICE_OBJECT *)(a1 + 32);
    v5 = *((_QWORD *)&result->Type + i);
    if ( v5 )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qqdddi(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                 *(unsigned int *)(v5 + 124),
                                 *(_QWORD *)(v5 + 144),
                                 0x24u,
                                 v6);
  }
  return result;
}
