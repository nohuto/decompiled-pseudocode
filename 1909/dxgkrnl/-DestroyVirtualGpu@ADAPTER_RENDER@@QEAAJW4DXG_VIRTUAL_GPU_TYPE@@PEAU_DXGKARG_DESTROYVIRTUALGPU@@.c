/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C020E808
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C02101DC (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003C4F8 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r13
  struct DXGDEVICE *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  DXGVIRTUALGPUMANAGER *v39; // rcx
  struct DXGK_VIRTUAL_GPU *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _BYTE v44[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+40h] [rbp-C0h]
  _BYTE v47[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v48[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v49[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v50[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v51[88]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v52[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v53[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v54[72]; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v10 = Current;
  if ( Current && (*((_BYTE *)Current + 299) & 2) != 0 )
  {
    if ( !v4 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(v11 + 208));
      v13 = *(struct DXGDEVICE **)(v12 + 40);
      if ( v13 )
      {
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
          (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v48,
          v13);
        v45 = v11;
        v46 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, *(_QWORD *)(v12 + 40), 2, v14, 0);
        v15 = COREDEVICEACCESS::AcquireShared((__int64)v49, 0xFFFFFFFF, 0LL);
        v19 = (struct _KTHREAD **)v15;
        if ( v15 < 0 )
        {
          v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          *(_QWORD *)(v20 + 24) = *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v20 + 32) = v19;
          WdLogEvent5_WdWarning(v20);
LABEL_15:
          COREACCESS::~COREACCESS((COREACCESS *)v51);
          COREACCESS::~COREACCESS((COREACCESS *)v50);
          if ( v46 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v48);
          return (unsigned int)v19;
        }
        v21 = *(_QWORD *)(a1 + 1496);
        if ( !v21 )
        {
          v22 = WdLogNewEntry5_WdError(v17, 0LL, v18);
          *(_QWORD *)(v22 + 24) = 1381LL;
          WdLogEvent5_WdError(v22);
LABEL_14:
          LODWORD(v19) = -1073741811;
          goto LABEL_15;
        }
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v47,
          (struct _KTHREAD **)(v21 + 40));
        VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(*(DXGVIRTUALGPUMANAGER **)(a1 + 1496), *a3, v23);
        if ( !VirtualGpuByIndex )
        {
          v27 = WdLogNewEntry5_WdWarning(0LL, v25, v26);
          *(_QWORD *)(v27 + 24) = *a3;
          WdLogEvent5_WdWarning(v27);
LABEL_13:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
          goto LABEL_14;
        }
        if ( v10 != *((struct DXGPROCESS **)VirtualGpuByIndex + 10) )
        {
          v28 = WdLogNewEntry5_WdError(VirtualGpuByIndex, v25, v26);
          *(_QWORD *)(v28 + 24) = 1394LL;
          WdLogEvent5_WdError(v28);
          goto LABEL_13;
        }
        (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)VirtualGpuByIndex + 144LL))(VirtualGpuByIndex);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
        COREACCESS::~COREACCESS((COREACCESS *)v51);
        COREACCESS::~COREACCESS((COREACCESS *)v50);
        if ( v46 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v48);
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v31 = COREADAPTERACCESS::AcquireShared((__int64)v52, 0xFFFFFFFFLL, v30);
    v19 = (struct _KTHREAD **)v31;
    if ( v31 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = v19;
      WdLogEvent5_WdWarning(v35);
LABEL_40:
      COREACCESS::~COREACCESS((COREACCESS *)v54);
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      return (unsigned int)v19;
    }
    if ( v4 == 1 )
      v19 = *(struct _KTHREAD ***)(a1 + 1504);
    else
      v19 = *(struct _KTHREAD ***)(a1 + 1496);
    if ( !v19 )
    {
      v36 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v36 + 24) = 1413LL;
      WdLogEvent5_WdError(v36);
      LODWORD(v19) = -1073741811;
      goto LABEL_40;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v47, v19 + 5);
    v38 = *a3;
    if ( v4 == 1 )
      v39 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
    else
      v39 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
    if ( v39 && (v40 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v39, v38, v37), (v38 = (__int64)v40) != 0) )
    {
      if ( v10 == *((struct DXGPROCESS **)v40 + 10) )
      {
        LODWORD(v19) = (*((__int64 (__fastcall **)(struct _KTHREAD **, struct DXGK_VIRTUAL_GPU *))*v19 + 3))(v19, v40);
LABEL_39:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
        goto LABEL_40;
      }
      v41 = WdLogNewEntry5_WdError(v39, v40, v37);
      *(_QWORD *)(v41 + 24) = 1427LL;
      WdLogEvent5_WdError(v41);
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38, v37);
      *(_QWORD *)(v42 + 24) = *a3;
      WdLogEvent5_WdWarning(v42);
    }
    LODWORD(v19) = -1073741811;
    goto LABEL_39;
  }
  v43 = WdLogNewEntry5_WdError(v8, v7, v9);
  *(_QWORD *)(v43 + 24) = 1353LL;
  WdLogEvent5_WdError(v43);
  return 3221225485LL;
}
