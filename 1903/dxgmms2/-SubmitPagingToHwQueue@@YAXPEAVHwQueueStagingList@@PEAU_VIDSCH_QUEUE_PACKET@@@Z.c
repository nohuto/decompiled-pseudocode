/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033AEC
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C00010A0 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003426C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r12d
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm1
  _OWORD v18[4]; // [rsp+20h] [rbp-40h] BYREF

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
    v9 = 352LL * *(unsigned __int16 *)(v6 + 6);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
    if ( !*(_BYTE *)(v9 + *(_QWORD *)(v10 + 2440) + 40) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
      v11[3] = 281LL;
      v11[4] = 24576LL;
      v11[5] = 0LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
    }
    memset(v18, 0, sizeof(v18));
    v12 = *((_QWORD *)a2 + 35);
    *(_QWORD *)&v18[0] = *(_QWORD *)(v2 + 104);
    *((_QWORD *)&v18[0] + 1) = *((_QWORD *)a2 + 36);
    v18[3] = *(_OWORD *)((char *)a2 + 296);
    *(_QWORD *)&v18[1] = *(_QWORD *)(v12 + 96) + *((unsigned int *)a2 + 81);
    DWORD2(v18[1]) = *((_DWORD *)a2 + 82);
    v13 = *(_QWORD *)(v12 + 128) + *((unsigned int *)a2 + 83);
    DWORD2(v18[2]) |= 1u;
    *(_QWORD *)&v18[2] = v13;
    HIDWORD(v18[1]) = *((_DWORD *)a2 + 84);
    v14 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[53])(*(_QWORD *)(v8 + 8), v18);
    v15 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v15, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    *v15 = 8;
    v16 = *((_QWORD *)a2 + 36);
    v15[22] = 0;
    *((_QWORD *)v15 + 10) = v16;
    *((_OWORD *)v15 + 1) = v18[0];
    *((_OWORD *)v15 + 2) = v18[1];
    *((_OWORD *)v15 + 3) = v18[2];
    v17 = v18[3];
    v15[23] = v14;
    *((_OWORD *)v15 + 4) = v17;
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
