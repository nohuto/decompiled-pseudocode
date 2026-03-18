/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C003C370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // edx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h]
  _QWORD v11[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v11);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v11[1] + 16LL),
         off_1C00562C0);
  v4 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_QWORD *)v3;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      12,
      26,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
  }
  if ( *(_BYTE *)(v4 + 134) )
  {
    if ( Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
    {
      *(_QWORD *)(v4 + 424) = a2;
      *(_BYTE *)(v4 + 432) = 0;
      result = UsbDevice_SetAddress(v4, 0);
      v7 = result;
      if ( (int)result >= 0 )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = result;
        LODWORD(v9) = *(unsigned __int8 *)(v4 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          3u,
          0xCu,
          0x1Cu,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
          v9,
          v10);
      }
    }
    else
    {
      v7 = -1073741810;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v6,
        12,
        27,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    v7 = -1073741823;
  }
  *(_QWORD *)(v4 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
