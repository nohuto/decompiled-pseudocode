/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C00362D0 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003631C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C01E85FC (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0229C30 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0229D80 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  DXGPROCESSVMWP **v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  struct _EPROCESS *v12; // rbp
  struct DXGVIRTUALMACHINE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  int DxgProcess; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGPROCESS *v25; // rcx
  struct DXGPROCESS *Current; // rax
  int v27; // eax
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _EPROCESS *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  DXGVIRTUALMACHINE *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  _BYTE v40[32]; // [rsp+40h] [rbp-48h] BYREF
  struct DXGPROCESS *v41; // [rsp+90h] [rbp+8h] BYREF
  struct _EPROCESS *v42; // [rsp+98h] [rbp+10h] BYREF

  v2 = (_QWORD *)((char *)this + 160);
  LODWORD(v6) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 20, a2->VmBusHandle, this);
  if ( (int)v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v40, (struct _KTHREAD **)Global + 33);
    v9 = (DXGPROCESSVMWP **)((char *)this + 88);
    v10 = *((_QWORD *)this + 11);
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 480) )
      {
        v37 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v37 + 24) = 345LL;
        WdLogEvent5_WdError(v37);
        LODWORD(v6) = -1073741823;
        goto LABEL_39;
      }
      LODWORD(v6) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 12), a2->VmBusHandle, 1u);
      if ( (int)v6 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v38);
        *(_QWORD *)(v34 + 24) = 356LL;
        goto LABEL_36;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 12));
      goto LABEL_38;
    }
    if ( g_VgpuDisableVaBackedVm
      || (v11 = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS **))qword_1C008FE68)(*v2, &v42), v12 = v42, v11 < 0) )
    {
      v12 = 0LL;
    }
    v13 = 0LL;
    if ( !v12 )
    {
      Current = DXGPROCESS::GetCurrent();
      v41 = Current;
      if ( !Current )
        goto LABEL_21;
      if ( (*((_BYTE *)Current + 323) & 4) == 0 )
      {
        DXGPROCESS::DestroyDxgProcess(Current);
        Current = 0LL;
        v41 = 0LL;
      }
      if ( !Current )
      {
LABEL_21:
        v27 = DXGPROCESS::CreateDxgProcess(&v41, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
        v6 = v27;
        if ( v27 < 0 )
        {
LABEL_15:
          v24 = WdLogNewEntry5_WdLowResource(v23);
          *(_QWORD *)(v24 + 24) = v6;
          WdLogEvent5_WdLowResource(v24);
LABEL_39:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
          return (unsigned int)v6;
        }
        Current = v41;
      }
      v28 = *((_BYTE *)Current + 323);
      if ( (v28 & 8) != 0 )
        v25 = (DXGPROCESS *)*((_QWORD *)Current + 57);
      else
        v25 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v28 & 4) != 0));
      *v9 = v25;
      goto LABEL_27;
    }
    *v9 = (DXGPROCESSVMWP *)PsGetProcessDxgProcess(v12);
    CurrentProcess = PsGetCurrentProcess(v15, v14);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v20, v21) + 24) = ProcessDxgProcess;
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        if ( *v9 )
        {
LABEL_16:
          v25 = *v9;
LABEL_27:
          DXGPROCESS::AcquireReference(v25);
          v31 = (struct _EPROCESS *)PsGetCurrentProcess(v30, v29);
          v32 = DXGPROCESSVMWP::InitializeVmwpProcess(
                  *v9,
                  a2->VmBusHandle,
                  *((struct DXGPROCESS **)this + 10),
                  v31,
                  v12,
                  *((_BYTE *)this + 145),
                  v13);
          v6 = v32;
          if ( v32 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v34 + 24) = v6;
LABEL_36:
            WdLogEvent5_WdError(v34);
            goto LABEL_39;
          }
          v35 = (DXGVIRTUALMACHINE *)*((_QWORD *)*v9 + 57);
          *((_QWORD *)this + 12) = v35;
          LODWORD(v6) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v35, a2->VmBusHandle, 1u);
          if ( (int)v6 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v34 + 24) = 331LL;
            goto LABEL_36;
          }
          DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
LABEL_38:
          *((_BYTE *)this + 146) = 0;
          goto LABEL_39;
        }
        v13 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 456);
        if ( v13 )
        {
          *(_QWORD *)(ProcessDxgProcess + 456) = 0LL;
          *((_QWORD *)v13 + 7) = 0LL;
        }
      }
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
    }
    if ( !*v9 )
    {
      DxgProcess = DXGPROCESS::CreateDxgProcess(
                     (struct DXGPROCESS **)this + 11,
                     0LL,
                     0LL,
                     a2->VmBusHandle != 0LL,
                     v12,
                     0LL);
      v6 = DxgProcess;
      if ( DxgProcess < 0 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
  return (unsigned int)v6;
}
