/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040010 (DxgkDeviceIoctl.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00F42B0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0148A80 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0169FCC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215830 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0216F40 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D070 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z @ 0x1C00442A0 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C00443B8 (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00F438C (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00FB240 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
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
  __int64 v30; // rcx
  int v31; // ebx
  _QWORD *v32; // rbx
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGGLOBAL *v38; // rax
  DXGPROCESSVM *v39; // rbx
  struct DXGGLOBAL *v40; // rax
  __int64 v41; // rax
  struct _EPROCESS *v42; // rax
  _QWORD *v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rbp
  _QWORD *v46; // rax
  __int64 v47; // rbx
  struct _KTHREAD **v48; // [rsp+30h] [rbp-28h] BYREF
  char v49; // [rsp+38h] [rbp-20h]

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
  v49 = 0;
  v48 = (struct _KTHREAD **)((char *)Global + 208);
  if ( Global == (struct DXGGLOBAL *)-208LL )
  {
    v36 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v36 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v36);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v48[2] == CurrentThread )
  {
    v37 = WdLogNewEntry5_WdAssertion(CurrentThread, v16);
    *(_QWORD *)(v37 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v37);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v48);
  if ( a2 )
  {
    v39 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1E8uLL);
    if ( v39 )
    {
      v40 = DXGGLOBAL::GetGlobal(v21, v20);
      v26 = DXGPROCESSVM::DXGPROCESSVM(v39, v40, v13, a2, a3, a6);
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
        v38 = DXGGLOBAL::GetGlobal(v21, v20);
        DXGPROCESS::DXGPROCESS((DXGPROCESS *)v27, v38, v13);
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
    v41 = WdLogNewEntry5_WdLowResource(v21, v20, v23, v24);
    *(_QWORD *)(v41 + 24) = 232LL;
    WdLogEvent5_WdLowResource(v41);
    v31 = -1073741801;
    goto LABEL_23;
  }
  if ( a4 )
  {
    v42 = a5;
    if ( !a5 )
      v42 = v13;
    v27[56] = v42;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v27[7]);
  *((_BYTE *)v27 + 300) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0) | *((_BYTE *)v27 + 300) & 0xFE;
  v31 = DXGPROCESS::Initialize((DXGPROCESS *)v27);
  if ( v31 < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v27)(v27, 1LL);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)v27 + 297) )
  {
    v32 = v27 + 1;
    v33 = (char *)DXGGLOBAL::GetGlobal(v30, v29) + 248;
    v34 = *(_QWORD *)v33;
    if ( *(char **)(*(_QWORD *)v33 + 8LL) != v33 )
      goto LABEL_40;
    *v32 = v34;
    v27[2] = v33;
    *(_QWORD *)(v34 + 8) = v32;
    *(_QWORD *)v33 = v32;
  }
  if ( a2 )
  {
    v43 = v27 + 56;
    v44 = *(_QWORD *)(v27[54] + 432LL);
    v45 = v44 + 64;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v44 + 64));
    v46 = *(_QWORD **)(v44 + 32);
    v47 = v44 + 24;
    if ( *v46 == v47 )
    {
      *v43 = v47;
      v27[57] = v46;
      *v46 = v43;
      *(_QWORD *)(v47 + 8) = v43;
      *(_QWORD *)(v45 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v45, 0LL);
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
  v31 = 0;
LABEL_23:
  if ( v49 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v48);
  return (unsigned int)v31;
}
