/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C020F510
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x1C02105F4 (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003C398 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  DXGVIRTUALGPUMANAGER *v9; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  struct DXGK_VIRTUAL_GPU *v11; // rbx
  unsigned int v12; // ebx
  __int64 v14; // rax
  DXGPROCESS *v15; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v16[24]; // [rsp+28h] [rbp-51h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v18[64]; // [rsp+70h] [rbp-9h] BYREF

  v15 = 0LL;
  COREACCESS::COREACCESS((COREACCESS *)v18, *(struct DXGADAPTER *const *)(a1 + 16));
  COREACCESS::AcquireShared((__int64)v18, 0xFFFFFFFF, 0LL);
  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1504);
  else
    v6 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v16, (struct _KTHREAD **)(v6 + 40));
  v8 = *a3;
  if ( a2 == 1 )
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v9
    && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v9, v8, v7), (v11 = VirtualGpuByIndex) != 0LL) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)&ApcState,
      (struct _KTHREAD **)VirtualGpuByIndex + 7);
    v12 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, DXGPROCESS **, _QWORD))(*(_QWORD *)v11 + 16LL))(
            v11,
            &v15,
            0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&ApcState);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    if ( v15 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*((PRKPROCESS *)v15 + 7), &ApcState);
      DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v15 + 13));
      DXGPROCESS::Destroy(v15, 0LL, 1);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v15 + 13));
      KeUnstackDetachProcess(&ApcState);
    }
    return v12;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v7);
    *(_QWORD *)(v14 + 24) = *a3;
    WdLogEvent5_WdError(v14);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    return 3221225485LL;
  }
}
