/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0101CA0
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040170 (DxgkDeviceIoctl.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C0102040 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C014C790 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C016DDBC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020E360 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215EA0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02175B0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D6E0 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z @ 0x1C0044400 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C0044518 (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00FFF10 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0101E78 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        char a4,
        struct _EPROCESS *a5,
        void *a6)
{
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _EPROCESS *v13; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGGLOBAL *v25; // rax
  DXGPROCESSVM *v26; // rax
  _QWORD *v27; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebx
  _QWORD *v33; // rbx
  char *v34; // rax
  __int64 v35; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGGLOBAL *v39; // rax
  DXGPROCESSVM *v40; // rbx
  struct DXGGLOBAL *v41; // rax
  __int64 v42; // rax
  struct _EPROCESS *v43; // rax
  _QWORD *v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rbp
  _QWORD *v47; // rax
  __int64 v48; // rbx
  struct _KTHREAD **v49; // [rsp+30h] [rbp-28h] BYREF
  char v50; // [rsp+38h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v13 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v12, v11);
  v50 = 0;
  v49 = (struct _KTHREAD **)((char *)Global + 208);
  if ( Global == (struct DXGGLOBAL *)-208LL )
  {
    v37 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v37 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v37);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v49[2] == CurrentThread )
  {
    v38 = WdLogNewEntry5_WdAssertion(CurrentThread, v16);
    *(_QWORD *)(v38 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v38);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v49);
  if ( a2 )
  {
    v40 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1E8uLL);
    if ( v40 )
    {
      v41 = DXGGLOBAL::GetGlobal(v21, v20);
      v26 = DXGPROCESSVM::DXGPROCESSVM(v40, v41, v13, a2, a3, a6);
      goto LABEL_12;
    }
  }
  else
  {
    v19 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v13);
    if ( v19 )
    {
      *a1 = v19;
      goto LABEL_22;
    }
    if ( a4 )
    {
      v27 = DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1D0uLL);
      if ( v27 )
      {
        v39 = DXGGLOBAL::GetGlobal(v21, v20);
        DXGPROCESS::DXGPROCESS((DXGPROCESS *)v27, v39, v13);
        v27[54] = 0LL;
        v27[55] = 0LL;
        v27[56] = 0LL;
        *((_BYTE *)v27 + 299) |= 4u;
        *v27 = &DXGPROCESSVMWP::`vftable';
        *((_BYTE *)v27 + 456) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1B0uLL, 0x50677844u);
      if ( PoolWithQuotaTag )
      {
        v25 = DXGGLOBAL::GetGlobal(v21, v20);
        v26 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v25, v13);
LABEL_12:
        v27 = v26;
        goto LABEL_13;
      }
    }
  }
  v27 = 0LL;
LABEL_13:
  if ( !v27 )
  {
    v42 = WdLogNewEntry5_WdLowResource(v21, v20, v23, v24);
    *(_QWORD *)(v42 + 24) = 232LL;
    WdLogEvent5_WdLowResource(v42);
    v32 = -1073741801;
    goto LABEL_23;
  }
  if ( a4 )
  {
    v43 = a5;
    if ( !a5 )
      v43 = v13;
    v27[56] = v43;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v27[7]);
  *((_BYTE *)v27 + 300) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0) | *((_BYTE *)v27 + 300) & 0xFE;
  v32 = DXGPROCESS::Initialize((DXGPROCESS *)v27, v29);
  if ( v32 < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v27)(v27, 1LL);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)v27 + 297) )
  {
    v33 = v27 + 1;
    v34 = (char *)DXGGLOBAL::GetGlobal(v31, v30) + 248;
    v35 = *(_QWORD *)v34;
    if ( *(char **)(*(_QWORD *)v34 + 8LL) != v34 )
      goto LABEL_40;
    *v33 = v35;
    v27[2] = v34;
    *(_QWORD *)(v35 + 8) = v33;
    *(_QWORD *)v34 = v33;
  }
  if ( a2 )
  {
    v44 = v27 + 56;
    v45 = *(_QWORD *)(v27[54] + 432LL);
    v46 = v45 + 64;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v45 + 64));
    v47 = *(_QWORD **)(v45 + 32);
    v48 = v45 + 24;
    if ( *v47 == v48 )
    {
      *v44 = v48;
      v27[57] = v47;
      *v47 = v44;
      *(_QWORD *)(v48 + 8) = v44;
      *(_QWORD *)(v46 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v46, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
LABEL_40:
    __fastfail(3u);
  }
  PsSetProcessDxgProcess(v13, v27);
LABEL_21:
  *a1 = (struct DXGPROCESS *)v27;
LABEL_22:
  v32 = 0;
LABEL_23:
  if ( v50 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v49);
  return (unsigned int)v32;
}
