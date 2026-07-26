/*
 * XREFs of ndisOidPreIovVFParameters @ 0x1C00B4F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovVFParameters(__int64 a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *v5; // rax
  char v6; // di
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  __int64 v8; // r10
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  void *v10; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      39,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_17;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x660u )
  {
    v4 = -1073676268;
LABEL_8:
    *(_DWORD *)(v1 + 68) = 1632;
LABEL_18:
    *(_DWORD *)(a1 + 40) = v4;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x660u )
  {
    v4 = -1073676266;
    goto LABEL_8;
  }
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v6 = 0;
    goto LABEL_20;
  }
  SriovCurrentCapabilities = v5->SriovCurrentCapabilities;
  if ( !SriovCurrentCapabilities
    || !v5->NicSwitchCurrentCapabilities
    || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
  {
LABEL_17:
    v4 = -1073741637;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 64) = 1632;
  VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 1626));
  if ( VFByVFId )
  {
    memmove(v10, &VFByVFId->VFParameters, 0x660uLL);
    *(_DWORD *)(v1 + 60) = 1632;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
  v4 = -1073741811;
LABEL_19:
  v6 = 1;
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x28u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v6,
      v4);
  return v6;
}
