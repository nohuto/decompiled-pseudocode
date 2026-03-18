/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C00362D0 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003631C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E5064 (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0229C30 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0229D80 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  struct DXGPROCESS *Current; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // cl
  DXGPROCESS *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  DXGVIRTUALMACHINE *v20; // rcx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG v25; // eax
  _BYTE v27[32]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGPROCESS *v28; // [rsp+70h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)Global + 33);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    if ( !*(_BYTE *)(v6 + 480) )
    {
      v23 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v23 + 24) = 198LL;
      WdLogEvent5_WdError(v23);
      LODWORD(v10) = -1073741823;
      goto LABEL_24;
    }
    LODWORD(v10) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 12), 0LL, 0);
    if ( (int)v10 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v19 + 24) = 209LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 12));
    goto LABEL_23;
  }
  Current = DXGPROCESS::GetCurrent();
  v28 = Current;
  if ( Current )
  {
    if ( (*((_BYTE *)Current + 323) & 4) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess(Current);
      Current = 0LL;
      v28 = 0LL;
    }
    if ( Current )
    {
LABEL_9:
      v12 = *((_BYTE *)Current + 323);
      if ( (v12 & 8) != 0 )
        v13 = (DXGPROCESS *)*((_QWORD *)Current + 57);
      else
        v13 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v12 & 4) != 0));
      *((_QWORD *)this + 11) = v13;
      DXGPROCESS::AcquireReference(v13);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14);
      v17 = DXGPROCESSVMWP::InitializeVmwpProcess(
              *((DXGPROCESSVMWP **)this + 11),
              a2->VmBusHandle,
              *((struct DXGPROCESS **)this + 10),
              CurrentProcess,
              0LL,
              0,
              0LL);
      v10 = v17;
      if ( v17 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v19 + 24) = v10;
LABEL_21:
        WdLogEvent5_WdError(v19);
        goto LABEL_24;
      }
      v20 = *(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 11) + 456LL);
      *((_QWORD *)this + 12) = v20;
      LODWORD(v10) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v20, 0LL, 0);
      if ( (int)v10 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v19 + 24) = 184LL;
        goto LABEL_21;
      }
      DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
LABEL_23:
      v25 = *((_DWORD *)this + 6);
      *((_BYTE *)this + 146) = 0;
      a2->VirtualGpuIndex = v25;
      LODWORD(v10) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v22);
      goto LABEL_24;
    }
  }
  v8 = DXGPROCESS::CreateDxgProcess(&v28, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Current = v28;
    goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v11 + 24) = v10;
  WdLogEvent5_WdLowResource(v11);
LABEL_24:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  return (unsigned int)v10;
}
