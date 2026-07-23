/*
 * XREFs of ViSwap @ 0x14092FA40
 * Callers:
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x14092BB00 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x14092E340 (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x14092E9FC (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14092EA20 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViSwap(__int64 *a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 MapRegisterFile; // rbx
  const void **v7; // r8
  __int64 MdlBufferSa; // rax
  __int16 v9; // r11
  int v11; // [rsp+48h] [rbp+20h] BYREF

  MapRegisterFile = ViGetMapRegisterFile(*a1);
  if ( !MapRegisterFile )
    return 0LL;
  MdlBufferSa = ViGetMdlBufferSa(*a2, *v7);
  if ( !MdlBufferSa || !ViFindMappedRegisterInFile(MapRegisterFile, MdlBufferSa, &v11) )
    return 0LL;
  *a2 = *(_QWORD *)(MapRegisterFile + 56);
  *a3 = *(_QWORD *)(*(_QWORD *)(MapRegisterFile + 56) + 32LL)
      + (unsigned int)(v11 << 12)
      + *(unsigned int *)(*(_QWORD *)(MapRegisterFile + 56) + 44LL)
      + (unsigned __int64)(v9 & 0xFFF);
  *a1 = *(_QWORD *)(MapRegisterFile + 48);
  return 1LL;
}
