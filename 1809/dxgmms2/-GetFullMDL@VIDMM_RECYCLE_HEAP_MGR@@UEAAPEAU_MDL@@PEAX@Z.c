/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C007C630
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C007C780 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  bool v3; // zf
  struct _KTHREAD **v4; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v11; // eax
  struct _MDL *result; // rax
  __int64 v13; // rdx
  struct _MDL *v14; // rdi
  struct _KTHREAD **v15; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  struct _KTHREAD **v30; // [rsp+20h] [rbp-18h] BYREF
  char v31; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328) == 0LL;
  v4 = (struct _KTHREAD **)((char *)this + 1328);
  v31 = 0;
  v30 = v4;
  if ( v3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v20 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v20);
    if ( v31 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
      v23[5] = &v30;
      v23[3] = 275LL;
      v23[4] = 4LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  v5 = v30;
  KeEnterCriticalRegion();
  if ( v5[1] == KeGetCurrentThread() )
  {
    v24 = *((_DWORD *)v5 + 6);
    if ( v24 <= 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v25 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v25);
      v24 = *((_DWORD *)v5 + 6);
    }
    v11 = v24 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *((_DWORD *)v5 + 7);
        if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v9, &EventBlockThread, v10, v19);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ExAcquirePushLockExclusiveEx(v5 + 2, 0LL);
    }
    if ( v5[1] )
    {
      v26 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v26 + 24) = 433LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v27 + 24) = 434LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v5[1] = KeGetCurrentThread();
    v11 = 1;
  }
  *((_DWORD *)v5 + 6) = v11;
  v31 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v14 = result;
  if ( v31 )
  {
    v15 = v30;
    v31 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v30[1] != CurrentThread )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v13);
      v28[3] = 275LL;
      v28[4] = 4LL;
      v28[5] = v15;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    v17 = *((_DWORD *)v15 + 6);
    if ( v17 <= 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(CurrentThread, v13);
      *(_QWORD *)(v29 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v29);
      v17 = *((_DWORD *)v15 + 6);
    }
    v18 = v17 - 1;
    *((_DWORD *)v15 + 6) = v18;
    if ( !v18 )
    {
      v15[1] = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    return v14;
  }
  return result;
}
