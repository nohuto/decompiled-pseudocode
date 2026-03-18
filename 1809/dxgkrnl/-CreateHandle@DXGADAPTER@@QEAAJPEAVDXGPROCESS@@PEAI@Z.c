/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00E2BA0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3710 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C012F428 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F0FB0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02298D8 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ebp
  struct ADAPTER_RENDER *v10; // rdx
  int v11; // esi
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 3166LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v13 = *((_DWORD *)a2 + 56);
        if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v6, &EventBlockThread, v7, v13);
      }
      ExAcquirePushLockExclusiveEx((char *)a2 + 208, 0LL);
    }
    *((_QWORD *)a2 + 27) = KeGetCurrentThread();
    v8 = HMGRTABLE::AllocHandle((char *)a2 + 232, this, 1LL, 0LL, 0);
    *((_QWORD *)a2 + 27) = 0LL;
    v9 = v8;
    ExReleasePushLockExclusiveEx((char *)a2 + 208, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v9 )
    {
      v10 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 316);
      if ( !v10 || (v11 = DXGPROCESS::OpenAdapter(a2, v10, (*((_BYTE *)a2 + 323) & 4) != 0), v11 >= 0) )
      {
        *a3 = v9;
        return 0LL;
      }
      DXGPROCESS::FreeResourceHandleNoRefSafe(a2, v9);
    }
    else
    {
      v11 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v11;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v15);
    return 3221226166LL;
  }
}
