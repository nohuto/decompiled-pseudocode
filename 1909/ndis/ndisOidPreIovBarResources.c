/*
 * XREFs of ndisOidPreIovBarResources @ 0x1C00B2D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovBarResources(__int64 a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // r9d

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      75,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v5 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 12;
LABEL_10:
    *(_DWORD *)(a1 + 40) = v5;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xCu )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  v7 = v6;
  if ( v6 < 0xC )
    v7 = 12;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v5 = -1073676268;
LABEL_17:
    *(_DWORD *)(v1 + 68) = v7;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v1 + 52) < v6 )
  {
    v5 = -1073676266;
    goto LABEL_17;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_22:
    v4 = 1;
    goto LABEL_23;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Cu,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)(a1 + 40));
  return v4;
}
