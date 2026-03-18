/*
 * XREFs of IoControl_Create @ 0x1C005F514
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall IoControl_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 *v8; // rbx
  _QWORD v10[8]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[12]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v12; // [rsp+108h] [rbp+7Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v11[0] = 0x100000060LL;
  LODWORD(v11[1]) = 2;
  BYTE5(v11[1]) = 1;
  v11[5] = IoControl_WdfEvtIoDeviceControl;
  memset(v10, 0, 0x38uLL);
  v10[6] = off_1C004F108;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 1216))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         v11,
         v10,
         &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v12,
                      off_1C004F108);
    *v8 = v12;
    v8[1] = a2;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(a2 + 72),
      4u,
      5u,
      0xBu,
      (__int64)&WPP_eaf88da008f337335b34115742c757d1_Traceguids,
      v12);
    *a3 = v8;
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 5u, 0xAu, (__int64)&WPP_eaf88da008f337335b34115742c757d1_Traceguids, v6);
  }
  return v7;
}
