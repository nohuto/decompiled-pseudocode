/*
 * XREFs of ndisWdfSendPmParametersForSuspend @ 0x1C00BA608
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B58F8 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00B59F8 (ndisMSendPmParametersOidForSuspend.c)
 */

__int64 __fastcall ndisWdfSendPmParametersForSuspend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax
  struct _NDIS_PM_PARAMETERS v3; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v4; // [rsp+58h] [rbp-30h] BYREF

  v4 = *ndisMInitializePmParametersForSuspend(&v3, a1);
  result = ndisMSendPmParametersOidForSuspend((char)a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_Lq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               2u,
               0xFu,
               0x15u,
               (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
               result,
               a1);
  }
  return result;
}
