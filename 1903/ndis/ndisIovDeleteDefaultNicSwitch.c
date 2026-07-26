/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C00B1844
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B030C (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B03B4 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char SetMiniport; // di
  int v3; // edx
  int v4; // edx
  _QWORD v5[32]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+148h] [rbp+40h] BYREF
  int v7; // [rsp+150h] [rbp+48h]

  SetMiniport = 0;
  memset(v5, 0, 0xF8uLL);
  v6 = 0LL;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      26,
      83,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1);
  }
  if ( ndisIovFindSwitchBySwitchId(a1, 0) )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(a1, 0);
    if ( (a1->Flags & 4) == 0 )
    {
      LODWORD(v6) = 786816;
      v7 = 0;
      memset(v5, 0, 0xF8uLL);
      LODWORD(v5[11]) |= 8u;
      v5[13] = &ndisIntReqGeneric;
      v5[5] = &v6;
      LODWORD(v5[0]) = 15466902;
      LODWORD(v5[4]) = 66105;
      *(_QWORD *)((char *)v5 + 4) = 1LL;
      LODWORD(v5[6]) = 12;
      SetMiniport = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v5, 0, 0LL, 0LL);
    }
    ndisIovDeleteNicSwitch(a1, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      84,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1,
      SetMiniport);
  }
}
