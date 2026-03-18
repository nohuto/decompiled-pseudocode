/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C00034B0
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077280 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C0009DC0 (VidSchiUnwaitMonitoredFences.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0029DEC (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00339FC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  char *PoolWithTag; // rax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rbp
  PVOID v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  char v20; // cl
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // r14
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD v29[2]; // [rsp+20h] [rbp-68h] BYREF
  char v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int16 v33; // [rsp+58h] [rbp-30h]

  v8 = a1;
  v12 = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x38616956u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    v16 = v8;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 26) = 0;
    if ( (unsigned int)v8 > 4 )
    {
      v18 = 0xFFFFFFFFFFFFFFFFuLL % v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
        goto LABEL_32;
      v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v8, 0x38616956u);
    }
    else
    {
      v17 = PoolWithTag + 40;
    }
    v15[4] = v17;
    *((_DWORD *)v15 + 26) = v8;
    v18 = (unsigned __int64)v17;
    if ( v17 && (_DWORD)v8 )
    {
      memset(v17, 0, 16 * v8);
      v18 = v15[4];
    }
    if ( v18 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      v20 = (2 * a6) | a5 & 0xFD | v15[14] & 0xFC;
      v15[3] = a7;
      v21 = a8;
      if ( a8 )
      {
        v22 = v20 | 4;
      }
      else
      {
        v21 = a4;
        v22 = v20 & 0xFB;
      }
      *((_BYTE *)v15 + 112) = v22;
      v15[2] = v21;
      if ( (_DWORD)v8 )
      {
        v23 = a2 - a3;
        do
        {
          v24 = *(_QWORD *)(v23 + a3);
          a3 += 8LL;
          *(_QWORD *)v18 = v24;
          v18 += 16LL;
          *(_QWORD *)(v18 - 8) = *(_QWORD *)(a3 - 8);
          --v16;
        }
        while ( v16 );
      }
      v33 = 0;
      v31 = v19 + 1648;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 1648), &LockHandle);
      LOBYTE(v33) = 1;
      v29[1] = v29;
      v29[0] = v29;
      v30 = 0;
      v25 = *(_QWORD **)(v19 + 768);
      if ( *v25 != v19 + 760 )
LABEL_36:
        __fastfail(3u);
      v15[1] = v25;
      *v15 = v19 + 760;
      *v25 = v15;
      *(_QWORD *)(v19 + 768) = v15;
      VidSchiUnwaitMonitoredFences(v29, v19);
      if ( !v30 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)v29[0];
          if ( *(_QWORD **)(v29[0] + 8LL) != v29 )
            goto LABEL_36;
          v27 = *(_QWORD *)v29[0];
          if ( *(_QWORD *)(*(_QWORD *)v29[0] + 8LL) != v29[0] )
            goto LABEL_36;
          v29[0] = *(_QWORD *)v29[0];
          *(_QWORD *)(v27 + 8) = v29;
          if ( v26 == v29 )
            break;
          *v26 = 0LL;
          v26[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v29, (struct VIDSCH_HW_QUEUE *)(v26 - 19));
        }
        v30 = 1;
      }
      if ( (_BYTE)v33 )
      {
        if ( HIBYTE(v33) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return 0LL;
    }
LABEL_32:
    VIDSCH_CPU_WAITER::`scalar deleting destructor'(v15, v18);
    return 3221225495LL;
  }
  v13 = a2;
  while ( *(_DWORD *)(*(_QWORD *)v13 + 44LL) != 5 || !*(_BYTE *)(*(_QWORD *)v13 + 28LL) )
  {
    ++v12;
    v13 += 8LL;
    if ( v12 >= (unsigned int)v8 )
      goto LABEL_5;
  }
  return 3221225760LL;
}
