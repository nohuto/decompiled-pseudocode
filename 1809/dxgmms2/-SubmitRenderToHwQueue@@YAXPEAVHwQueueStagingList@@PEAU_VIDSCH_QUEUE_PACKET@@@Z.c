/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033308
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00351A0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001098 (VidSchiMarkDeviceAsError.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003384C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall SubmitRenderToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  _DWORD *v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  CRefCountedBuffer *v13; // rcx
  int v14; // r12d
  _DWORD *v15; // rbx
  __int128 v16; // xmm1
  _OWORD v17[4]; // [rsp+20h] [rbp-40h] BYREF

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
    memset(v17, 0, sizeof(v17));
    v9 = (_DWORD *)*((_QWORD *)a2 + 36);
    *(_QWORD *)&v17[0] = *(_QWORD *)(v2 + 104);
    *((_QWORD *)&v17[0] + 1) = *((_QWORD *)a2 + 95);
    v17[3] = *(_OWORD *)((char *)a2 + 776);
    *(_QWORD *)&v17[1] = *((_QWORD *)a2 + 40);
    DWORD2(v17[1]) = *((_DWORD *)a2 + 83);
    if ( v9 )
    {
      HIDWORD(v17[1]) = *v9;
      v10 = v9 + 2;
    }
    else
    {
      v11 = *((_QWORD *)a2 + 35);
      if ( v11 )
      {
        HIDWORD(v17[1]) = *((_DWORD *)a2 + 89);
        v10 = *(_DWORD **)(v11 + 128);
      }
      else
      {
        HIDWORD(v17[1]) = 0;
        v10 = 0LL;
      }
    }
    *(_QWORD *)&v17[2] = v10;
    DWORD2(v17[2]) = DWORD2(v17[2]) & 0xFFFFFFF9 | ((*((_DWORD *)a2 + 18) & 0x80 | (*((_DWORD *)a2 + 18) >> 10) & 0x40u) >> 5);
    v12 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[53])(*(_QWORD *)(v8 + 8), v17);
    v13 = (CRefCountedBuffer *)*((_QWORD *)a2 + 36);
    v14 = v12;
    if ( v13 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v13);
      *((_QWORD *)a2 + 36) = 0LL;
    }
    v15 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v15, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    *v15 = 8;
    *((_QWORD *)v15 + 10) = *((_QWORD *)a2 + 95);
    v15[22] = *((_DWORD *)a2 + 192);
    *((_OWORD *)v15 + 1) = v17[0];
    *((_OWORD *)v15 + 2) = v17[1];
    *((_OWORD *)v15 + 3) = v17[2];
    v16 = v17[3];
    v15[23] = v14;
    *((_OWORD *)v15 + 4) = v16;
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
