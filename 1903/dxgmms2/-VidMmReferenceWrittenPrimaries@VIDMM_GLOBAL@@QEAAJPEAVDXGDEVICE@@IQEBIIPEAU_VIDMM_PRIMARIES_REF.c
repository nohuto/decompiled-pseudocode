/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0073F30
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0002AF0 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0003E70 (VidSchWaitForSingleSyncObject.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0038350 (VidSchSubmitWaitToHwQueue.c)
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
  int v14; // esi
  struct DXGPROCESS *v15; // rbp
  char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _VIDMM_PRIMARIES_REFERENCES *v21; // r14
  unsigned int v22; // r12d
  const unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rcx
  struct _VIDSCH_SYNC_OBJECT *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct DXGCONTEXT **v37; // r15
  __int64 v38; // rbp
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  __int64 v41; // rcx
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
  v14 = 0;
  v49 = Current;
  v15 = Current;
  v50 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 57LL) == 0;
  v16 = (char *)Current + 184;
  if ( Current != (struct DXGPROCESS *)-184LL && *((struct _KTHREAD **)Current + 24) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v30 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)v16 + 4);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, (const EVENT_DESCRIPTOR *)"g", (const GUID *)v19, v31);
    }
    ExAcquirePushLockSharedEx(v16, 0LL);
  }
  v21 = a6;
  v22 = 0;
  *(_DWORD *)a6 = 0;
  if ( !v8 )
    goto LABEL_6;
  v24 = a4;
  while ( 1 )
  {
    v25 = *v24;
    v26 = (*v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 >= *((_DWORD *)v15 + 56) )
      goto LABEL_23;
    v20 = *((_QWORD *)v15 + 26);
    v19 = (unsigned int)v26;
    v25 = ((unsigned int)v25 >> 25) & 0x60;
    v17 = *(unsigned int *)(v20 + 16 * v26 + 8);
    if ( (_BYTE)v25 != (*(_BYTE *)(v20 + 16 * v26 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
      goto LABEL_23;
    v19 = 2LL * (unsigned int)v26;
    v17 &= 0x1Fu;
    if ( (_BYTE)v17 != 5 )
    {
      v45 = WdLogNewEntry5_WdError(v25, v17, v19, v20);
      *(_QWORD *)(v45 + 24) = 267LL;
      WdLogEvent5_WdError(v45);
LABEL_23:
      v29 = WdLogNewEntry5_WdError(v25, v17, v19, v20);
      *(_QWORD *)(v29 + 24) = 21493LL;
LABEL_24:
      WdLogEvent5_WdError(v29);
      goto LABEL_46;
    }
    v25 = *(_QWORD *)(v20 + 16LL * (unsigned int)v26);
    v47 = v25;
    if ( !v25 )
      goto LABEL_23;
    if ( *(struct DXGDEVICE **)(v25 + 8) != a2 )
      break;
    v19 = *(_QWORD *)(v25 + 24);
    v20 = **(_QWORD **)v19;
    v27 = **(unsigned int **)(v20 + 504);
    v17 = ((unsigned int)v27 >> 12) | ((unsigned int)v27 | (((unsigned int)v27 | (**(_DWORD **)(v20 + 504) >> 5)) >> 6)) & 0x80000;
    LOBYTE(v27) = (v27 & 0x100000) != 0;
    if ( (**(_DWORD **)(v20 + 504) & 0x200000) != 0 )
    {
      *((_DWORD *)v21 + 34) |= 1u;
      goto LABEL_26;
    }
    if ( (unsigned int)v17 < 0x80000 )
    {
      if ( !(_BYTE)v27 )
      {
        v29 = WdLogNewEntry5_WdError(v27, v17, v19, v20);
        *(_QWORD *)(v29 + 24) = 21525LL;
        goto LABEL_24;
      }
LABEL_26:
      if ( (unsigned int)v17 < 0x80000 )
        goto LABEL_21;
    }
    if ( *(_BYTE *)(v20 + 96) )
    {
      v43 = WdLogNewEntry5_WdWarning(v27, v17);
      WdLogEvent5_WdWarning(v43);
      v14 = -1071775482;
      goto LABEL_47;
    }
    v17 = a5;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 104), a5);
    *((_QWORD *)v21 + *(unsigned int *)v21 + 1) = v19;
    v28 = *(_DWORD *)v21;
    if ( *(_DWORD *)v21 >= 0x10u )
    {
      ++*((_DWORD *)this + 1804);
      v28 = *(_DWORD *)v21;
    }
    *(_DWORD *)v21 = v28 + 1;
    if ( !v50 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 24LL);
      v33 = *(struct _VIDSCH_SYNC_OBJECT **)(v32 + 8);
      v34 = *(_QWORD *)(v32 + 24);
      v48 = v34;
      v46 = v33;
      if ( a7 )
      {
        v14 = VidSchSubmitWaitToHwQueue(a7, v33, v34);
        if ( v14 < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v35, v17);
          *(_QWORD *)(v36 + 24) = v46;
          *(_QWORD *)(v36 + 32) = v48;
          WdLogEvent5_WdAssertion(v36);
          v14 = 0;
        }
      }
      else if ( a5 )
      {
        v37 = a8;
        v38 = a5;
        v39 = (__int64)v33;
        v40 = v34;
        do
        {
          v14 = VidSchWaitForSingleSyncObject(*((_QWORD *)*v37 + 34), v39, v40);
          if ( v14 < 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v41, v17);
            *(_QWORD *)(v42 + 24) = v39;
            *(_QWORD *)(v42 + 32) = v40;
            WdLogEvent5_WdAssertion(v42);
            v14 = 0;
          }
          ++v37;
          --v38;
        }
        while ( v38 );
        v15 = v49;
        v21 = a6;
        v8 = a3;
        v16 = (char *)v49 + 184;
      }
    }
LABEL_21:
    ++v22;
    v24 = ++a4;
    if ( v22 >= v8 )
      goto LABEL_6;
  }
  v44 = WdLogNewEntry5_WdAssertion(v25, v17);
  *(_QWORD *)(v44 + 24) = *(_QWORD *)(v47 + 8);
  *(_QWORD *)(v44 + 32) = a2;
  WdLogEvent5_WdAssertion(v44);
LABEL_46:
  v14 = -1073741811;
LABEL_47:
  if ( *(_DWORD *)v21 )
  {
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v21 + v13 + 1) + 104LL), -a5);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)v21 );
  }
LABEL_6:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
