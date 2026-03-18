/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E1E28
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E1C9C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FF7CC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000B954 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01342B4 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01342DC (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C01457E8 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C01FECFC (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C025EBB8 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  char v14; // cl
  char IsVmProcessOrVmValidation; // al
  char v16; // cl
  UINT Value; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  HANDLE hKmdProcess; // rdx
  char v24; // al
  unsigned __int64 v25; // r12
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  SIZE_T v31; // rax
  PVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  struct DXGPROCESS *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  _DXGKARG_CREATEPROCESS v52; // [rsp+20h] [rbp-69h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v53; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v54[48]; // [rsp+70h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( !*((_BYTE *)this + 77) )
  {
    v7 = *((_QWORD *)a3 + 2);
    if ( !*(_BYTE *)(v7 + 185) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 68) + 8LL) + 1176LL))(*((_QWORD *)a3 + 69));
      v3 = v8;
      if ( v8 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v10, v9, v11);
        *(_QWORD *)(v30 + 24) = *((_QWORD *)a3 + 2);
        *(_QWORD *)(v30 + 32) = v3;
        WdLogEvent5_WdError(v30);
        return (unsigned int)v3;
      }
      *((_BYTE *)this + 76) = 1;
      v7 = *((_QWORD *)a3 + 2);
    }
    if ( (*(_DWORD *)(v7 + 1916) & 0x80u) != 0 )
    {
      v25 = *(unsigned int *)(v7 + 256);
      if ( (_DWORD)v25 == 1 )
      {
        *((_QWORD *)this + 1) = this;
      }
      else
      {
        v31 = 4 * v25;
        if ( !is_mul_ok(v25, 4uLL) )
          v31 = -1LL;
        v32 = operator new(v31, 0x4B677844u, 1, PagedPool);
        *((_QWORD *)this + 1) = v32;
        if ( !v32 )
        {
          v37 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
          *(_QWORD *)(v37 + 24) = 5606LL;
          WdLogEvent5_WdLowResource(v37);
          LODWORD(v3) = -1073741801;
          v42 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
          *(_QWORD *)(v42 + 24) = 1986LL;
          WdLogEvent5_WdLowResource(v42);
          goto LABEL_30;
        }
      }
      v26 = *(_DWORD *)(v7 + 308);
      LODWORD(v3) = 0;
      if ( (v26 & 8) != 0 || (v26 & 4) != 0 || (v26 & 0x10) != 0 || (*((_BYTE *)a2 + 299) & 4) != 0 )
      {
        v27 = *((_QWORD *)a2 + 8);
        if ( (_DWORD)v25 )
        {
          v28 = 0LL;
          v29 = v25;
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
        v43 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, v25, (struct DXGADAPTER *)v7);
        v3 = v43;
        if ( v43 < 0 )
        {
          v47 = WdLogNewEntry5_WdError(v45, v44, v46);
          *(_QWORD *)(v47 + 24) = v7;
          *(_QWORD *)(v47 + 32) = v3;
          WdLogEvent5_WdError(v47);
          goto LABEL_9;
        }
      }
    }
    v12 = *(_DWORD *)(v7 + 1916);
    if ( (v12 & 0x80u) == 0 && (v12 & 0x40) == 0 )
    {
LABEL_8:
      *((_BYTE *)this + 77) = 1;
      goto LABEL_9;
    }
    memset(&v52, 0, sizeof(v52));
    v14 = *((_BYTE *)a2 + 296);
    v52.hDxgkProcess = (HANDLE)*((_QWORD *)a2 + 9);
    v52.Flags.Value = v52.Flags.Value & 0xFFFFFFFC | *((_BYTE *)a2 + 297) & 1 | (2 * (v14 & 1));
    IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v7);
    v16 = *((_BYTE *)a2 + 299);
    Value = v52.Flags.Value & 0xFFFFFFF3 | (2 * (v16 & 4 | (2 * (IsVmProcessOrVmValidation & 1))));
    v52.Flags.Value = Value;
    if ( (v16 & 8) != 0 )
    {
      v52.hKmdVmWorkerProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 54) + 48LL)
                                                      + 8LL * *(unsigned int *)(v7 + 208))
                                          + 16LL);
      v52.pProcessName = (WCHAR *)*((_QWORD *)a2 + 58);
      v52.ProcessNameLength = *((_DWORD *)a2 + 118);
    }
    v52.NumPasid = *(_DWORD *)(v7 + 256);
    v52.pPasid = (ULONG *)*((_QWORD *)this + 1);
    memset(v54, 0, sizeof(v54));
    if ( (*((_BYTE *)a2 + 300) & 1) != 0 )
    {
      if ( !*(_BYTE *)(v7 + 2508) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v48 + 24) = 2038LL;
        WdLogEvent5_WdAssertion(v48);
        Value = v52.Flags.Value;
      }
      v52.Flags.Value = Value | 0x10;
    }
    LODWORD(v3) = ADAPTER_RENDER::DdiCreateProcess(a3, &v52);
    if ( (int)v3 >= 0 )
    {
      hKmdProcess = v52.hKmdProcess;
      *((_QWORD *)this + 2) = v52.hKmdProcess;
      v24 = *((_BYTE *)a2 + 299);
      if ( (v24 & 4) != 0 )
      {
        if ( (v24 & 8) != 0 )
          v49 = (struct DXGPROCESS *)*((_QWORD *)a2 + 54);
        else
          v49 = a2;
        v50 = *((_QWORD *)v49 + 54);
        *(_QWORD *)&v53.Flags.0 = 0LL;
        v53.hKmdVmWorkerProcess = hKmdProcess;
        v53.pVmGuid = (GUID *)(v50 + 200);
        v53.Flags.Value = *(_BYTE *)(v50 + 248) & 1;
        ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v53);
      }
      goto LABEL_8;
    }
    v51 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v51 + 24) = 2066LL;
    WdLogEvent5_WdWarning(v51);
LABEL_9:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
LABEL_30:
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
  }
  return (unsigned int)v3;
}
