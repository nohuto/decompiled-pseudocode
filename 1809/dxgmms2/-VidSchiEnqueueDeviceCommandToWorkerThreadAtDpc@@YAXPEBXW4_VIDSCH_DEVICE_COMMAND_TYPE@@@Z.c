/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0029AA4
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0029C98 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00297D8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiUpdatePriorityTables @ 0x1C0030DE4 (VidSchiUpdatePriorityTables.c)
 */

LONG __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int128 v7; // xmm0
  __int64 (__fastcall *v8)(); // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 v14; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  LONG result; // eax
  _OWORD v25[8]; // [rsp+28h] [rbp-29h] BYREF
  int v26; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = a2;
  v4 = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( (_DWORD)v2 == 5 )
  {
    v8 = VidSchiExecuteMmIoFlipAtPassiveLevel;
    v4 = *a1;
    v13 = a1[2];
    v25[3] = *(_OWORD *)a1;
    *(_QWORD *)&v25[4] = v13;
    DWORD2(v25[2]) = 5;
  }
  else
  {
    if ( (_DWORD)v2 != 6 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v2 - 5), v5);
      v6[7] = 0LL;
      v6[3] = 270LL;
      v6[4] = 23LL;
      v6[5] = -1073741811LL;
      v6[6] = v2;
      WdLogEvent5_WdCriticalError(v6);
      goto LABEL_7;
    }
    v7 = *(_OWORD *)a1;
    v4 = a1[3];
    v8 = VidSchiExecutePostPresentAtPassiveLevel;
    v9 = *((_OWORD *)a1 + 1);
    DWORD2(v25[2]) = 6;
    v25[3] = v7;
    v10 = *((_OWORD *)a1 + 2);
    v25[4] = v9;
    v11 = *((_OWORD *)a1 + 3);
    v25[5] = v10;
    v12 = *((_OWORD *)a1 + 4);
    v25[6] = v11;
    v25[7] = v12;
  }
  *((_QWORD *)&v25[1] + 1) = v8;
LABEL_7:
  v14 = *(_QWORD *)(v4 + 232);
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)v14);
  *(_DWORD *)PacketFromGuaranteedPacketPool = 895576406;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PacketFromGuaranteedPacketPool + 13) = 2;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 11) = v14;
  CurrentThread = KeGetCurrentThread();
  v17 = v25[1];
  v26 = 0;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 17) = v25[0];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 13) = CurrentThread;
  v18 = v25[2];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 18) = v17;
  v19 = v25[3];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 19) = v18;
  v20 = v25[4];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 20) = v19;
  v21 = v25[5];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 21) = v20;
  v22 = v25[6];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 22) = v21;
  v23 = v25[7];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 23) = v22;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 24) = v23;
  result = VidSchiUpdatePriorityTables(v4, PacketFromGuaranteedPacketPool, &v26);
  if ( (_DWORD)v2 == 5 )
  {
    ++*(_DWORD *)(v14 + 800);
  }
  else if ( (_DWORD)v2 == 6 )
  {
    ++*(_DWORD *)(v14 + 804);
  }
  if ( v26 )
  {
    *(_QWORD *)(v4 + 1144) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1112), 0, 0);
  }
  return result;
}
