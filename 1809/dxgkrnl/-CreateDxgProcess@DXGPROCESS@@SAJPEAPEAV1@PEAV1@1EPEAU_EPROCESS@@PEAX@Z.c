/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0039D70 (DxgkDeviceIoctl.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00E2530 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0137AD0 (-DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C01DEC14 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED780 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z @ 0x1C003D894 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C003D9AC (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00E0B54 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00E9958 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
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
  struct _EPROCESS *v11; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  struct DXGGLOBAL *v16; // rax
  DXGPROCESSVM *v17; // rax
  _QWORD *v18; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v20; // rcx
  int v21; // ebx
  _QWORD *v22; // rbx
  char *v23; // rax
  __int64 v24; // rcx
  struct DXGGLOBAL *v26; // rax
  DXGPROCESSVM *v27; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // rax
  struct _EPROCESS *v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rbp
  _QWORD *v34; // rax
  __int64 v35; // rbx
  _BYTE v36[40]; // [rsp+30h] [rbp-28h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v11 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v36);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  if ( a2 )
  {
    v27 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x200uLL);
    if ( v27 )
    {
      Global = DXGGLOBAL::GetGlobal(v14);
      v17 = DXGPROCESSVM::DXGPROCESSVM(v27, Global, v11, a2, a3, a6);
      goto LABEL_8;
    }
  }
  else
  {
    v13 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v11);
    if ( v13 )
    {
      *a1 = v13;
      goto LABEL_18;
    }
    if ( a4 )
    {
      v18 = DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1E8uLL);
      if ( v18 )
      {
        v26 = DXGGLOBAL::GetGlobal(v14);
        DXGPROCESS::DXGPROCESS((DXGPROCESS *)v18, v26, v11);
        v18[57] = 0LL;
        v18[58] = 0LL;
        v18[59] = 0LL;
        *((_BYTE *)v18 + 323) |= 4u;
        *v18 = &DXGPROCESSVMWP::`vftable';
        *((_BYTE *)v18 + 480) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1C8uLL, 0x50677844u);
      if ( PoolWithQuotaTag )
      {
        v16 = DXGGLOBAL::GetGlobal(v14);
        v17 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v16, v11);
LABEL_8:
        v18 = v17;
        goto LABEL_9;
      }
    }
  }
  v18 = 0LL;
LABEL_9:
  if ( !v18 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v29 + 24) = 241LL;
    WdLogEvent5_WdLowResource(v29);
    v21 = -1073741801;
    goto LABEL_19;
  }
  if ( a4 )
  {
    v30 = a5;
    if ( !a5 )
      v30 = v11;
    v18[59] = v30;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v18[7]);
  *((_BYTE *)v18 + 324) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0) | *((_BYTE *)v18 + 324) & 0xFE;
  v21 = DXGPROCESS::Initialize((DXGPROCESS *)v18);
  if ( v21 < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v18)(v18, 1LL);
    goto LABEL_19;
  }
  if ( !*((_BYTE *)v18 + 321) )
  {
    v22 = v18 + 1;
    v23 = (char *)DXGGLOBAL::GetGlobal(v20) + 248;
    v24 = *(_QWORD *)v23;
    if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
      goto LABEL_36;
    *v22 = v24;
    v18[2] = v23;
    *(_QWORD *)(v24 + 8) = v22;
    *(_QWORD *)v23 = v22;
  }
  if ( a2 )
  {
    v31 = v18 + 59;
    v32 = *(_QWORD *)(v18[57] + 456LL);
    v33 = v32 + 64;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v32 + 64));
    v34 = *(_QWORD **)(v32 + 32);
    v35 = v32 + 24;
    if ( *v34 == v35 )
    {
      *v31 = v35;
      v18[60] = v34;
      *v34 = v31;
      *(_QWORD *)(v35 + 8) = v31;
      *(_QWORD *)(v33 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v33, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
LABEL_36:
    __fastfail(3u);
  }
  PsSetProcessDxgProcess(v11, v18);
LABEL_17:
  *a1 = (struct DXGPROCESS *)v18;
LABEL_18:
  v21 = 0;
LABEL_19:
  if ( v36[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
  return (unsigned int)v21;
}
