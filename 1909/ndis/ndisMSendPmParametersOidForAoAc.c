/*
 * XREFs of ndisMSendPmParametersOidForAoAc @ 0x1C00A540C
 * Callers:
 *     ndisWdfSendPmParametersForSx @ 0x1C00A6190 (ndisWdfSendPmParametersForSx.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C00A6248 (ndisWdmSendOidPmParametersForSx.c)
 *     ndisWdfSendPmParametersForAoAc @ 0x1C00BDCA8 (ndisWdfSendPmParametersForAoAc.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011D330 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForAoAc(__int64 a1, __int64 a2)
{
  char v5[256]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v5, 0, 0xF8uLL);
  *(_DWORD *)&v5[88] |= 8u;
  *(_QWORD *)&v5[104] = &ndisIntReqGeneric;
  *(_DWORD *)v5 = 15466902;
  *(_DWORD *)&v5[32] = -50265847;
  *(_QWORD *)&v5[4] = 1LL;
  *(_QWORD *)&v5[40] = a2;
  *(_DWORD *)&v5[48] = 20;
  return ndisQuerySetMiniportEx(a1, 0LL, (__int64)v5, 0, 0LL, 0LL);
}
