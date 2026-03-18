/*
 * XREFs of DeviceSlot_Create @ 0x1C005C904
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilDeviceSlot_Create @ 0x1C001342C (XilDeviceSlot_Create.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  int v8; // eax
  __int64 v9; // r10
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = a1;
  memset(v11, 0, 0x38uLL);
  v11[3] = 0x100000001LL;
  v11[6] = off_1C004F0E0;
  v11[4] = *(_QWORD *)(a2 + 8);
  LODWORD(v11[0]) = 56;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v11,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v12,
                      off_1C004F0E0);
    *v7 = v12;
    v7[1] = a2;
    v8 = XilDeviceSlot_Create((__int64)v7);
    v9 = *(_QWORD *)(a2 + 72);
    v6 = v8;
    if ( v8 >= 0 )
    {
      WPP_RECORDER_SF_i(v9, 4u, 0xAu, 0xCu, (__int64)&WPP_8286b434249d3c674ece5f25eb47b41f_Traceguids, v12);
      *a3 = v7;
    }
    else
    {
      WPP_RECORDER_SF_d(v9, 2u, 0xAu, 0xBu, (__int64)&WPP_8286b434249d3c674ece5f25eb47b41f_Traceguids, v8);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0xAu,
      0xAu,
      (__int64)&WPP_8286b434249d3c674ece5f25eb47b41f_Traceguids,
      v5);
  }
  return v6;
}
