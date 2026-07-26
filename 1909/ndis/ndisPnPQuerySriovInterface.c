/*
 * XREFs of ndisPnPQuerySriovInterface @ 0x1C00B57E8
 * Callers:
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003EEE4 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 */

__int64 __fastcall ndisPnPQuerySriovInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      87,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  v5 = *(_QWORD *)(v2 + 184);
  if ( *(_WORD *)(v5 + 16) >= 0x78u && (LODWORD(a2) = 1, *(_WORD *)(v5 + 18) == 1) )
  {
    if ( ndisSystemSupportsSriov && (v6 = *(_QWORD *)(a1 + 4608)) != 0 && (*(_BYTE *)(v6 + 8) & 3) == 3 )
    {
      v7 = *(_QWORD **)(v5 + 24);
      v7[2] = ndisSriovInterfaceReference;
      v7[3] = ndisSriovInterfaceDereference;
      v7[4] = ndisSriovInterfaceReadVFConfig;
      v7[5] = ndisSriovInterfaceWriteVFConfig;
      v7[6] = ndisSriovInterfaceReadVfConfigBlock;
      v7[7] = ndisSriovInterfaceWriteVfConfigBlock;
      v7[8] = ndisSriovInterfaceQueryProbedBars;
      v7[9] = ndisSriovInterfaceGetVendorAndDeviceIds;
      v7[10] = ndisSriovInterfaceGetDeviceLocation;
      v7[11] = ndisSriovInterfaceResetVF;
      v7[12] = ndisSriovInterfaceSetVfPowerState;
      v7[14] = ndisSriovQueryLuid;
      v7[13] = ndisSriovGetResourceForBar;
      *v7 = 65656LL;
      v7[1] = a1;
      ndisReferenceMiniportNoCheck(a1, 0x44u);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      88,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      v4);
  }
  return v4;
}
