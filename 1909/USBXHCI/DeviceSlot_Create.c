/*
 * XREFs of DeviceSlot_Create @ 0x1C00641E8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilDeviceSlot_Create @ 0x1C0015ED4 (XilDeviceSlot_Create.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 *v8; // rsi
  int v10; // [rsp+28h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+34h] [rbp-3Ch]
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  void *v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = a1;
  v13 = 0;
  v17 = 0LL;
  v14 = 1;
  v15 = 1;
  v18 = off_1C0056108;
  v16 = *(_QWORD *)(a2 + 8);
  v12 = 0LL;
  v11 = 56;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         &v11,
         &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v19,
                      off_1C0056108);
    *v8 = v19;
    v8[1] = a2;
    v5 = XilDeviceSlot_Create((__int64)v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v7 = 11;
      goto LABEL_4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(*(_QWORD *)(a2 + 72), 4u, 0xAu, 0xCu, (__int64)(&Context.EnableBitsCount + 1), v19);
    *a3 = v8;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 10;
LABEL_4:
    v10 = v5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 0xAu, v7, (__int64)(&Context.EnableBitsCount + 1), v10);
  }
  return v6;
}
