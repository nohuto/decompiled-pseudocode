/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C01E018C
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x1C01E128C (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C0035F78 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  DXGVIRTUALGPUMANAGER *v8; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  struct DXGK_VIRTUAL_GPU *v10; // rbx
  __int64 v11; // rax
  DXGPROCESS *v13; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v14[24]; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v17[40]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp+7h] BYREF

  v13 = 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15) < 0 )
  {
    v6 = -1073741130;
LABEL_14:
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    COREACCESS::~COREACCESS((COREACCESS *)v16);
    return v6;
  }
  if ( a2 == 1 )
    v7 = *(_QWORD *)(a1 + 1504);
  else
    v7 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (struct DXGPUSHLOCK *const)(v7 + 40));
  if ( a2 == 1 )
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( !v8
    || (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v8, *a3), (v10 = VirtualGpuByIndex) == 0LL) )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = *a3;
    WdLogEvent5_WdError(v11);
    v6 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    goto LABEL_14;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)&ApcState,
    (struct _KTHREAD **)VirtualGpuByIndex + 7);
  v6 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, DXGPROCESS **, _QWORD))(*(_QWORD *)v10 + 16LL))(
         v10,
         &v13,
         0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&ApcState);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  if ( v13 )
  {
    KeStackAttachProcess(*((PRKPROCESS *)v13 + 7), &ApcState);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v13 + 14));
    DXGPROCESS::Destroy(v13, 0LL, 1);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v13 + 14));
    KeUnstackDetachProcess(&ApcState);
  }
  return v6;
}
