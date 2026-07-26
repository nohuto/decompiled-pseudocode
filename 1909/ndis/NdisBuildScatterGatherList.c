/*
 * XREFs of NdisBuildScatterGatherList @ 0x1C0078C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBAC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

NDIS_STATUS __stdcall NdisBuildScatterGatherList(
        NDIS_HANDLE NdisHandle,
        PNDIS_SCATTER_GATHER_LIST_PARAMETERS SGListParameters)
{
  NDIS_STATUS v3; // ebx
  struct _NDIS_MINIPORT_BLOCK *v4; // r11
  __int64 v5; // r11
  unsigned int CurrentCpu; // ecx
  __int16 DatapathCyclesMask; // si
  __int64 v8; // r14
  _MDL *Mdl; // r8
  char *v10; // rbp
  _SCATTER_GATHER_LIST *ScatterGatherListBuffer; // r9
  NDIS_PCW_CONTEXT v13; // [rsp+60h] [rbp-38h] BYREF

  v3 = -1073741670;
  v4 = (struct _NDIS_MINIPORT_BLOCK *)NdisHandle;
  if ( !NdisHandle )
    return -1073741811;
  if ( *(_BYTE *)NdisHandle != 18 )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
      goto LABEL_5;
    return -1073741811;
  }
  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisHandle + 2);
LABEL_5:
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v13, v4);
  if ( (v13.DatapathEventsMask & 0x400) != 0 )
  {
    CurrentCpu = v13.CurrentCpu;
    if ( v13.CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v13.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)&v13.PcwBlock->DatapathEventReferences[20]
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  DatapathCyclesMask = v13.DatapathCyclesMask;
  if ( (v13.DatapathCyclesMask & 0x400) != 0 )
  {
    ndisPcwStartCycleCounter(&v13, 0xAu);
    DatapathCyclesMask = v13.DatapathCyclesMask;
  }
  v8 = *(_QWORD *)(v5 + 504);
  if ( v8 )
  {
    Mdl = SGListParameters->Mdl;
    if ( Mdl )
    {
      v10 = (char *)Mdl->StartVa + Mdl->ByteOffset;
      ScatterGatherListBuffer = SGListParameters->ScatterGatherListBuffer;
      if ( ScatterGatherListBuffer )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, _SCATTER_GATHER_LIST *, unsigned int))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 112LL))(
               *(_QWORD *)(v8 + 24),
               *(_QWORD *)(v5 + 3824),
               Mdl,
               v10,
               SGListParameters->Length,
               SGListParameters->ProcessSGListHandler,
               SGListParameters->Context,
               SGListParameters->Flags & 1,
               ScatterGatherListBuffer,
               SGListParameters->ScatterGatherListBufferSize);
        if ( v3 == -1073741789 )
        {
          v3 = -1073676266;
          if ( (*(int (__fastcall **)(_QWORD, _MDL *, char *, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL)
                                                                                             + 104LL))(
                 *(_QWORD *)(v8 + 24),
                 SGListParameters->Mdl,
                 v10,
                 SGListParameters->Length,
                 &SGListParameters->ScatterGatherListBufferSizeNeeded,
                 0LL) < 0 )
            v3 = -1073741670;
        }
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    SGListParameters->ProcessSGListHandler(
      *(_DEVICE_OBJECT **)(v5 + 3824),
      0LL,
      SGListParameters->ScatterGatherListBuffer,
      SGListParameters->Context);
    v3 = 0;
  }
  if ( (DatapathCyclesMask & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v13, 0xAu, 0x17uLL);
  return v3;
}
