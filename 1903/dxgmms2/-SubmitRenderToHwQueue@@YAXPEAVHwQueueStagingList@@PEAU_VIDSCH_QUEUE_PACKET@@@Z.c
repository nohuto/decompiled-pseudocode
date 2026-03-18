/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033D34
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C00010A0 (VidSchiMarkDeviceAsError.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013444 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003426C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall SubmitRenderToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  int *v9; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  CRefCountedBuffer *v15; // rcx
  int v16; // r12d
  _DWORD *v17; // rbx
  __int128 v18; // xmm1
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+50h] [rbp-10h]

  v2 = *((_QWORD *)a2 + 12);
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v6 + 24);
  if ( (*(_BYTE *)(v8 + 2428) & 1) != 0
    || *(_DWORD *)(v8 + 2404)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
  {
    VidSchiCompleteHwQueuePacket(a1, a2);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6);
    v9 = (int *)*((_QWORD *)a2 + 36);
    *((_QWORD *)&v21 + 1) = 0LL;
    *(_QWORD *)&v19 = *(_QWORD *)(v2 + 104);
    *((_QWORD *)&v19 + 1) = *((_QWORD *)a2 + 95);
    v22 = *(_OWORD *)((char *)a2 + 776);
    *(_QWORD *)&v20 = *((_QWORD *)a2 + 40);
    DWORD2(v20) = *((_DWORD *)a2 + 83);
    if ( v9 )
    {
      v10 = *v9;
      v11 = v9 + 2;
      HIDWORD(v20) = v10;
    }
    else
    {
      v12 = *((_QWORD *)a2 + 35);
      if ( v12 )
      {
        HIDWORD(v20) = *((_DWORD *)a2 + 89);
        v11 = *(_DWORD **)(v12 + 128);
      }
      else
      {
        HIDWORD(v20) = 0;
        v11 = 0LL;
      }
    }
    v13 = *((_DWORD *)a2 + 18);
    *(_QWORD *)&v21 = v11;
    DWORD2(v21) = DWORD2(v21) & 0xFFFFFFF9 | ((v13 & 0x80 | (v13 >> 10) & 0x40) >> 5);
    v14 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[53])(*(_QWORD *)(v8 + 8), &v19);
    v15 = (CRefCountedBuffer *)*((_QWORD *)a2 + 36);
    v16 = v14;
    if ( v15 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v15);
      *((_QWORD *)a2 + 36) = 0LL;
    }
    v17 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v17, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    *v17 = 8;
    *((_QWORD *)v17 + 10) = *((_QWORD *)a2 + 95);
    v17[22] = *((_DWORD *)a2 + 192);
    *((_OWORD *)v17 + 1) = v19;
    *((_OWORD *)v17 + 2) = v20;
    *((_OWORD *)v17 + 3) = v21;
    v18 = v22;
    v17[23] = v16;
    *((_OWORD *)v17 + 4) = v18;
    if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
