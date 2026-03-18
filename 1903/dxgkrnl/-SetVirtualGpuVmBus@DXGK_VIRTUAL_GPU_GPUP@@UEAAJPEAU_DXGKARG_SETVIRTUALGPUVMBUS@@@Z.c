/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0216F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018950 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003C6D4 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C720 (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02143BC (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025E5E0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C025E730 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  DXGPROCESS **Current; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  char v17; // cl
  DXGPROCESS *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  DXGVIRTUALMACHINE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  const GUID *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  ULONG v36; // eax
  _BYTE v38[32]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGPROCESS *v39; // [rsp+70h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v38, (struct _KTHREAD **)Global + 33);
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    if ( !*(_BYTE *)(v8 + 456) )
    {
      v32 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v32 + 24) = 239LL;
      WdLogEvent5_WdError(v32);
      LODWORD(v15) = -1073741823;
      goto LABEL_24;
    }
    LODWORD(v15) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 12), 0LL, 0);
    if ( (int)v15 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v34, v33, v35);
      *(_QWORD *)(v26 + 24) = 250LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 12));
    goto LABEL_23;
  }
  Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v6, v5);
  v39 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    if ( (*((_BYTE *)Current + 299) & 4) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v39 = 0LL;
    }
    if ( Current )
    {
LABEL_9:
      v17 = *((_BYTE *)Current + 299);
      if ( (v17 & 8) != 0 )
        v18 = Current[54];
      else
        v18 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v17 & 4) != 0));
      *((_QWORD *)this + 11) = v18;
      DXGPROCESS::AcquireReference(v18, v10);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19);
      v22 = DXGPROCESSVMWP::InitializeVmwpProcess(
              *((DXGPROCESSVMWP **)this + 11),
              a2->VmBusHandle,
              *((struct DXGPROCESS **)this + 10),
              CurrentProcess,
              0LL,
              0,
              0LL);
      v15 = v22;
      if ( v22 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v24, v23, v25);
        *(_QWORD *)(v26 + 24) = v15;
LABEL_21:
        WdLogEvent5_WdError(v26);
        goto LABEL_24;
      }
      v27 = *(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 11) + 432LL);
      *((_QWORD *)this + 12) = v27;
      LODWORD(v15) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v27, 0LL, 0);
      if ( (int)v15 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v29, v28, v30);
        *(_QWORD *)(v26 + 24) = 225LL;
        goto LABEL_21;
      }
      DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
LABEL_23:
      v36 = *((_DWORD *)this + 6);
      *((_BYTE *)this + 146) = 0;
      a2->VirtualGpuIndex = v36;
      LODWORD(v15) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v31);
      goto LABEL_24;
    }
  }
  v11 = DXGPROCESS::CreateDxgProcess(&v39, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL, 0LL);
  v15 = v11;
  if ( v11 >= 0 )
  {
    Current = (DXGPROCESS **)v39;
    goto LABEL_9;
  }
  v16 = WdLogNewEntry5_WdLowResource(v12, v10, v13, v14);
  *(_QWORD *)(v16 + 24) = v15;
  WdLogEvent5_WdLowResource(v16);
LABEL_24:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return (unsigned int)v15;
}
