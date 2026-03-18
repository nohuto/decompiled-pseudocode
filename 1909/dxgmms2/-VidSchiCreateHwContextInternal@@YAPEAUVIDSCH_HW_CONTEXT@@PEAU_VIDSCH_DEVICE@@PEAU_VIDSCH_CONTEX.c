/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0034CDC
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1C0091A2C (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x1C00CCC00 (VidSchCreateHwContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppp @ 0x1C00321B8 (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035898 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwContext @ 0x1C00384E0 (VidSchTerminateHwContext.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00CD440 (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r13
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // si
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  struct _VIDSCH_DEVICE **v19; // rdx
  struct _VIDSCH_DEVICE *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  const GUID *v35; // r8
  bool v36; // zf
  struct _VIDSCH_DEVICE *v37; // r9
  const GUID *v38; // r8
  _QWORD *v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // r8
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v47[10]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x150uLL, 0x63616956u);
  v10 = 0;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v12);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  *(_DWORD *)v11 = 1667328342;
  *((_QWORD *)v11 + 3) = a3;
  *((_QWORD *)v11 + 1) = a1;
  *(_OWORD *)(v11 + 56) = *(_OWORD *)a2;
  *((_QWORD *)v11 + 9) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v11 + 20) = *((_DWORD *)a2 + 6);
  v14 = *((unsigned int *)a2 + 1);
  v15 = *(_QWORD **)(v3 + 616);
  if ( (unsigned int)v14 < *(_DWORD *)(v3 + 688) )
    v15 += v14;
  *((_QWORD *)v11 + 2) = *v15;
  v16 = ((__int64 (*)(void))DxgCoreInterface[6])();
  v45 = *((_QWORD *)v11 + 2);
  v11[89] = (*(_BYTE *)(v16 + 299) & 8) != 0;
  memset(v11 + 264, 0, 0x38uLL);
  KeInitializeEvent((PRKEVENT)v11 + 11, SynchronizationEvent, 0);
  *((_QWORD *)v11 + 41) = v11 + 320;
  *((_QWORD *)v11 + 40) = v11 + 320;
  *((_QWORD *)v11 + 29) = v11 + 224;
  *((_QWORD *)v11 + 28) = v11 + 224;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v11);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1648), &LockHandle);
  v17 = v11 + 208;
  v18 = *(_QWORD **)(v45 + 1696);
  if ( *v18 != v45 + 1688
    || (*v17 = v45 + 1688,
        *((_QWORD *)v11 + 27) = v18,
        *v18 = v17,
        *(_QWORD *)(v45 + 1696) = v17,
        v19 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12),
        v20 = (struct _VIDSCH_DEVICE *)(v11 + 192),
        *v19 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v20 = (char *)a1 + 88;
  *((_QWORD *)v11 + 25) = v19;
  *v19 = v20;
  *((_QWORD *)a1 + 12) = v20;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *((_QWORD *)v11 + 6) = *((_QWORD *)a3 + 23);
    *((_QWORD *)v11 + 4) = *((_QWORD *)a3 + 60);
  }
  else
  {
    v21 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( v21 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
    }
    *((_QWORD *)v11 + 4) = v21;
    if ( !v21 )
      goto LABEL_40;
    v11[90] = 1;
    v21[1] = v11;
    memset(v47, 0, 0x48uLL);
    v22 = *((_QWORD *)v11 + 2);
    v23 = *(_QWORD *)(v3 + 616);
    v24 = *(_DWORD *)(v3 + 688);
    v47[0] = *((_QWORD *)v11 + 4);
    v25 = *(unsigned __int16 *)(v22 + 4);
    v26 = (unsigned int)v25 < v24;
    v27 = v23 + 8 * v25;
    if ( !v26 )
      v27 = v23;
    LODWORD(v47[1]) = *(unsigned __int16 *)(*(_QWORD *)v27 + 8LL);
    v28 = *(unsigned __int16 *)(v22 + 4);
    if ( (unsigned int)v28 < v24 )
      v23 += 8 * v28;
    v29 = *(_QWORD *)(v3 + 8);
    HIDWORD(v47[1]) = 1 << *(_BYTE *)(*(_QWORD *)v23 + 6LL);
    v30 = 352LL * *(unsigned __int16 *)(v45 + 6);
    LODWORD(v47[2]) = v47[2] & 0xFFFFFFF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2);
    v31 = *(_BYTE *)(v30 + *(_QWORD *)(*(_QWORD *)(v29 + 16) + 2440LL) + 40);
    v32 = *((_QWORD *)a1 + 2);
    LODWORD(v47[2]) ^= (LOBYTE(v47[2]) ^ (unsigned __int8)(4 * v31)) & 4;
    if ( ((int (__fastcall *)(__int64, __int64, _QWORD *))DxgCoreInterface[18])(v29, v32, v47) < 0 )
    {
LABEL_40:
      VidSchTerminateHwContext(v11);
      return 0LL;
    }
    v36 = bTracingEnabled == 0;
    *((_QWORD *)v11 + 6) = v47[0];
    if ( !v36 )
    {
      v37 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 1);
      if ( !v37 )
        v37 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_25;
      v38 = (const GUID *)((2 * ((*(_DWORD *)(*((_QWORD *)v11 + 1) + 48LL) >> 4) & 1)) | 1u);
      McTemplateK0pqqqqqqqqppp(
        v47[6],
        &EventCreateContext,
        v38,
        (__int64)v37,
        v47[1],
        SBYTE4(v47[1]),
        SBYTE4(v47[4]),
        v47[5],
        SBYTE4(v47[5]),
        v47[6],
        SBYTE4(v47[6]),
        (char)v38,
        v11);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp(v34, v33, v35, v11, v11, *((_QWORD *)v11 + 6), *((_QWORD *)v11 + 4));
  }
LABEL_25:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1648), &LockHandle);
  v39 = *(_QWORD **)(v45 + 1720);
  LOBYTE(v40) = 0;
  if ( v39 )
  {
    while ( 1 )
    {
      if ( *((_QWORD *)v11 + 4) >= *(v39 - 8) )
      {
        v41 = (_QWORD *)v39[1];
        if ( !v41 )
        {
          LOBYTE(v40) = 1;
          break;
        }
      }
      else
      {
        v41 = (_QWORD *)*v39;
        if ( !*v39 )
        {
          LOBYTE(v40) = 0;
          break;
        }
      }
      v39 = v41;
    }
  }
  RtlAvlInsertNodeEx(v45 + 1720, v39, v40, v11 + 96);
  v43 = *(_QWORD **)(v45 + 1728);
  if ( !v43 )
    goto LABEL_39;
  while ( *((_QWORD *)v11 + 6) < *(v43 - 9) )
  {
    v44 = (_QWORD *)*v43;
    if ( !*v43 )
      goto LABEL_39;
LABEL_37:
    v43 = v44;
  }
  v44 = (_QWORD *)v43[1];
  if ( v44 )
    goto LABEL_37;
  v10 = 1;
LABEL_39:
  LOBYTE(v42) = v10;
  RtlAvlInsertNodeEx(v45 + 1728, v43, v42, v11 + 120);
  v11[91] = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority(v11);
  return (struct VIDSCH_HW_CONTEXT *)v11;
}
