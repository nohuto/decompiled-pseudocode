/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924
 * Callers:
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00B3680 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD6C0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00EE850 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EC2D0 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rbx
  struct _KTHREAD *v7; // r8
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct ADAPTER_RENDER *v13; // rdx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  struct _KTHREAD *v18; // rsi
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-28h]

  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v16 + 24) = 3228LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v26 = (char *)(a1 + 26);
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)a1 + 56);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v5, v15);
    }
    ExAcquirePushLockExclusiveEx(a1 + 26, 0LL);
  }
  a1[27] = KeGetCurrentThread();
  v6 = (a2 >> 6) & 0xFFFFFF;
  v27 = 2;
  if ( (*((_BYTE *)a1 + 323) & 8) != 0 )
  {
    v18 = a1[57];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v18 + 208));
    if ( (unsigned int)v6 < *((_DWORD *)v18 + 62) )
    {
      v19 = *((_QWORD *)v18 + 29);
      v20 = *(_DWORD *)(v19 + 16 * v6 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v6 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        v21 = 2 * v6;
        if ( (v20 & 0x1F) == 1 )
        {
          v10 = *(_QWORD *)(v19 + 8 * v21);
          goto LABEL_33;
        }
        v22 = WdLogNewEntry5_WdError((a2 >> 25) & 0x60);
        *(_QWORD *)(v22 + 24) = 316LL;
        WdLogEvent5_WdError(v22);
      }
    }
    v10 = 0LL;
LABEL_33:
    ExReleasePushLockSharedEx((char *)v18 + 208, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_14;
  }
  if ( (unsigned int)v6 < *((_DWORD *)a1 + 62) )
  {
    v7 = a1[29];
    v8 = *((_DWORD *)v7 + 4 * (unsigned int)v6 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v7 + 16 * (unsigned int)v6 + 8) & 0x60)
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      v9 = 2 * v6;
      if ( (v8 & 0x1F) == 1 )
      {
        v10 = *((_QWORD *)v7 + v9);
        goto LABEL_14;
      }
      v23 = WdLogNewEntry5_WdError((a2 >> 25) & 0x60);
      *(_QWORD *)(v23 + 24) = 316LL;
      WdLogEvent5_WdError(v23);
    }
  }
  v10 = 0LL;
LABEL_14:
  if ( v10 )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 29), a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v10 + 120, 0LL);
    v13 = *(struct ADAPTER_RENDER **)(v10 + 2528);
    if ( v13 )
    {
      if ( *(_DWORD *)(v10 + 208) == -1 )
      {
        v24 = WdLogNewEntry5_WdWarning(v11, v13, v12);
        *(_QWORD *)(v24 + 24) = 3258LL;
        WdLogEvent5_WdWarning(v24);
      }
      else
      {
        DXGPROCESS::CloseAdapter((DXGPROCESS *)a1, v13);
      }
    }
    ExReleasePushLockSharedEx(v10 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v10 + 16), (struct DXGADAPTER *)v10);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    return 3221225485LL;
  }
}
