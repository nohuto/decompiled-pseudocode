/*
 * XREFs of ndisMIndicatePDConfigChange @ 0x1C007CD04
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x1C0014630 (NdisWriteErrorLogEntry.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C007C160 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 *     WPP_SF_qdd @ 0x1C007C620 (WPP_SF_qdd_ea_1C007C620.c)
 *     ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C007E070 (-NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

char __fastcall ndisMIndicatePDConfigChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _NDIS_PD_CONFIG *a3,
        unsigned int a4)
{
  _NDIS_PD_BLOCK *PDBlock; // rdi
  char v5; // r14
  SIZE_T v6; // rsi
  KIRQL v9; // r12
  _NDIS_PD_CONFIG *PDCurrentConfig; // rcx
  _NDIS_PD_CONFIG *PoolWithTag; // rax
  _NDIS_PD_CONFIG *v12; // rcx
  __int64 v13; // rdx
  bool v14; // zf
  _NDIS_PD_CONFIG *v15; // rax

  PDBlock = a1->PDBlock;
  v5 = 0;
  v6 = a4;
  if ( PDBlock )
  {
    if ( !ndisValidatePDConfigBuffer(a4, a3) )
      ndisBugCheckEx(0x20uLL, 0x40020200uLL, (ULONG_PTR)a1, (ULONG_PTR)a3);
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 4002776;
    if ( PDBlock->PDCurrentConfigBufferSize < (unsigned int)v6 )
    {
      PDCurrentConfig = PDBlock->PDCurrentConfig;
      if ( PDCurrentConfig )
      {
        ExFreePoolWithTag(PDCurrentConfig, 0);
        PDBlock->PDCurrentConfigSize = 0;
        PDBlock->PDCurrentConfigBufferSize = 0;
      }
      PoolWithTag = (_NDIS_PD_CONFIG *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6F41444Eu);
      PDBlock->PDCurrentConfig = PoolWithTag;
      if ( PoolWithTag )
        PDBlock->PDCurrentConfigBufferSize = v6;
    }
    v12 = PDBlock->PDCurrentConfig;
    if ( v12 )
    {
      memmove(v12, a3, v6);
      v14 = PDBlock->PDEnabledRegistryValue == 0;
      PDBlock->PDCurrentConfigSize = v6;
      if ( v14 )
      {
        v15 = PDBlock->PDCurrentConfig;
        if ( v15->Enabled == 1 )
        {
          v15->Enabled = 0;
          if ( (unsigned __int8)byte_1C00A026C >= 3u )
            WPP_SF_q(0x41u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
        }
      }
      if ( (unsigned __int8)byte_1C00A026C >= 4u )
        WPP_SF_qdd(0x42u, v13, (__int64)a1, a3->Enabled, a3->CapabilitiesSize);
      v5 = 1;
      NdisTraceLoggingPacketDirectConfigChanged(
        a1,
        PDBlock->PDCurrentConfig->CapabilitiesSize != 0,
        PDBlock->PDCurrentConfig->Enabled);
    }
    else
    {
      NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 4294967293LL);
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v9);
  }
  else if ( (unsigned __int8)byte_1C00A026C >= 3u )
  {
    WPP_SF_q(0x40u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  }
  return v5;
}
