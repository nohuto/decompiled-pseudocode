/*
 * XREFs of ndisOidPreIovDeleteVPort @ 0x1C00B34E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B1BA0 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisOidPreIovDeleteVPort(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // bl
  __int64 v5; // rax
  _BYTE *OidSourceHandle; // rax
  _BYTE *v7; // r14
  unsigned int v8; // edx
  __int64 VPortByVPortId; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      51,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_20;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_21;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  if ( (ndisIovNicSwitchWithoutIovSupported(v3)
     || (v5 = *(_QWORD *)(v3 + 4608)) != 0 && *(_QWORD *)(v3 + 3568) && (*(_BYTE *)(v5 + 8) & 3) == 3)
    && (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1), (v7 = OidSourceHandle) != 0LL)
    && *OidSourceHandle == 18
    && (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) != 0 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
    if ( VPortByVPortId )
    {
      if ( *(_BYTE **)(VPortByVPortId + 80) == v7 )
      {
        *(_QWORD *)(v1 + 152) = VPortByVPortId;
LABEL_7:
        v4 = 0;
        goto LABEL_21;
      }
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
  }
  else
  {
LABEL_20:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x34u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v4,
      *(_DWORD *)(a1 + 40));
  return v4;
}
