/*
 * XREFs of ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C52F0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0018F10 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DelayCreateCddAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  _QWORD *v24; // rax
  ADAPTER_DISPLAY *v25; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int CddAllocations; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8

  v7 = a3;
  if ( a3 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 1466LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v14 + 24) = 1467LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(this[2]) )
    return 3221225659LL;
  v15 = 3968 * v7;
  if ( *((_QWORD *)this[14] + 496 * v7 + 11) )
  {
    if ( !ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7) )
      return 3221225659LL;
  }
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v7)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v7) != 3 )
  {
    return 3221225659LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    if ( !a6 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v18 + 24) = 1488LL;
      WdLogEvent5_WdAssertion(v18);
    }
    COREDEVICEACCESS::Release(a6);
    v19 = COREDEVICEACCESS::AcquireExclusive((__int64)a6, 1LL);
    v23 = v19;
    if ( v19 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
      v24[3] = a2;
      v24[4] = v23;
LABEL_17:
      WdLogEvent5_WdError(v24);
      return (unsigned int)v23;
    }
  }
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 319);
  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, v7);
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(v25, a2, v7, DisplayModeInfo, a6);
  v23 = CddAllocations;
  if ( CddAllocations < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
    v24[3] = this[2];
    v24[4] = v7;
    v24[5] = v23;
    goto LABEL_17;
  }
  *a4 = *(_DWORD *)(*(_QWORD *)((char *)this[14] + v15 + 88) + 16LL);
  *a5 = *(_DWORD *)(*(_QWORD *)((char *)this[14] + v15 + 600) + 16LL);
  return 0LL;
}
