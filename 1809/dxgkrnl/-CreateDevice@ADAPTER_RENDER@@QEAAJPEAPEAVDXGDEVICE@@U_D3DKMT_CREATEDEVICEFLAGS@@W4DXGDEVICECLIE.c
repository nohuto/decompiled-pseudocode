/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E7F78
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ECC90 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02298D8 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00315CC (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E7260 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00E8120 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE2D4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        __int64 *a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        char a6,
        unsigned __int8 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbp
  PVOID PoolWithQuotaTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // esi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v22; // rdi
  DXGADAPTER *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v28 + 24) = 1680LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 315)) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v29 + 24) = 1683LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v30 + 24) = 1684LL;
    WdLogEvent5_WdAssertion(v30);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v31 + 24) = 1690LL;
    WdLogEvent5_WdAssertion(v31);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x708uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v18 = DXGDEVICE::DXGDEVICE(PoolWithQuotaTag, a1, a8, a9, a3, Current, a4, a5);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v17);
    v20 = -1073741801;
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v32);
LABEL_30:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v20;
  }
  v20 = DXGDEVICE::Initialize((DXGDEVICE *)v18, a6, a7);
  if ( v20 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v18, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v18);
    goto LABEL_30;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v18 + 328) == 2 )
  {
    if ( a1[6] != CurrentThread )
    {
      v33 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v33 + 24) = 1750LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v22 = a1 + 17;
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      v34 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v34 + 24) = 1755LL;
      WdLogEvent5_WdAssertion(v34);
    }
    v22 = a1 + 15;
  }
  v23 = *v22;
  if ( *((DXGADAPTER ***)*v22 + 1) != v22
    || (*(_QWORD *)v18 = v23,
        v24 = (_QWORD *)((char *)Current + 272),
        *(_QWORD *)(v18 + 8) = v22,
        *((_QWORD *)v23 + 1) = v18,
        v25 = (_QWORD *)(v18 + 24),
        *v22 = (DXGADAPTER *)v18,
        v26 = *((_QWORD *)Current + 34),
        *(struct DXGPROCESS **)(v26 + 8) != (struct DXGPROCESS *)((char *)Current + 272)) )
  {
    __fastfail(3u);
  }
  *v25 = v26;
  *(_QWORD *)(v18 + 32) = v24;
  *(_QWORD *)(v26 + 8) = v25;
  *v24 = v25;
  *((_BYTE *)Current + 288) = 1;
  *a2 = v18;
  return (unsigned int)v20;
}
