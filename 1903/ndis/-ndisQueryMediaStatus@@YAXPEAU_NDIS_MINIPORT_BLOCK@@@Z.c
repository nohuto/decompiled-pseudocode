/*
 * XREFs of ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A54E8
 * Callers:
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisQueryMediaStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // [rsp+30h] [rbp-128h] BYREF
  char v3[256]; // [rsp+40h] [rbp-118h] BYREF

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      149,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  memset(v3, 0, 0xF8uLL);
  *(_QWORD *)&v3[40] = &v2;
  *(_DWORD *)v3 = 15466902;
  *(_QWORD *)&v3[104] = &ndisIntReqGeneric;
  *(_DWORD *)&v3[32] = 65812;
  *(_DWORD *)&v3[48] = 4;
  ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v3, 0, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      150,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
}
