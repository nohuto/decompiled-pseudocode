/*
 * XREFs of ndisQueryOidList @ 0x1C00339C4
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x1C0033B48 (-ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C0033FFC (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisQueryOidList(struct _NDIS_USER_OPEN_CONTEXT *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // r9d
  int v5; // edx
  unsigned int SetMiniportEx2; // ebx
  int v8; // [rsp+20h] [rbp-E0h]
  int v9; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13[62]; // [rsp+60h] [rbp-A0h] BYREF

  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      17,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a1);
  memset(v13, 0, sizeof(v13));
  v2 = *((_QWORD *)a1 + 1);
  v13[22] |= 8u;
  v13[2] = 0;
  *(_QWORD *)&v13[10] = 0LL;
  v13[12] = 0;
  *(_QWORD *)&v13[26] = &ndisIntReqIoctl;
  v13[0] = 15466902;
  v13[8] = 65793;
  v13[1] = 2;
  SetMiniportEx2 = ndisQuerySetMiniportEx2(
                     v2,
                     v3,
                     (int)v13,
                     v4,
                     v8,
                     v9,
                     0x2020444Eu,
                     (__int64)&P,
                     (__int64)&v12,
                     (__int64)&v11);
  if ( !SetMiniportEx2 )
    SetMiniportEx2 = ndisSplitStatisticsOids(a1, (unsigned int *)P, v11 >> 2);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      18,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a1,
      SetMiniportEx2);
  }
  return SetMiniportEx2;
}
