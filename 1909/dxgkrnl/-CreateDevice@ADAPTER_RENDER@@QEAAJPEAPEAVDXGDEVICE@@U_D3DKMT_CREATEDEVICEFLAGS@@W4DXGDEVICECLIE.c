/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0CB8
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E032C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014DF20 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02023DC (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CC80 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C025EA94 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C000CB9C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00E08F4 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E0E2C (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E2010 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGPROCESS *Current; // rbp
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v31 + 24) = 1706LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 319)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v32 + 24) = 1709LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v33 + 24) = 1710LL;
    WdLogEvent5_WdAssertion(v33);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v34 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v34 + 24) = 1716LL;
    WdLogEvent5_WdAssertion(v34);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 24LL));
  v18 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x708uLL);
  if ( v18 )
    v23 = DXGDEVICE::DXGDEVICE((__int64)v18, a1, a8, a9, a3, (__int64)Current, a4, (__int64)a5);
  else
    v23 = 0LL;
  if ( !v23 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
    v26 = -1073741801;
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
LABEL_28:
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)(a1 + 16));
    return (unsigned int)v26;
  }
  v26 = DXGDEVICE::Initialize((DXGDEVICE *)v23, a6, a7);
  if ( v26 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v23, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v23);
    goto LABEL_28;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v23 + 328) == 2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v36 + 24) = 1776LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v28 = a1 + 136;
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 32) != CurrentThread )
    {
      v37 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v37 + 24) = 1781LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v28 = a1 + 120;
  }
  v29 = *(_QWORD *)v28;
  if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
    __fastfail(3u);
  *(_QWORD *)v23 = v29;
  *(_QWORD *)(v23 + 8) = v28;
  *(_QWORD *)(v29 + 8) = v23;
  *(_QWORD *)v28 = v23;
  DXGPROCESS::AddDevice(Current, (struct DXGDEVICE *)v23);
  *a2 = v23;
  return (unsigned int)v26;
}
