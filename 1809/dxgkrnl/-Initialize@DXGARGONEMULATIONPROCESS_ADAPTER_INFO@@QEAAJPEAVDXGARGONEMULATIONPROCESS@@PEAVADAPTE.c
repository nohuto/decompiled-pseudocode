/*
 * XREFs of ?Initialize@DXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGARGONEMULATIONPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C02299F8
 * Callers:
 *     ?OpenAdapter@DXGARGONEMULATIONPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C0229FD4 (-OpenAdapter@DXGARGONEMULATIONPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C00F03A0 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00F1DDC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C00F7B6C (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C00F8E18 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C01D0494 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 */

__int64 __fastcall DXGARGONEMULATIONPROCESS_ADAPTER_INFO::Initialize(
        DXGARGONEMULATIONPROCESS_ADAPTER_INFO *this,
        struct DXGARGONEMULATIONPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  const GUID *v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rax
  const GUID *v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rax
  HANDLE hKmdProcess; // rdx
  void *v23; // rdx
  struct _DXGKARG_SETVIRTUALMACHINEDATA v25; // [rsp+20h] [rbp-49h] BYREF
  struct _DXGKARG_CREATEPROCESS v26; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = *((_QWORD *)a3 + 2);
  v5 = *((_QWORD *)a2 + 1);
  v7 = *(unsigned int *)(v3 + 256);
  LODWORD(v9) = DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(
                  (DXGARGONEMULATIONPROCESS_ADAPTER_INFO *)((char *)this + 8),
                  *(_DWORD *)(v3 + 256));
  if ( (int)v9 >= 0 )
  {
    v12 = *(_QWORD *)(v5 + 64);
    if ( (_DWORD)v7 )
    {
      v13 = 0LL;
      v14 = v7;
      do
      {
        *(_DWORD *)(v13 + *((_QWORD *)this + 2)) = v12;
        v13 += 4LL;
        --v14;
      }
      while ( v14 );
    }
    memset(&v26, 0, sizeof(v26));
    v15 = *(void **)(v5 + 72);
    v26.Flags.Value |= 8u;
    v26.hDxgkProcess = v15;
    v26.pPasid = (ULONG *)*((_QWORD *)this + 2);
    v26.pProcessName = L"DXGK_sicwp";
    v26.NumPasid = v7;
    v26.ProcessNameLength = 10;
    v17 = ADAPTER_RENDER::DdiCreateProcess(a3, &v26, v16);
    v9 = v17;
    if ( v17 >= 0 )
    {
      hKmdProcess = v26.hKmdProcess;
      v27[0] = 0LL;
      v27[1] = 0LL;
      *((_QWORD *)this + 3) = v26.hKmdProcess;
      LODWORD(v27[0]) = *(_DWORD *)(v5 + 64);
      *(_QWORD *)&v25.Flags.0 = 0LL;
      v25.hKmdVmWorkerProcess = hKmdProcess;
      v25.pVmGuid = (GUID *)v27;
      ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v25, v20);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = v9;
      WdLogEvent5_WdWarning(v21);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 5721LL;
    WdLogEvent5_WdLowResource(v10);
  }
  if ( (int)v9 < 0 )
  {
    if ( *((_QWORD *)this + 2) )
      DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate((DXGARGONEMULATIONPROCESS_ADAPTER_INFO *)((char *)this + 8));
    v23 = (void *)*((_QWORD *)this + 3);
    if ( v23 )
      ADAPTER_RENDER::DdiDestroyProcess(a3, v23, v11);
  }
  return (unsigned int)v9;
}
