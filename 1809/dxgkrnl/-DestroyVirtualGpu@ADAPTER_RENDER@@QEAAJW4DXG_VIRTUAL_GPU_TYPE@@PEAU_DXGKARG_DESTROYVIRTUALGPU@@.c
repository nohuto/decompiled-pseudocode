/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C01DEE60
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C01E07FC (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C0035F78 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, int a2, unsigned int *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r13
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _KTHREAD **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  struct DXGK_VIRTUAL_GPU *v34; // rdx
  DXGVIRTUALGPUMANAGER *v35; // rcx
  struct DXGK_VIRTUAL_GPU *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD v40[2]; // [rsp+38h] [rbp-D0h] BYREF
  char v41; // [rsp+48h] [rbp-C0h]
  _BYTE v42[24]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v43[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v44[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v46[56]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v47[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v48[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v49[40]; // [rsp+100h] [rbp-8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( Current && (*((_BYTE *)Current + 323) & 2) != 0 )
  {
    if ( !a2 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(v9 + 208));
      v11 = *(struct DXGDEVICE **)(v10 + 40);
      if ( v11 )
      {
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
          (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
          v11);
        v40[1] = v9;
        v41 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, *(_QWORD *)(v10 + 40), 2, v12, 0);
        v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
        v17 = (struct _KTHREAD **)v13;
        if ( v13 < 0 )
        {
          v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
          *(_QWORD *)(v18 + 24) = *(_QWORD *)(v10 + 40);
          *(_QWORD *)(v18 + 32) = v17;
          WdLogEvent5_WdWarning(v18);
LABEL_15:
          COREACCESS::~COREACCESS((COREACCESS *)v46);
          COREACCESS::~COREACCESS((COREACCESS *)v45);
          if ( v41 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
          return (unsigned int)v17;
        }
        v19 = *(_QWORD *)(a1 + 1496);
        if ( !v19 )
        {
          v20 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v20 + 24) = 1271LL;
          WdLogEvent5_WdError(v20);
LABEL_14:
          LODWORD(v17) = -1073741811;
          goto LABEL_15;
        }
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v42,
          (struct _KTHREAD **)(v19 + 40));
        VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(*(DXGVIRTUALGPUMANAGER **)(a1 + 1496), *a3);
        if ( !VirtualGpuByIndex )
        {
          v24 = WdLogNewEntry5_WdWarning(0LL, v22, v23);
          *(_QWORD *)(v24 + 24) = *a3;
          WdLogEvent5_WdWarning(v24);
LABEL_13:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
          goto LABEL_14;
        }
        if ( v8 != *((struct DXGPROCESS **)VirtualGpuByIndex + 10) )
        {
          v25 = WdLogNewEntry5_WdError(VirtualGpuByIndex);
          *(_QWORD *)(v25 + 24) = 1284LL;
          WdLogEvent5_WdError(v25);
          goto LABEL_13;
        }
        (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)VirtualGpuByIndex + 144LL))(VirtualGpuByIndex);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        if ( v41 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
    v17 = (struct _KTHREAD **)v27;
    if ( v27 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = v17;
      WdLogEvent5_WdWarning(v31);
LABEL_40:
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      return (unsigned int)v17;
    }
    if ( a2 == 1 )
      v17 = *(struct _KTHREAD ***)(a1 + 1504);
    else
      v17 = *(struct _KTHREAD ***)(a1 + 1496);
    if ( !v17 )
    {
      v32 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v32 + 24) = 1303LL;
      WdLogEvent5_WdError(v32);
      LODWORD(v17) = -1073741811;
      goto LABEL_40;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v42, v17 + 5);
    v34 = (struct DXGK_VIRTUAL_GPU *)*a3;
    if ( a2 == 1 )
      v35 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
    else
      v35 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
    if ( v35 && (v36 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v35, (unsigned int)v34), (v34 = v36) != 0LL) )
    {
      if ( v8 == *((struct DXGPROCESS **)v36 + 10) )
      {
        LODWORD(v17) = (*((__int64 (__fastcall **)(struct _KTHREAD **, struct DXGK_VIRTUAL_GPU *))*v17 + 3))(v17, v36);
LABEL_39:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
        goto LABEL_40;
      }
      v37 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v37 + 24) = 1317LL;
      WdLogEvent5_WdError(v37);
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v33);
      *(_QWORD *)(v38 + 24) = *a3;
      WdLogEvent5_WdWarning(v38);
    }
    LODWORD(v17) = -1073741811;
    goto LABEL_39;
  }
  v39 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v39 + 24) = 1243LL;
  WdLogEvent5_WdError(v39);
  return 3221225485LL;
}
