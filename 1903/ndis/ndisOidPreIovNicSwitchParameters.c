/*
 * XREFs of ndisOidPreIovNicSwitchParameters @ 0x1C00B41F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A8B0 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovNicSwitchParameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r15
  char v2; // bl
  __int64 v3; // rdi
  char v4; // r12
  __int64 v5; // r14
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // eax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rdx
  int v14; // eax
  unsigned int v15; // r8d
  _BYTE *OidSourceHandle; // rax

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      25,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v1,
      v3);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = 548;
  if ( v7 != 12 )
  {
    if ( v7 != 1 )
      goto LABEL_50;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x224u )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) < 2u )
        goto LABEL_23;
      v8 = 552;
      if ( *(_DWORD *)(v3 + 48) >= 0x228u )
        goto LABEL_23;
      *(_DWORD *)(v3 + 56) = 552;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 548;
    }
    v9 = -1073676268;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x224u )
  {
    v9 = -1073676268;
LABEL_8:
    *(_DWORD *)(v3 + 68) = 548;
LABEL_9:
    *(_DWORD *)(a1 + 40) = v9;
LABEL_51:
    v2 = 1;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(v3 + 52) < 0x224u )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
  {
    v8 = 552;
    if ( *(_DWORD *)(v3 + 48) < 0x228u )
    {
      v9 = -1073676268;
LABEL_15:
      *(_DWORD *)(v3 + 68) = 552;
      goto LABEL_9;
    }
    if ( *(_DWORD *)(v3 + 52) < 0x228u )
    {
      v9 = -1073676266;
      goto LABEL_15;
    }
  }
LABEL_23:
  if ( !v1 )
    goto LABEL_52;
  v10 = *(_DWORD *)(v3 + 4);
  if ( v10 == 12 )
  {
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 64) = v8;
  }
  else
  {
    if ( v10 != 1 )
      goto LABEL_29;
    *(_DWORD *)(v3 + 52) = v8;
  }
  v5 = *(_QWORD *)(v3 + 40);
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)v1) )
  {
    SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
    if ( !SriovCurrentCapabilities
      || !v1->NicSwitchCurrentCapabilities
      || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    {
      goto LABEL_50;
    }
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v11, *(_DWORD *)(v5 + 12));
  if ( !SwitchBySwitchId )
  {
LABEL_34:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_51;
  }
  v14 = *(_DWORD *)(v3 + 4);
  if ( v14 == 12 )
  {
    memmove(*(void **)(v3 + 40), &SwitchBySwitchId->SwitchParameters, v8);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(v3 + 60) = v8;
    goto LABEL_51;
  }
  if ( v14 != 1 )
    goto LABEL_52;
  if ( v8 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v1) )
    {
      if ( !v15 || v15 > v1->NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_34;
    }
    else if ( v15 != 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_50:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_51;
  }
  v4 = (char)OidSourceHandle;
  if ( (*(_DWORD *)(v5 + 4) & 0x10000) == 0 || *(_WORD *)(v5 + 16) > 0x200u )
    goto LABEL_34;
LABEL_52:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v1,
      v4,
      v2,
      *(_DWORD *)(a1 + 40));
  return v2;
}
