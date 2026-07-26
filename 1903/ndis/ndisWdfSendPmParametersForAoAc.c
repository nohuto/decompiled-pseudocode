/*
 * XREFs of ndisWdfSendPmParametersForAoAc @ 0x1C00BDAD8
 * Callers:
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BDA3C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ndisMSendPmParametersOidForAoAc @ 0x1C00A523C (ndisMSendPmParametersOidForAoAc.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBF70 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfSendPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax
  struct _NDIS_PM_PARAMETERS v3; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v4; // [rsp+58h] [rbp-30h] BYREF

  v4 = *ndisMInitializePmParametersForAoAc(&v3, a1);
  result = ndisMSendPmParametersOidForAoAc((__int64)a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_Lq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               3u,
               0xEu,
               0x1Eu,
               (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
               result,
               a1);
  }
  return result;
}
