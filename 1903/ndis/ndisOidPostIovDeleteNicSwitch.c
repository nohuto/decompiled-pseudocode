/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C00B2420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B030C (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B03B4 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rax
  __int64 v5; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      18,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  }
  if ( v4
    && ndisIovNicSwitchWithoutIovSupported((__int64)v3)
    && (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric
    && !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(_DWORD *)(v5 + 8));
    ndisIovDeleteNicSwitch(v3, *(_DWORD *)(v5 + 8));
  }
}
