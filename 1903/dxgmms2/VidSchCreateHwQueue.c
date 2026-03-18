/*
 * XREFs of VidSchCreateHwQueue @ 0x1C00374F0
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00903D4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035768 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035898 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwQueue @ 0x1C0038600 (VidSchTerminateHwQueue.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  __int64 v7; // r14
  int v9; // edi
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // r15d
  SIZE_T v23; // r13
  struct _VIDSCH_QUEUE_PACKET *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _VIDSCH_QUEUE_PACKET *v27; // rsi
  const GUID *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+48h] [rbp-60h] BYREF
  int v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+54h] [rbp-54h]
  __int64 v36; // [rsp+58h] [rbp-50h]
  __int128 v37; // [rsp+60h] [rbp-48h]
  __int64 v38; // [rsp+70h] [rbp-38h]

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v9 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xF0uLL, 0x64616956u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0xF0uLL);
  *(_DWORD *)v13 = 1684105558;
  *((_QWORD *)v13 + 6) = a1;
  *((_QWORD *)v13 + 5) = a2;
  *((_QWORD *)v13 + 15) = KeGetCurrentThread();
  *((_QWORD *)v13 + 18) = v13 + 136;
  *((_QWORD *)v13 + 17) = v13 + 136;
  *((_QWORD *)v13 + 23) = v13 + 136;
  *((_QWORD *)v13 + 25) = v13 + 192;
  *((_QWORD *)v13 + 24) = v13 + 192;
  *((_QWORD *)v13 + 28) = v13 + 216;
  *((_QWORD *)v13 + 27) = v13 + 216;
  if ( _InterlockedIncrement((volatile signed __int32 *)v13 + 28) == 1 )
    VidSchiIncrementHwContextReference(*((struct VIDSCH_HW_CONTEXT **)v13 + 5));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1648), &LockHandle);
  v16 = *(_QWORD **)(a2 + 232);
  v17 = v13 + 8;
  if ( *v16 != a2 + 224 )
    __fastfail(3u);
  *v17 = a2 + 224;
  *((_QWORD *)v13 + 2) = v16;
  *v16 = v17;
  *(_QWORD *)(a2 + 232) = v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *((_QWORD *)v13 + 13) = *(_QWORD *)(a1 + 32);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    *((_QWORD *)v13 + 13) = 0LL;
LABEL_13:
    v21 = *(_DWORD *)(v7 + 140) * ((*(_DWORD *)(v7 + 64) << 6) + ((8 * *(_DWORD *)(v7 + 64) + 191) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v7 + 64) + 105);
    if ( v21 <= 0x410 )
      v21 = 1040;
    v22 = 0;
    v23 = v21;
    do
    {
      v24 = (struct _VIDSCH_QUEUE_PACKET *)ExAllocatePoolWithTag((POOL_TYPE)512, v23, 0x35616956u);
      v27 = v24;
      if ( !v24 )
      {
        v31 = WdLogNewEntry5_WdWarning(v26, v25);
        WdLogEvent5_WdWarning(v31);
        v9 = -1073741801;
        goto LABEL_27;
      }
      memset(v24, 0, v23);
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v7 + 1656),
        (__int64)(v13 + 216),
        (_QWORD *)v27 + 1,
        (_DWORD *)v13 + 58);
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v13, v27);
      ++v22;
    }
    while ( v22 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v29 = *((_QWORD *)v13 + 5);
      v30 = *(_QWORD *)(v29 + 24);
      if ( !v30 || (*(_DWORD *)(v29 + 56) & 0x40) != 0 )
        v30 = *((_QWORD *)v13 + 5);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp(v29, &EventCreateHwQueue, v28, v30, 0LL, v13);
    }
    *a4 = v13;
    return (unsigned int)v9;
  }
  v18 = *(_DWORD *)(a3 + 4);
  v19 = *(_QWORD *)(a2 + 48);
  v20 = *(_QWORD *)(v7 + 8);
  v33 = 0LL;
  v34 = v18;
  v36 = *(_QWORD *)(a3 + 16);
  v35 = *(_DWORD *)(a3 + 8);
  v38 = *(_QWORD *)(a3 + 40);
  v37 = 0LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[19])(v20, v19, &v33);
  if ( v9 >= 0 )
  {
    *((_QWORD *)v13 + 13) = v33;
    goto LABEL_13;
  }
LABEL_27:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v13);
  *a4 = 0LL;
  return (unsigned int)v9;
}
