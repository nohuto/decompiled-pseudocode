/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003C834 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C880 (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0101CA0 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C02183E0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025EC70 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C025EDC0 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGPROCESSVMWP **v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  struct _EPROCESS *v15; // r14
  struct DXGVIRTUALMACHINE *v16; // rbp
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ProcessDxgProcess; // rbx
  int DxgProcess; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  DXGPROCESS *v26; // rcx
  DXGPROCESS **Current; // rax
  int v28; // eax
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _EPROCESS *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  DXGVIRTUALMACHINE *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _BYTE v47[32]; // [rsp+40h] [rbp-48h] BYREF
  struct DXGPROCESS *v48; // [rsp+90h] [rbp+8h] BYREF
  struct _EPROCESS *v49; // [rsp+98h] [rbp+10h] BYREF

  v2 = (_QWORD *)((char *)this + 160);
  LODWORD(v7) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 20, a2->VmBusHandle, this);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v47, (struct _KTHREAD **)Global + 33);
    v12 = (DXGPROCESSVMWP **)((char *)this + 88);
    v13 = *((_QWORD *)this + 11);
    if ( v13 )
    {
      if ( !*(_BYTE *)(v13 + 456) )
      {
        v42 = WdLogNewEntry5_WdError(v10, v9, v11);
        *(_QWORD *)(v42 + 24) = 344LL;
        WdLogEvent5_WdError(v42);
        LODWORD(v7) = -1073741823;
        goto LABEL_40;
      }
      LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 12), a2->VmBusHandle, 1u);
      if ( (int)v7 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v44, v43, v45);
        *(_QWORD *)(v37 + 24) = 355LL;
        goto LABEL_37;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 12));
      goto LABEL_39;
    }
    if ( g_VgpuDisableVaBackedVm
      || (v14 = ((__int64 (__fastcall *)(_QWORD, struct _EPROCESS **))qword_1C00A3E88)(*v2, &v49), v15 = v49, v14 < 0) )
    {
      v15 = 0LL;
    }
    v16 = 0LL;
    if ( !v15 )
    {
      Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v10, v9);
      v48 = (struct DXGPROCESS *)Current;
      if ( !Current )
        goto LABEL_22;
      if ( (*((_BYTE *)Current + 299) & 4) == 0 )
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
        Current = 0LL;
        v48 = 0LL;
      }
      if ( !Current )
      {
LABEL_22:
        v28 = DXGPROCESS::CreateDxgProcess(&v48, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
        v7 = v28;
        if ( v28 < 0 )
        {
LABEL_16:
          v25 = WdLogNewEntry5_WdLowResource(v22, v18, v23, v24);
          *(_QWORD *)(v25 + 24) = v7;
          WdLogEvent5_WdLowResource(v25);
LABEL_40:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
          return (unsigned int)v7;
        }
        Current = (DXGPROCESS **)v48;
      }
      v29 = *((_BYTE *)Current + 299);
      if ( (v29 & 8) != 0 )
        v26 = Current[54];
      else
        v26 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v29 & 4) != 0));
      *v12 = v26;
      goto LABEL_28;
    }
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = ProcessDxgProcess;
      if ( (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
      {
        *v12 = (DXGPROCESSVMWP *)ProcessDxgProcess;
        v16 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 432);
        if ( v16 )
        {
          if ( *((_QWORD *)v16 + 23) )
            goto LABEL_14;
          *(_QWORD *)(ProcessDxgProcess + 432) = 0LL;
          *((_QWORD *)v16 + 7) = 0LL;
        }
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
        *v12 = 0LL;
      }
      else
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
      }
    }
LABEL_14:
    if ( !*v12 )
    {
      DxgProcess = DXGPROCESS::CreateDxgProcess(
                     (struct DXGPROCESS **)this + 11,
                     0LL,
                     0LL,
                     a2->VmBusHandle != 0LL,
                     v15,
                     0LL);
      v7 = DxgProcess;
      if ( DxgProcess < 0 )
        goto LABEL_16;
    }
    v26 = *v12;
LABEL_28:
    DXGPROCESS::AcquireReference(v26, v18);
    v32 = (struct _EPROCESS *)PsGetCurrentProcess(v31, v30);
    v33 = DXGPROCESSVMWP::InitializeVmwpProcess(
            *v12,
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 10),
            v32,
            v15,
            *((_BYTE *)this + 145),
            v16);
    v7 = v33;
    if ( v33 < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = v7;
LABEL_37:
      WdLogEvent5_WdError(v37);
      goto LABEL_40;
    }
    v38 = (DXGVIRTUALMACHINE *)*((_QWORD *)*v12 + 54);
    *((_QWORD *)this + 12) = v38;
    LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v38, a2->VmBusHandle, 1u);
    if ( (int)v7 < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v40, v39, v41);
      *(_QWORD *)(v37 + 24) = 330LL;
      goto LABEL_37;
    }
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
LABEL_39:
    *((_BYTE *)this + 146) = 0;
    goto LABEL_40;
  }
  return (unsigned int)v7;
}
