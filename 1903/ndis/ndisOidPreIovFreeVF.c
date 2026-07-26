/*
 * XREFs of ndisOidPreIovFreeVF @ 0x1C00B3E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0978 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovFreeVF(__int64 a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // r11d
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  _NDIS_OPEN_BLOCK *v9; // r10
  char v11[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      35,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_18;
  LOBYTE(v5) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    *(_DWORD *)(v1 + 56) = 10;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  SriovCurrentCapabilities = v3->SriovCurrentCapabilities;
  if ( SriovCurrentCapabilities
    && v3->NicSwitchCurrentCapabilities
    && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3
    && (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1)) != 0LL
    && *OidSourceHandle == 18 )
  {
    VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 8LL));
    if ( VFByVFId && VFByVFId->Open == v9 && VFByVFId->NumAttachedVPorts == v5 )
    {
      *(_QWORD *)(v1 + 144) = VFByVFId;
LABEL_7:
      v4 = v5;
      goto LABEL_19;
    }
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
  else
  {
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *(_DWORD *)(a1 + 40);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x24u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v11);
  }
  return v4;
}
