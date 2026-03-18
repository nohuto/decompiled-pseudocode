/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C0037360
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C00045B0 (VidSchiSignalSyncObject.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C003108C (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034D64 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CA558 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  int v12; // r14d
  unsigned __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // r8
  struct _VIDSCH_QUEUE_PACKET **v24; // rsi
  unsigned int v25; // edi
  struct _VIDSCH_QUEUE_PACKET *v26; // rax
  unsigned int v27; // r14d
  KSPIN_LOCK *v28; // rcx
  __int64 v29; // rdx
  struct _VIDSCH_QUEUE_PACKET **v30; // rdi
  __int64 v31; // r12
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // ecx
  struct _VIDSCH_QUEUE_PACKET *v38; // rax
  unsigned int v39; // esi
  __int64 v40; // rax
  unsigned __int64 *v41; // r12
  char **v42; // r14
  char *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // r14d
  struct _VIDSCH_QUEUE_PACKET **v48; // r12
  unsigned int v49; // edi
  unsigned int v50; // r14d
  struct _VIDSCH_QUEUE_PACKET **v51; // rsi
  __int64 v52; // rbx
  __int64 i; // [rsp+38h] [rbp-89h]
  struct _VIDSCH_QUEUE_PACKET *v54; // [rsp+38h] [rbp-89h]
  __int64 v55; // [rsp+40h] [rbp-81h]
  _QWORD v56[2]; // [rsp+48h] [rbp-79h] BYREF
  char v57; // [rsp+58h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-61h] BYREF
  KSPIN_LOCK *v59; // [rsp+78h] [rbp-49h]
  struct _VIDSCH_QUEUE_PACKET **v60; // [rsp+80h] [rbp-41h]
  PVOID P; // [rsp+88h] [rbp-39h] BYREF
  char v62; // [rsp+90h] [rbp-31h] BYREF
  int v63; // [rsp+A0h] [rbp-21h]
  _BYTE v64[96]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v67; // [rsp+120h] [rbp+5Fh]
  int v69; // [rsp+138h] [rbp+77h]
  unsigned int v70; // [rsp+138h] [rbp+77h]

  v7 = a5;
  v8 = a1;
  v9 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v55 = v10;
  if ( (a5 & 0x80000004) != 0 )
    goto LABEL_27;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 1648), &LockHandle);
  v12 = 0;
  v69 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_25;
  v13 = a6;
  v14 = a4 - (_QWORD)a6;
  for ( i = a4 - (_QWORD)a6; ; v14 = i )
  {
    v15 = *(unsigned __int64 *)((char *)v13 + v14);
    v16 = *(unsigned int *)(v15 + 44);
    if ( (unsigned int)(v16 - 4) > 1 || *(_BYTE *)(v15 + 28) )
      goto LABEL_19;
    v17 = *v13;
    LOBYTE(v11) = *(_BYTE *)(v15 + 29);
    if ( *(_BYTE *)(v15 + 27) )
      v18 = *(_QWORD *)(*(_QWORD *)(v15 + 208) + 40LL);
    else
      v18 = (_DWORD)v16 == 2 ? *(_QWORD *)(v15 + 64) : *(_QWORD *)(v15 + 88);
    if ( !(_BYTE)v11 )
      break;
    if ( v17 < v18 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v11);
      *(_QWORD *)(v20 + 24) = v17;
      *(_QWORD *)(v20 + 32) = v18;
      goto LABEL_23;
    }
    if ( v17 == v18 )
    {
      v19 = WdLogNewEntry5_WdWarning(v16, v11);
      *(_QWORD *)(v19 + 24) = v17;
LABEL_18:
      WdLogEvent5_WdWarning(v19);
    }
LABEL_19:
    ++v13;
    if ( ++v69 >= (unsigned int)v9 )
      goto LABEL_24;
  }
  if ( (int)v18 - (int)v17 <= 0 )
  {
    if ( (_DWORD)v18 != (_DWORD)v17 )
      goto LABEL_19;
    v19 = WdLogNewEntry5_WdWarning(v16, v11);
    *(_QWORD *)(v19 + 24) = (unsigned int)v17;
    goto LABEL_18;
  }
  v20 = WdLogNewEntry5_WdWarning(v16, v11);
  *(_QWORD *)(v20 + 24) = (unsigned int)v17;
  *(_QWORD *)(v20 + 32) = (unsigned int)v18;
LABEL_23:
  WdLogEvent5_WdWarning(v20);
  v12 = -1073741811;
  v21 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v21 + 24) = a6[v69];
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v21);
LABEL_24:
  v8 = a1;
  v10 = v55;
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_27:
  P = 0LL;
  v63 = 0;
  v60 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
                                          &P,
                                          v8);
  v24 = v60;
  v25 = -1073741801;
  if ( !v60 )
    goto LABEL_75;
  v70 = 0;
  v26 = 0LL;
  v27 = 0;
  v54 = 0LL;
  if ( !a1 )
  {
LABEL_46:
    if ( v26 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 1648), &LockHandle);
      v47 = v70;
      v48 = v24;
      v49 = 0;
      do
      {
        if ( *v48 )
        {
          v50 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v49 == v70 )
            {
              do
                VidSchiSignalSyncObject(v50++, a4, v7, (__int64)a6, 1);
              while ( v50 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v50++, a4, v7, (__int64)a6, 0);
              while ( v50 < (unsigned int)v9 );
            }
          }
          v47 = v70;
        }
        ++v49;
        ++v48;
      }
      while ( v49 <= v47 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v51 = v60;
      v52 = v47 + 1;
      do
      {
        if ( *v51 )
          VidSchiSubmitCommandPacketToHwQueue(*v51);
        ++v51;
        --v52;
      }
      while ( v52 );
    }
    else
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v64, (unsigned __int64 *)(v55 + 1648), v23, 0);
      v57 = 0;
      v56[1] = v56;
      v39 = 0;
      v56[0] = v56;
      if ( (_DWORD)v9 )
      {
        v40 = a4;
        v41 = a6;
        v42 = (char **)a4;
        do
        {
          v43 = *v42;
          VidSchiSignalSyncObject(v39, v40, v7, (__int64)a6, 1);
          VidSchiCompleteSignalSyncObject((__int64)v56, (__int64)v43, v44, v41, 1);
          VidSchiReleaseSyncObjectReference(v43);
          v40 = a4;
          ++v42;
          ++v39;
          ++v41;
        }
        while ( v39 < (unsigned int)v9 );
      }
      if ( *(_DWORD *)(v55 + 724) )
        VidSchUnwaitFlipQueue((__int64)v56, v55);
      if ( !v57 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v56);
      AcquireSpinLock::Release((AcquireSpinLock *)v64);
    }
    v25 = 0;
    goto LABEL_75;
  }
  v28 = (KSPIN_LOCK *)(v10 + 1648);
  v29 = a2 - (_QWORD)v60;
  v59 = (KSPIN_LOCK *)(v10 + 1648);
  v67 = a2 - (_QWORD)v60;
  v30 = v60;
  while ( 2 )
  {
    v31 = *(__int64 *)((char *)v30 + v29);
    KeAcquireInStackQueuedSpinLock(v28, &LockHandle);
    if ( *(_QWORD *)(v31 + 136) == v31 + 136 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v26 = v54;
      goto LABEL_45;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v31, 0LL);
    *v30 = HwQueuePacket;
    if ( HwQueuePacket )
    {
      *(_DWORD *)HwQueuePacket = 895576406;
      v70 = v27;
      *((_DWORD *)*v30 + 12) = 5;
      *((_QWORD *)*v30 + 7) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)*v30 + 13) = 2;
      *((_QWORD *)*v30 + 12) = v31;
      *((_QWORD *)*v30 + 13) = KeGetCurrentThread();
      *((_QWORD *)*v30 + 9) = 0LL;
      *((_DWORD *)*v30 + 68) ^= ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)*v30 + 68)) & 1;
      if ( (v7 & 4) != 0 )
        *((_DWORD *)*v30 + 68) |= 4u;
      if ( (_DWORD)v9 )
      {
        v23 = a4;
        v35 = 536LL;
        v36 = v9;
        do
        {
          v37 = *(_DWORD *)(*(_QWORD *)(a4 + v35 - 536) + 44LL);
          if ( v37 == 4 || v37 == 2 )
            *(_QWORD *)((char *)*v30 + v35) = a6[(unsigned __int64)v35 / 8 - 67];
          *(_QWORD *)((char *)*v30 + v35 - 256) = *(_QWORD *)(a4 + v35 - 536);
          v35 += 8LL;
          --v36;
        }
        while ( v36 );
      }
      *((_DWORD *)*v30 + 69) = v9;
      *((_QWORD *)*v30 + 99) = 0LL;
      v38 = *v30;
      if ( v54 )
      {
        *((_QWORD *)v38 + 100) = v54;
        *((_QWORD *)v54 + 99) = *v30;
      }
      else
      {
        *((_QWORD *)v38 + 100) = 0LL;
      }
      v26 = *v30;
      v54 = *v30;
LABEL_45:
      v28 = v59;
      ++v27;
      v29 = v67;
      ++v30;
      if ( v27 >= a1 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v45 = WdLogNewEntry5_WdWarning(v34, v33);
  v25 = -1073741801;
  *(_QWORD *)(v45 + 24) = -1073741801LL;
  *(_QWORD *)(v45 + 32) = 4124LL;
  WdLogEvent5_WdWarning(v45);
  if ( v27 )
  {
    v46 = v27;
    do
    {
      if ( *v24 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v31, *v24);
      ++v24;
      --v46;
    }
    while ( v46 );
  }
LABEL_75:
  if ( P != &v62 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v25;
}
