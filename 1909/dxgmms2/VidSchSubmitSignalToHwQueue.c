/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C0037DA0
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0005420 (VidSchiSignalSyncObject.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008230 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009BC0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009C50 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000A240 (VidSchUnwaitFlipQueue.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C00318C4 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035768 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
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
  struct _VIDSCH_QUEUE_PACKET **v23; // rsi
  unsigned int v24; // edi
  struct _VIDSCH_QUEUE_PACKET *v25; // rax
  unsigned int v26; // r14d
  KSPIN_LOCK *v27; // rcx
  __int64 v28; // rdx
  struct _VIDSCH_QUEUE_PACKET **v29; // rdi
  __int64 v30; // r12
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  int v36; // ecx
  struct _VIDSCH_QUEUE_PACKET *v37; // rax
  unsigned int v38; // esi
  __int64 v39; // rax
  unsigned __int64 *v40; // r12
  char **v41; // r14
  char *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int v46; // r14d
  struct _VIDSCH_QUEUE_PACKET **v47; // r12
  unsigned int v48; // edi
  unsigned int v49; // r14d
  struct _VIDSCH_QUEUE_PACKET **v50; // rsi
  __int64 v51; // rbx
  __int64 i; // [rsp+38h] [rbp-89h]
  struct _VIDSCH_QUEUE_PACKET *v53; // [rsp+38h] [rbp-89h]
  __int64 v54; // [rsp+40h] [rbp-81h]
  _QWORD v55[2]; // [rsp+48h] [rbp-79h] BYREF
  char v56; // [rsp+58h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-61h] BYREF
  KSPIN_LOCK *v58; // [rsp+78h] [rbp-49h]
  struct _VIDSCH_QUEUE_PACKET **v59; // [rsp+80h] [rbp-41h]
  PVOID P; // [rsp+88h] [rbp-39h] BYREF
  char v61; // [rsp+90h] [rbp-31h] BYREF
  int v62; // [rsp+A0h] [rbp-21h]
  _QWORD v63[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v64; // [rsp+C8h] [rbp+7h]
  __int64 v67; // [rsp+120h] [rbp+5Fh]
  int v69; // [rsp+138h] [rbp+77h]
  unsigned int v70; // [rsp+138h] [rbp+77h]

  v7 = a5;
  v8 = a1;
  v9 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v54 = v10;
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
  v10 = v54;
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_27:
  P = 0LL;
  v62 = 0;
  v59 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
                                          &P,
                                          v8);
  v23 = v59;
  v24 = -1073741801;
  if ( !v59 )
    goto LABEL_75;
  v70 = 0;
  v25 = 0LL;
  v26 = 0;
  v53 = 0LL;
  if ( !a1 )
  {
LABEL_46:
    if ( v25 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v54 + 1648), &LockHandle);
      v46 = v70;
      v47 = v23;
      v48 = 0;
      do
      {
        if ( *v47 )
        {
          v49 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v48 == v70 )
            {
              do
                VidSchiSignalSyncObject(v49++, a4, v7, (__int64)a6, 1);
              while ( v49 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v49++, a4, v7, (__int64)a6, 0);
              while ( v49 < (unsigned int)v9 );
            }
          }
          v46 = v70;
        }
        ++v48;
        ++v47;
      }
      while ( v48 <= v46 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v50 = v59;
      v51 = v46 + 1;
      do
      {
        if ( *v50 )
          VidSchiSubmitCommandPacketToHwQueue(*v50);
        ++v50;
        --v51;
      }
      while ( v51 );
    }
    else
    {
      v64 = 0;
      v63[0] = v54 + 1648;
      AcquireSpinLock::Acquire((Acquire *)v63);
      v56 = 0;
      v55[1] = v55;
      v38 = 0;
      v55[0] = v55;
      if ( (_DWORD)v9 )
      {
        v39 = a4;
        v40 = a6;
        v41 = (char **)a4;
        do
        {
          v42 = *v41;
          VidSchiSignalSyncObject(v38, v39, v7, (__int64)a6, 1);
          VidSchiCompleteSignalSyncObject((__int64)v55, (__int64)v42, v43, v40, 1);
          VidSchiReleaseSyncObjectReference(v42);
          v39 = a4;
          ++v41;
          ++v38;
          ++v40;
        }
        while ( v38 < (unsigned int)v9 );
      }
      if ( *(_DWORD *)(v54 + 724) )
        VidSchUnwaitFlipQueue((__int64)v55, v54);
      if ( !v56 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v55);
      AcquireSpinLock::Release((AcquireSpinLock *)v63);
    }
    v24 = 0;
    goto LABEL_75;
  }
  v27 = (KSPIN_LOCK *)(v10 + 1648);
  v28 = a2 - (_QWORD)v59;
  v58 = (KSPIN_LOCK *)(v10 + 1648);
  v67 = a2 - (_QWORD)v59;
  v29 = v59;
  while ( 2 )
  {
    v30 = *(__int64 *)((char *)v29 + v28);
    KeAcquireInStackQueuedSpinLock(v27, &LockHandle);
    if ( *(_QWORD *)(v30 + 136) == v30 + 136 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v25 = v53;
      goto LABEL_45;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v30, 0LL);
    *v29 = HwQueuePacket;
    if ( HwQueuePacket )
    {
      *(_DWORD *)HwQueuePacket = 895576406;
      v70 = v26;
      *((_DWORD *)*v29 + 12) = 5;
      *((_QWORD *)*v29 + 7) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)*v29 + 13) = 2;
      *((_QWORD *)*v29 + 12) = v30;
      *((_QWORD *)*v29 + 13) = KeGetCurrentThread();
      *((_QWORD *)*v29 + 9) = 0LL;
      *((_DWORD *)*v29 + 68) ^= ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)*v29 + 68)) & 1;
      if ( (v7 & 4) != 0 )
        *((_DWORD *)*v29 + 68) |= 4u;
      if ( (_DWORD)v9 )
      {
        v34 = 536LL;
        v35 = v9;
        do
        {
          v36 = *(_DWORD *)(*(_QWORD *)(a4 + v34 - 536) + 44LL);
          if ( v36 == 4 || v36 == 2 )
            *(_QWORD *)((char *)*v29 + v34) = a6[(unsigned __int64)v34 / 8 - 67];
          *(_QWORD *)((char *)*v29 + v34 - 256) = *(_QWORD *)(a4 + v34 - 536);
          v34 += 8LL;
          --v35;
        }
        while ( v35 );
      }
      *((_DWORD *)*v29 + 69) = v9;
      *((_QWORD *)*v29 + 99) = 0LL;
      v37 = *v29;
      if ( v53 )
      {
        *((_QWORD *)v37 + 100) = v53;
        *((_QWORD *)v53 + 99) = *v29;
      }
      else
      {
        *((_QWORD *)v37 + 100) = 0LL;
      }
      v25 = *v29;
      v53 = *v29;
LABEL_45:
      v27 = v58;
      ++v26;
      v28 = v67;
      ++v29;
      if ( v26 >= a1 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v44 = WdLogNewEntry5_WdWarning(v33, v32);
  v24 = -1073741801;
  *(_QWORD *)(v44 + 24) = -1073741801LL;
  *(_QWORD *)(v44 + 32) = 4112LL;
  WdLogEvent5_WdWarning(v44);
  if ( v26 )
  {
    v45 = v26;
    do
    {
      if ( *v23 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v30, *v23);
      ++v23;
      --v45;
    }
    while ( v45 );
  }
LABEL_75:
  if ( P != &v61 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v24;
}
