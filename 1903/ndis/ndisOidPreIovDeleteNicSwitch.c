/*
 * XREFs of ndisOidPreIovDeleteNicSwitch @ 0x1C00B3150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025890 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0025EA0 (WPP_RECORDER_SF_qqqDD.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovDeleteNicSwitch(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  v6 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x10u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v2,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      v4);
    v6 = *(_QWORD *)a1;
  }
  if ( !v6 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v2) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v5 = 0;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v2 + 3568);
  if ( !v9 || *(_BYTE *)(v9 + 1) < 2u || *(_WORD *)(v9 + 2) < 0x74u || !*(_DWORD *)(v9 + 36) || *(_DWORD *)(v4 + 4) != 1 )
    goto LABEL_7;
  *(_DWORD *)(a1 + 40) = 0;
  if ( !*(_DWORD *)(v4 + 48) )
  {
    *(_DWORD *)(v4 + 56) = 1;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(v4 + 40);
  if ( !*(_BYTE *)(v10 + 1) || *(_DWORD *)(v10 + 8) )
    goto LABEL_19;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, 0);
  if ( SwitchBySwitchId )
  {
    if ( SwitchBySwitchId->NumActiveVPorts <= 1 && !SwitchBySwitchId->NumAllocatedVFs )
      goto LABEL_4;
LABEL_19:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = 0;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x11u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      v5,
      *(_DWORD *)(a1 + 40));
  return v5;
}
