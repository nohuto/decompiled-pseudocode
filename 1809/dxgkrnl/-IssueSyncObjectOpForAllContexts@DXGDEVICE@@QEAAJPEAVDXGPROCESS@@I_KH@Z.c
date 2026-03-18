/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C00B10C0 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C01FB3C8 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0214184 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  DXGCONTEXT *v5; // r12
  DXGDEVICE *v7; // rsi
  __int64 v8; // rbx
  DXGCONTEXT *v9; // r9
  unsigned int v10; // edi
  int v11; // r10d
  unsigned int v12; // r15d
  unsigned __int64 PoolWithTag; // rcx
  const unsigned int *v14; // rbx
  DXGCONTEXT *v15; // rdx
  unsigned int v16; // r8d
  int v17; // eax
  DXGCONTEXT *v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // zf
  DXGCONTEXT *v24; // rbx
  unsigned int v25; // esi
  unsigned int *v26; // rdx
  _DWORD *i; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rsi
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // [rsp+60h] [rbp-71h] BYREF
  struct DXGPROCESS *v38; // [rsp+68h] [rbp-69h]
  DXGDEVICE *v39; // [rsp+70h] [rbp-61h]
  unsigned __int64 v40; // [rsp+78h] [rbp-59h] BYREF
  unsigned int *v41; // [rsp+80h] [rbp-51h]
  PVOID P; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v43[16]; // [rsp+98h] [rbp-39h] BYREF
  unsigned int v44; // [rsp+D8h] [rbp+7h]

  v5 = (DXGDEVICE *)((char *)this + 360);
  v38 = a2;
  v7 = this;
  v39 = this;
  v40 = a4;
  LODWORD(v8) = -1073741823;
  if ( !a5 )
  {
    v19 = *(DXGCONTEXT **)v5;
    while ( v19 != v5 && v19 )
    {
      v20 = *((_DWORD *)v19 + 99);
      v37 = a3;
      if ( (v20 & 0x10) != 0 )
      {
        v33 = (_DWORD *)*((_QWORD *)v19 + 50);
        while ( v33 != (_DWORD *)((char *)v19 + 400) && v33 )
        {
          v34 = SubmitWaitForSyncObjectsFromGpu(1u, &v37, &v40, v33[6], a2, 0, 1);
          v8 = v34;
          if ( v34 < 0 )
          {
            v35 = WdLogNewEntry5_WdEvent();
            v7 = v39;
            *(_QWORD *)(v35 + 24) = v39;
            *(_QWORD *)(v35 + 32) = v8;
            WdLogEvent5_WdEvent(v35);
            goto LABEL_22;
          }
          v33 = *(_DWORD **)v33;
          a2 = v38;
        }
        v7 = v39;
      }
      else
      {
        v21 = WaitForSynchronizationObjectFromGpu(1u, &v37, 0LL, a4, *((_DWORD *)v19 + 6), a2, 0, 1, 0, 0);
        v8 = v21;
        if ( v21 < 0 )
        {
          v36 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v36 + 24) = v7;
          *(_QWORD *)(v36 + 32) = v8;
          WdLogEvent5_WdEvent(v36);
          return (unsigned int)v8;
        }
LABEL_22:
        a2 = v38;
      }
      v19 = *(DXGCONTEXT **)v19;
      a4 = v40;
    }
    return (unsigned int)v8;
  }
  v9 = *(DXGCONTEXT **)v5;
  v10 = 0;
  v37 = a3;
  v11 = 0;
  v12 = 0;
  while ( v9 != v5 && v9 )
  {
    if ( (*((_DWORD *)v9 + 99) & 0x10) != 0 )
      v12 += DXGCONTEXT::GetRenderHwQueueCount(v9);
    else
      ++v10;
    v9 = *(DXGCONTEXT **)v9;
  }
  v44 = 0;
  if ( !v11 )
  {
    PoolWithTag = 0LL;
    P = 0LL;
    if ( v10 > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 4 )
      {
        v14 = 0LL;
        goto LABEL_51;
      }
      PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 4LL * v10, 0x4B677844u);
      P = (PVOID)PoolWithTag;
    }
    else
    {
      PoolWithTag = (unsigned __int64)v43;
      P = v43;
    }
    v44 = v10;
    if ( PoolWithTag )
    {
      memset((void *)PoolWithTag, 0, 4LL * v10);
      PoolWithTag = (unsigned __int64)P;
    }
    v14 = (const unsigned int *)PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = *(DXGCONTEXT **)v5;
      v16 = 0;
      while ( v15 != v5 && v15 )
      {
        PoolWithTag = v16++;
        v14[PoolWithTag] = *((_DWORD *)v15 + 6);
        v15 = *(DXGCONTEXT **)v15;
      }
      if ( v10 != v16 )
      {
        v32 = WdLogNewEntry5_WdAssertion(PoolWithTag);
        *(_QWORD *)(v32 + 24) = 5827LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v17 = SignalSynchronizationObjectInternal(1u, &v37, 0, v10, v14, 0LL, v40, 0LL, v38, 0, 1);
      v8 = v17;
      if ( v17 >= 0 )
        goto LABEL_15;
      v31 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v31 + 24) = v7;
LABEL_58:
      *(_QWORD *)(v31 + 32) = v8;
      WdLogEvent5_WdEvent(v31);
LABEL_15:
      if ( P != v43 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)v8;
    }
LABEL_51:
    if ( v14 != v43 )
    {
      v23 = v14 == 0LL;
LABEL_53:
      if ( !v23 )
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      return 3221225495LL;
    }
    return 3221225495LL;
  }
  P = 0LL;
  v41 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
  if ( v41 )
  {
    v24 = *(DXGCONTEXT **)v5;
    v25 = 0;
    while ( v24 != v5 && v24 )
    {
      if ( (*((_DWORD *)v24 + 99) & 0x10) != 0 )
      {
        v26 = v41;
        for ( i = (_DWORD *)*((_QWORD *)v24 + 50); i != (_DWORD *)((char *)v24 + 400) && i; i = *(_DWORD **)i )
        {
          if ( v25 >= v12 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v28 + 24) = 5777LL;
            WdLogEvent5_WdAssertion(v28);
            v26 = v41;
          }
          v22 = v25++;
          v26[v22] = i[6];
        }
      }
      v24 = *(DXGCONTEXT **)v24;
    }
    if ( v12 != v25 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v29 + 24) = 5787LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = SubmitSignalSyncObjectsToHwQueue(1u, &v37, 0, v12, v41, &v40, v38, 0, 1);
    v8 = v30;
    if ( v30 >= 0 )
      goto LABEL_15;
    v31 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v31 + 24) = v39;
    goto LABEL_58;
  }
  PoolWithTag = (unsigned __int64)P;
  if ( P != v43 )
  {
    v23 = P == 0LL;
    goto LABEL_53;
  }
  return 3221225495LL;
}
