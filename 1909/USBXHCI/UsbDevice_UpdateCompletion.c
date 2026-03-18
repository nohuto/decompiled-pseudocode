/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x1C003D220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C003D3DC (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C003DA54 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqDL @ 0x1C003DB4C (WPP_RECORDER_SF_dqDL.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // edx
  char v11; // cl
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+50h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 424);
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v5,
    v14);
  v9 = v14[1];
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v10,
        12,
        29,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
LABEL_12:
    v12 = 3221225473LL;
    goto LABEL_13;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v7, v8);
      v11 = *(_BYTE *)(a1 + 60);
    }
    if ( v11 == 29 )
      *(_DWORD *)(v9 + 56) |= 1u;
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v6, *(unsigned __int8 *)(a1 + 61), 30);
  UsbDevice_UpdateUsbDevice(v4, v9);
  v12 = 0LL;
LABEL_13:
  *(_QWORD *)(v4 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v5,
           v12);
}
