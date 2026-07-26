/*
 * XREFs of ndisOidPostIovCreateNicSwitch @ 0x1C00B2200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0930 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0D44 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 */

_UNKNOWN **__fastcall ndisOidPostIovCreateNicSwitch(__int64 a1)
{
  __int64 v1; // r13
  struct _NDIS_NIC_SWITCH_BLOCK *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  struct _NDIS_PF_BLOCK *v4; // r14
  struct _NDIS_VPORT_BLOCK *v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  const struct _GUID *v8; // rdx
  struct _NDIS_NIC_SWITCH_PARAMETERS *v9; // r12
  int v10; // eax
  _UNKNOWN **result; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v12; // [rsp+80h] [rbp+40h] BYREF
  struct _NDIS_PF_BLOCK *v13; // [rsp+88h] [rbp+48h] BYREF
  struct _NDIS_VPORT_BLOCK *v14; // [rsp+90h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v7 = v3;
  v8 = &WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      26,
      14,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
    v7 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  }
  if ( v7 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported((__int64)v3) )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric && !*(_DWORD *)(a1 + 40) )
      {
        v9 = *(struct _NDIS_NIC_SWITCH_PARAMETERS **)(v1 + 40);
        v10 = ndisIovInitializeNicSwitch(v3, v9, &v12, &v13, &v14);
        v5 = v14;
        v4 = v13;
        v2 = v12;
        *(_DWORD *)(a1 + 40) = v10;
        if ( !v10 )
          *(_DWORD *)(a1 + 40) = ndisIovFinalizeNicSwitch(v3, v9, v2, v4, v5);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)v8,
                          26,
                          15,
                          (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
                          (char)v3,
                          v1);
  }
  return result;
}
