/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01F2DA0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C016EC30 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F1820 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202490 (DxgkGetSharedPrimaryHandle.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001620 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  _QWORD *v31; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+6Ch] [rbp-94h]
  _QWORD *v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  _QWORD v41[18]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 1559LL;
      WdLogEvent5_WdAssertion(v10);
    }
    COREDEVICEACCESS::Release(a4);
    v11 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1LL);
    v15 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v16[3] = *((_QWORD *)this + 2);
      v16[4] = v15;
LABEL_14:
      WdLogEvent5_WdError(v16);
      return (unsigned int)v15;
    }
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v15 = -1071775738LL;
LABEL_13:
    v16[3] = v5;
    v16[4] = *((_QWORD *)this + 2);
    v16[5] = v15;
    goto LABEL_14;
  }
  CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, (unsigned int)v5, 0);
  if ( CddPrimaryAllocation )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)a2 + 2), 1u);
    v21 = *((_QWORD *)CddPrimaryAllocation + 1);
    v31 = v33;
    v33[0] = *((_QWORD *)a2 + 23);
    v33[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v22 = *((_QWORD *)this + 2);
    v34 = 0LL;
    v23 = *(_QWORD **)(v22 + 2560);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, char *, _QWORD))(*(_QWORD *)(v23[68] + 8LL) + 216LL))(
      v23[69],
      v21,
      &v34,
      (char *)&v34 + 8,
      0LL);
    memset(v41, 0, sizeof(v41));
    LODWORD(v41[2]) = 3;
    v32 = v41;
    HIDWORD(v41[3]) = 1;
    v41[4] = &v31;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v41[7] + 4) = 0LL;
    HIDWORD(v41[8]) = CddDisplayMode->Width;
    LODWORD(CddDisplayMode) = CddDisplayMode->Height;
    v36 = 0LL;
    v40 = 0LL;
    LODWORD(v41[9]) = (_DWORD)CddDisplayMode;
    HIDWORD(v41[13]) = 1;
    v35 = v5;
    *(_OWORD *)((char *)&v41[11] + 4) = *(_OWORD *)((char *)&v41[7] + 4);
    v37 = 1;
    *(_OWORD *)((char *)&v41[9] + 4) = *(_OWORD *)((char *)&v41[7] + 4);
    v38 = &v32;
    v39 = 0LL;
    v25 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v23[65] + 8LL) + 824LL))(v23[66], &v35);
    v15 = v25;
    if ( v25 < 0
      || (v29 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, (unsigned int)v5, 1u, 32, 1u), v15 = v29, v29 < 0) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      goto LABEL_13;
    }
  }
  else
  {
    LODWORD(v15) = -1073741811;
  }
  return (unsigned int)v15;
}
