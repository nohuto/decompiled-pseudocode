/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FAAFC
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC990 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00FB550 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01301C8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220C50 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C025E404 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E17E8 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r15
  _QWORD *v17; // rcx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  char v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h]

  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v20 + 24) = 3206LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 44) != 1 )
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v21);
    return 3221226166LL;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a2 + 50);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v6, &EventBlockThread, v7, v19);
    }
    ExAcquirePushLockExclusiveEx((char *)a2 + 184, 0LL);
  }
  *((_QWORD *)a2 + 24) = KeGetCurrentThread();
  v8 = HMGRTABLE::AllocHandle((char *)a2 + 208, this, 1LL);
  *((_QWORD *)a2 + 24) = 0LL;
  v9 = v8;
  ExReleasePushLockExclusiveEx((char *)a2 + 184, 0LL);
  KeLeaveCriticalRegion();
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 320);
    if ( !v10 )
    {
LABEL_18:
      *a3 = v9;
      return 0LL;
    }
    LODWORD(v11) = 0;
    v12 = v10 + 56;
    v28 = *((_BYTE *)a2 + 299) & 4;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 56, 0LL);
    *(_QWORD *)(v10 + 64) = KeGetCurrentThread();
    v29 = *(unsigned int *)(*(_QWORD *)(v10 + 16) + 208LL);
    v13 = *(_QWORD **)(*((_QWORD *)a2 + 6) + 8 * v29);
    if ( !v13 )
    {
      v13 = operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
      if ( v13 )
      {
        *v13 = 0LL;
        v13[7] = 0LL;
        v13[8] = 0LL;
        v13[9] = 0LL;
        v13[1] = 0LL;
        v13[2] = 0LL;
        v13[3] = 0LL;
        v13[4] = 0LL;
        v13[5] = 0LL;
        v13[6] = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
      {
        LODWORD(v11) = -1073741801;
LABEL_17:
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)v11 >= 0 )
          goto LABEL_18;
        DXGPROCESS::CloseAdapter(a2, (struct ADAPTER_RENDER *)v10);
        DXGPROCESS::FreeHandleSafe(a2, v9);
        goto LABEL_33;
      }
      v13[4] = a2;
      v16 = v13 + 7;
      v13[6] = v10;
      if ( *(struct _KTHREAD **)(v10 + 64) != KeGetCurrentThread() )
      {
        v22 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v22 + 24) = 4164LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v17 = *(_QWORD **)(v10 + 248);
      if ( *v17 != v10 + 240 )
        __fastfail(3u);
      *v16 = v10 + 240;
      v13[8] = v17;
      *v17 = v16;
      *(_QWORD *)(v10 + 248) = v16;
      v12 = v10 + 56;
      ++*(_DWORD *)(v10 + 256);
      *(_QWORD *)(*((_QWORD *)a2 + 6) + 8 * v29) = v13;
    }
    ++*((_DWORD *)v13 + 6);
    if ( v28 )
    {
      v23 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v13, a2, (struct ADAPTER_RENDER *)v10);
      v11 = v23;
      if ( v23 < 0 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = v11;
        WdLogEvent5_WdWarning(v27);
      }
    }
    goto LABEL_17;
  }
  LODWORD(v11) = -1073741801;
LABEL_33:
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  return (unsigned int)v11;
}
