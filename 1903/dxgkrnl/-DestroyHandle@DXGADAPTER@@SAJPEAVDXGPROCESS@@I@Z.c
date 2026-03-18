/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00C4704 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD8B0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CE604 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1C01304B0 (DxgkCloseAdapterImpl.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021BC60 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0115DE0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C013092C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **this, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rbx
  bool v7; // zf
  struct _KTHREAD *v8; // r8
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  volatile signed __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  struct DXGADAPTER *v24; // rcx
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *v29; // r14
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE v38[8]; // [rsp+28h] [rbp-31h] BYREF
  char *v39; // [rsp+30h] [rbp-29h]
  int v40; // [rsp+38h] [rbp-21h]
  _BYTE v41[8]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v42; // [rsp+48h] [rbp-11h]
  struct DXGADAPTER *v43; // [rsp+50h] [rbp-9h]
  char v44; // [rsp+58h] [rbp-1h]
  int v45; // [rsp+5Ch] [rbp+3h]
  __int64 v46; // [rsp+60h] [rbp+7h]

  v2 = a2;
  if ( !this )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v27 + 24) = 3268LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v39 = (char *)(this + 23);
  if ( this != (struct _KTHREAD **)-184LL && this[24] == KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v28 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 23, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v26 = *((_DWORD *)this + 50);
      if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v5, v26);
    }
    ExAcquirePushLockExclusiveEx(this + 23, 0LL);
  }
  v6 = (v2 >> 6) & 0xFFFFFF;
  this[24] = KeGetCurrentThread();
  v7 = (*((_BYTE *)this + 299) & 8) == 0;
  v40 = 2;
  if ( !v7 )
  {
    v29 = this[54];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v29 + 184));
    if ( (unsigned int)v6 < *((_DWORD *)v29 + 56) )
    {
      v30 = *((_QWORD *)v29 + 26);
      v31 = *(_DWORD *)(v30 + 16 * v6 + 8);
      if ( ((v2 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v6 + 8) & 0x60) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
      {
        v32 = 2 * v6;
        v33 = v31 & 0x1F;
        if ( (_BYTE)v33 == 1 )
        {
          v12 = *(_QWORD *)(v30 + 8 * v32);
          goto LABEL_51;
        }
        v34 = WdLogNewEntry5_WdError((v2 >> 25) & 0x60, v33, v30);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v12 = 0LL;
LABEL_51:
    ExReleasePushLockSharedEx((char *)v29 + 184, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_16;
  }
  if ( (unsigned int)v6 < *((_DWORD *)this + 56) )
  {
    v8 = this[26];
    v9 = *((_DWORD *)v8 + 4 * (unsigned int)v6 + 2);
    if ( ((v2 >> 25) & 0x60) == (*((_BYTE *)v8 + 16 * (unsigned int)v6 + 8) & 0x60)
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      v10 = 2 * v6;
      v11 = v9 & 0x1F;
      if ( (_BYTE)v11 == 1 )
      {
        v12 = *((_QWORD *)v8 + v10);
        goto LABEL_16;
      }
      v13 = WdLogNewEntry5_WdError((v2 >> 25) & 0x60, v11, v8);
      *(_QWORD *)(v13 + 24) = 267LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v12 = 0LL;
LABEL_16:
  if ( v12 )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 26), v2);
    this[24] = 0LL;
    ExReleasePushLockExclusiveEx(this + 23, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v12 + 120, 0LL);
    v17 = *(_QWORD *)(v12 + 2560);
    if ( v17 )
    {
      if ( *(_DWORD *)(v12 + 208) == -1 )
      {
        v37 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v37 + 24) = 3298LL;
        WdLogEvent5_WdWarning(v37);
      }
      else
      {
        v18 = *(volatile signed __int64 **)(v17 + 16);
        v45 = -1;
        v46 = 0LL;
        v43 = (struct DXGADAPTER *)v18;
        v44 = 0;
        if ( v18 )
        {
          _InterlockedIncrement64(v18 + 3);
          v42 = -1LL;
        }
        while ( 1 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v17 + 56, 0LL);
          *(_QWORD *)(v17 + 64) = KeGetCurrentThread();
          v20 = *(unsigned int *)(*(_QWORD *)(v17 + 16) + 208LL);
          v21 = *((_QWORD *)this[6] + v20);
          if ( !v21 )
            break;
          v22 = *(_DWORD *)(v21 + 24);
          if ( !v22 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v20, v19);
            *(_QWORD *)(v35 + 24) = 2204LL;
            WdLogEvent5_WdAssertion(v35);
            v22 = *(_DWORD *)(v21 + 24);
          }
          v23 = v22 - 1;
          *(_DWORD *)(v21 + 24) = v23;
          if ( v23 )
            break;
          if ( v17 != *(_QWORD *)(v21 + 48) )
          {
            v36 = WdLogNewEntry5_WdAssertion(v20, v19);
            *(_QWORD *)(v36 + 24) = 2207LL;
            WdLogEvent5_WdAssertion(v36);
          }
          if ( !*(_BYTE *)(v21 + 77) || DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v17 + 16)) )
          {
            DXGPROCESS::DestroyAdapterInfo((DXGPROCESS *)this, (struct DXGPROCESS_ADAPTER_INFO *)v21);
            break;
          }
          ++*(_DWORD *)(v21 + 24);
          *(_QWORD *)(v17 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v17 + 56, 0LL);
          KeLeaveCriticalRegion();
          COREACCESS::AcquireShared((__int64)v41, 0xFFFFFFFF, 0LL);
        }
        *(_QWORD *)(v17 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v17 + 56, 0LL);
        KeLeaveCriticalRegion();
        v24 = v43;
        if ( v43 )
        {
          if ( v44 )
          {
            COREACCESS::Release((COREACCESS *)v41);
            v24 = v43;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v24);
        }
      }
    }
    ExReleasePushLockSharedEx(v12 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v12 + 16), (struct DXGADAPTER *)v12);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
    return 3221225485LL;
  }
}
