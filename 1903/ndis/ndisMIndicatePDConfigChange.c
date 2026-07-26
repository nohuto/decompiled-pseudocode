/*
 * XREFs of ndisMIndicatePDConfigChange @ 0x1C00C1DE8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C00C0180 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00C0D60 (WPP_RECORDER_SF_qdd_ea_1C00C0D60.c)
 *     ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00C3284 (-NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

char __fastcall ndisMIndicatePDConfigChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _NDIS_PD_CONFIG *a3,
        unsigned int a4)
{
  _NDIS_PD_BLOCK *PDBlock; // rbx
  char v5; // r14
  SIZE_T v6; // rsi
  KIRQL v9; // r12
  _NDIS_PD_CONFIG *PDCurrentConfig; // rcx
  _NDIS_PD_CONFIG *PoolWithTag; // rax
  _NDIS_PD_CONFIG *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  bool v15; // zf
  _NDIS_PD_CONFIG *v16; // rax
  int v18; // [rsp+20h] [rbp-38h]

  PDBlock = a1->PDBlock;
  v5 = 0;
  v6 = a4;
  if ( PDBlock )
  {
    if ( !ndisValidatePDConfigBuffer(a4, a3) )
      ndisBugCheckEx(0x20uLL, 0x40020200uLL, (ULONG_PTR)a1, (ULONG_PTR)a3);
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
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
    if ( !v12 )
    {
      NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 4294967293LL);
      goto LABEL_20;
    }
    memmove(v12, a3, v6);
    v15 = PDBlock->PDEnabledRegistryValue == 0;
    PDBlock->PDCurrentConfigSize = v6;
    if ( v15 )
    {
      v16 = PDBlock->PDCurrentConfig;
      if ( v16->Enabled == 1 )
      {
        v16->Enabled = 0;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_18:
          v5 = 1;
          NdisTraceLoggingPacketDirectConfigChanged(
            a1,
            PDBlock->PDCurrentConfig->CapabilitiesSize != 0,
            PDBlock->PDCurrentConfig->Enabled);
LABEL_20:
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, v9);
          return v5;
        }
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3,
          29,
          65,
          (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
          (char)a1);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, 0x42u, v18);
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3,
      29,
      64,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  return v5;
}
