/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0069610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00697E8 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007E170 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F510 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F530 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rdx
  VIDMM_PROCESS *v8; // rcx
  const GUID *v9; // r8
  int v10; // eax
  struct VIDMM_RECYCLE_RANGE *i; // rax
  VIDMM_RECYCLE_RANGE *j; // rbx
  struct _KTHREAD **v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  struct _KTHREAD **v27; // [rsp+20h] [rbp-58h] BYREF
  char v28; // [rsp+28h] [rbp-50h]
  struct _KAPC_STATE v29; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_PROCESS *v30; // [rsp+60h] [rbp-18h]

  v30 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v30, &v29);
  v28 = 0;
  v27 = (struct _KTHREAD **)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v17 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v17);
    if ( v28 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
      v20[5] = &v27;
      v20[3] = 275LL;
      v20[4] = 4LL;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
  }
  v6 = v27;
  KeEnterCriticalRegion();
  if ( v6[2] == KeGetCurrentThread() )
  {
    v21 = *((_DWORD *)v6 + 6);
    if ( v21 <= 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v22 + 24) = 559LL;
      WdLogEvent5_WdAssertion(v22);
      v21 = *((_DWORD *)v6 + 6);
    }
    v10 = v21 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v16 = *((_DWORD *)v6 + 7);
        if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((__int64)v8, (const EVENT_DESCRIPTOR *)"g", v9, v16);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 1);
      ExAcquirePushLockExclusiveEx(v6, 0LL);
    }
    if ( v6[2] )
    {
      v23 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v23 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( *((_DWORD *)v6 + 6) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v24 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v6[2] = KeGetCurrentThread();
    v10 = 1;
  }
  *((_DWORD *)v6 + 6) = v10;
  v28 = 1;
  if ( !dword_1C004E360 )
    goto LABEL_16;
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        *((_DWORD *)i + 20) != 3;
        i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      goto LABEL_13;
  }
  VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(a2);
LABEL_13:
  for ( j = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
  {
    VIDMM_RECYCLE_RANGE::AccessZeroTransition(j);
    if ( j == *((VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  if ( v28 )
  {
LABEL_16:
    v13 = v27;
    v28 = 0;
    if ( v27[2] != KeGetCurrentThread() )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v25[3] = 275LL;
      v25[4] = 4LL;
      v25[5] = v13;
      v25[6] = 0LL;
      v25[7] = 0LL;
      WdLogEvent5_WdCriticalError(v25);
    }
    v14 = *((_DWORD *)v13 + 6);
    if ( v14 <= 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v26 + 24) = 603LL;
      WdLogEvent5_WdAssertion(v26);
      v14 = *((_DWORD *)v13 + 6);
    }
    v15 = v14 - 1;
    *((_DWORD *)v13 + 6) = v15;
    if ( !v15 )
    {
      v13[2] = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  VIDMM_PROCESS::SafeDetach(v8, &v29);
}
