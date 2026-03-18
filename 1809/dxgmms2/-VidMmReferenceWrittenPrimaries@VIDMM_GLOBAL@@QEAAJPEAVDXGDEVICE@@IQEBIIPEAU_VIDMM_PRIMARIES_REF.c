/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0065320
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0001DE0 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0002D90 (VidSchWaitForSingleSyncObject.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0037910 (VidSchSubmitWaitToHwQueue.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6,
        struct VIDSCH_HW_QUEUE *a7,
        struct DXGCONTEXT **a8)
{
  unsigned int v8; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct DXGPROCESS *v14; // r14
  int v15; // ebp
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _VIDMM_PRIMARIES_REFERENCES *v19; // rsi
  unsigned int v20; // r12d
  const unsigned int *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _VIDSCH_SYNC_OBJECT *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  struct DXGCONTEXT **v37; // r15
  __int64 v38; // r14
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct _VIDSCH_SYNC_OBJECT *v46; // [rsp+20h] [rbp-68h]
  __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+28h] [rbp-60h]
  struct DXGPROCESS *v49; // [rsp+30h] [rbp-58h]
  bool v50; // [rsp+90h] [rbp+8h]

  v8 = a3;
  Current = DXGPROCESS::GetCurrent();
  v13 = 0LL;
  v14 = Current;
  v49 = Current;
  v15 = 0;
  v50 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 57LL) == 0;
  v16 = (char *)Current + 208;
  if ( Current != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)Current + 27) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v30 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)v16 + 4);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, (const GUID *)v18, v31);
    }
    ExAcquirePushLockSharedEx(v16, 0LL);
  }
  v19 = a6;
  v20 = 0;
  *(_DWORD *)a6 = 0;
  if ( !v8 )
    goto LABEL_6;
  v22 = a4;
  while ( 1 )
  {
    v23 = *v22;
    v24 = (*v22 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 >= *((_DWORD *)v14 + 62) )
      break;
    v25 = *((_QWORD *)v14 + 29);
    v18 = (unsigned int)v24;
    v23 = ((unsigned int)v23 >> 25) & 0x60;
    v17 = *(unsigned int *)(v25 + 16 * v24 + 8);
    if ( (_BYTE)v23 != (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
      break;
    v18 = 2LL * (unsigned int)v24;
    v26 = v17 & 0x1F;
    if ( (_BYTE)v26 != 5 )
    {
      v45 = WdLogNewEntry5_WdError(v26, v23, v18);
      *(_QWORD *)(v45 + 24) = 267LL;
      WdLogEvent5_WdError(v45);
      break;
    }
    v17 = *(_QWORD *)(v25 + 16LL * (unsigned int)v24);
    v47 = v17;
    if ( !v17 )
      break;
    if ( *(struct DXGDEVICE **)(v17 + 8) != a2 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v17, v23);
      *(_QWORD *)(v44 + 24) = *(_QWORD *)(v47 + 8);
      *(_QWORD *)(v44 + 32) = a2;
      WdLogEvent5_WdAssertion(v44);
      goto LABEL_47;
    }
    v18 = *(_QWORD *)(v17 + 24);
    v27 = **(_QWORD **)v18;
    v17 = **(unsigned int **)(v27 + 504);
    v28 = ((unsigned int)v17 >> 12) | ((unsigned int)v17 | (((unsigned int)v17 | (**(_DWORD **)(v27 + 504) >> 5)) >> 6)) & 0x80000;
    LOBYTE(v17) = (v17 & 0x100000) != 0;
    if ( (**(_DWORD **)(v27 + 504) & 0x200000) != 0 )
    {
      *((_DWORD *)v19 + 34) |= 1u;
      goto LABEL_24;
    }
    if ( (unsigned int)v28 < 0x80000 )
    {
      if ( !(_BYTE)v17 )
      {
        v32 = WdLogNewEntry5_WdError(v17, v28, v18);
        *(_QWORD *)(v32 + 24) = 21317LL;
        goto LABEL_46;
      }
LABEL_24:
      if ( (unsigned int)v28 < 0x80000 )
        goto LABEL_21;
    }
    if ( *(_BYTE *)(v27 + 96) )
    {
      v43 = WdLogNewEntry5_WdWarning(v17, v28);
      WdLogEvent5_WdWarning(v43);
      v15 = -1071775482;
      goto LABEL_48;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 104), a5);
    v17 = *(unsigned int *)v19;
    *((_QWORD *)v19 + v17 + 1) = v18;
    v29 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 >= 0x10u )
    {
      ++*((_DWORD *)this + 1804);
      v29 = *(_DWORD *)v19;
    }
    *(_DWORD *)v19 = v29 + 1;
    if ( !v50 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
      v34 = *(struct _VIDSCH_SYNC_OBJECT **)(v33 + 8);
      v17 = *(_QWORD *)(v33 + 24);
      v48 = v17;
      v46 = v34;
      if ( a7 )
      {
        v15 = VidSchSubmitWaitToHwQueue(a7, v34, v17);
        if ( v15 < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v17, v35);
          *(_QWORD *)(v36 + 24) = v46;
          *(_QWORD *)(v36 + 32) = v48;
          WdLogEvent5_WdAssertion(v36);
          v15 = 0;
        }
      }
      else if ( a5 )
      {
        v37 = a8;
        v38 = a5;
        v39 = (__int64)v34;
        v40 = v17;
        do
        {
          v15 = VidSchWaitForSingleSyncObject(*((_QWORD *)*v37 + 32), v39, v40);
          if ( v15 < 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v17, v41);
            *(_QWORD *)(v42 + 24) = v39;
            *(_QWORD *)(v42 + 32) = v40;
            WdLogEvent5_WdAssertion(v42);
            v15 = 0;
          }
          ++v37;
          --v38;
        }
        while ( v38 );
        v14 = v49;
        v19 = a6;
        v8 = a3;
        v16 = (char *)v49 + 208;
      }
    }
LABEL_21:
    ++v20;
    v22 = ++a4;
    if ( v20 >= v8 )
      goto LABEL_6;
  }
  v32 = WdLogNewEntry5_WdError(v17, v23, v18);
  *(_QWORD *)(v32 + 24) = 21285LL;
LABEL_46:
  WdLogEvent5_WdError(v32);
LABEL_47:
  v15 = -1073741811;
LABEL_48:
  if ( *(_DWORD *)v19 )
  {
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v19 + v13 + 1) + 104LL), -a5);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)v19 );
  }
LABEL_6:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
