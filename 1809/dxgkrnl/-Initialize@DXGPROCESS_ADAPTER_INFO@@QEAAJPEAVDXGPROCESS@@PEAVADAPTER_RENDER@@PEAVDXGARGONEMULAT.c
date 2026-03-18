/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C001279C (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C00F03A0 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F03C8 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C00F7B6C (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C00F8E18 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C01D0494 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0229B78 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3,
        struct DXGARGONEMULATIONPROCESS *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  char v13; // cl
  char IsVmProcessOrVmValidation; // al
  __int64 v15; // rcx
  UINT Value; // r8d
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  HANDLE hKmdProcess; // rdx
  char v22; // al
  __int64 v24; // r12
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  struct DXGPROCESS *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  _DXGKARG_CREATEPROCESS v41; // [rsp+20h] [rbp-58h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v42; // [rsp+58h] [rbp-20h] BYREF

  LODWORD(v4) = 0;
  if ( *((_BYTE *)this + 77) )
    return (unsigned int)v4;
  v9 = *((_QWORD *)a3 + 2);
  if ( !*(_BYTE *)(v9 + 185) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 68) + 8LL) + 1176LL))(*((_QWORD *)a3 + 69));
    v4 = v10;
    if ( v10 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v30 + 24) = *((_QWORD *)a3 + 2);
      *(_QWORD *)(v30 + 32) = v4;
      WdLogEvent5_WdError(v30);
      return (unsigned int)v4;
    }
    *((_BYTE *)this + 76) = 1;
    v9 = *((_QWORD *)a3 + 2);
  }
  if ( (*(_DWORD *)(v9 + 1892) & 0x80u) != 0 )
  {
    v24 = *(unsigned int *)(v9 + 256);
    LODWORD(v4) = DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(this, *(_DWORD *)(v9 + 256));
    if ( (int)v4 < 0 )
    {
      v31 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v31 + 24) = 1929LL;
      WdLogEvent5_WdLowResource(v31);
      goto LABEL_14;
    }
    v26 = *(_DWORD *)(v9 + 308);
    if ( (v26 & 8) != 0 || (v26 & 4) != 0 || (v26 & 0x10) != 0 || (*((_BYTE *)a2 + 323) & 4) != 0 )
    {
      v27 = *((_QWORD *)a2 + 8);
      if ( (_DWORD)v24 )
      {
        v28 = 0LL;
        v29 = v24;
        do
        {
          *(_DWORD *)(v28 + *((_QWORD *)this + 1)) = v27;
          v28 += 4LL;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      v32 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, v24, (struct DXGADAPTER *)v9);
      v4 = v32;
      if ( v32 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v33);
        *(_QWORD *)(v34 + 24) = v9;
        *(_QWORD *)(v34 + 32) = v4;
        WdLogEvent5_WdError(v34);
        goto LABEL_14;
      }
    }
  }
  v12 = *(_DWORD *)(v9 + 1892);
  if ( (v12 & 0x80u) == 0 && (v12 & 0x40) == 0 )
  {
LABEL_13:
    *((_BYTE *)this + 77) = 1;
    goto LABEL_14;
  }
  memset(&v41, 0, sizeof(v41));
  v13 = *((_BYTE *)a2 + 320);
  v41.hDxgkProcess = (HANDLE)*((_QWORD *)a2 + 9);
  v41.Flags.Value = v41.Flags.Value & 0xFFFFFFFC | *((_BYTE *)a2 + 321) & 1 | (2 * (v13 & 1));
  IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v9);
  v15 = *((unsigned __int8 *)a2 + 323);
  Value = v41.Flags.Value & 0xFFFFFFF3 | (2 * (*((_BYTE *)a2 + 323) & 4 | (2 * (IsVmProcessOrVmValidation & 1))));
  v41.Flags.Value = Value;
  if ( (v15 & 8) != 0 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 57) + 48LL) + 8LL * *(unsigned int *)(v9 + 208));
    v41.hKmdVmWorkerProcess = *(HANDLE *)(v15 + 16);
    v41.pProcessName = (WCHAR *)*((_QWORD *)a2 + 61);
    v41.ProcessNameLength = *((_DWORD *)a2 + 124);
  }
  v17 = (*((_BYTE *)a2 + 324) & 1) == 0;
  v41.NumPasid = *(_DWORD *)(v9 + 256);
  v41.pPasid = (ULONG *)*((_QWORD *)this + 1);
  if ( !v17 )
  {
    if ( !*(_BYTE *)(v9 + 2476) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v35 + 24) = 1981LL;
      WdLogEvent5_WdAssertion(v35);
      Value = v41.Flags.Value;
    }
    if ( *(_BYTE *)(v9 + 2477) )
    {
      v36 = *(_QWORD *)a4;
      v37 = *(unsigned int *)(v9 + 208);
      v41.Flags.Value = Value | 4;
      v41.hKmdVmWorkerProcess = *(HANDLE *)(*(_QWORD *)(v36 + 8 * v37) + 24LL);
      v41.pProcessName = L"DXGK_sicproc";
      v41.ProcessNameLength = 12;
    }
    else
    {
      v41.Flags.Value = Value | 0x10;
    }
  }
  LODWORD(v4) = ADAPTER_RENDER::DdiCreateProcess(a3, &v41);
  if ( (int)v4 >= 0 )
  {
    hKmdProcess = v41.hKmdProcess;
    *((_QWORD *)this + 2) = v41.hKmdProcess;
    v22 = *((_BYTE *)a2 + 323);
    if ( (v22 & 4) != 0 )
    {
      if ( (v22 & 8) != 0 )
        v38 = (struct DXGPROCESS *)*((_QWORD *)a2 + 57);
      else
        v38 = a2;
      v39 = *((_QWORD *)v38 + 57);
      *(_QWORD *)&v42.Flags.0 = 0LL;
      v42.hKmdVmWorkerProcess = hKmdProcess;
      v42.pVmGuid = (GUID *)(v39 + 200);
      v42.Flags.Value = *(_BYTE *)(v39 + 248) & 1;
      ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v42);
    }
    goto LABEL_13;
  }
  v40 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v40 + 24) = 2020LL;
  WdLogEvent5_WdWarning(v40);
LABEL_14:
  if ( (int)v4 < 0 )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
  }
  return (unsigned int)v4;
}
