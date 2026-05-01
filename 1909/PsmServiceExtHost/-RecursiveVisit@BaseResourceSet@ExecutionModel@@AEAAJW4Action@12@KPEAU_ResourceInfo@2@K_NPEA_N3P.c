/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000739C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180007874 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800203A0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180021600 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180007728 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        __int64 a1,
        int a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // r14
  int v14; // r11d
  char v16; // r12
  unsigned int v17; // edi
  int *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 v23; // r8
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  _BYTE *v33; // rcx
  _QWORD *i; // rbx
  _QWORD *v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdi
  _QWORD *v39; // rax
  _BYTE *v40; // rbx
  _QWORD *v41; // rbp
  _QWORD *v42; // rax
  char v43; // di
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 *v47; // rbx

  v10 = *(_DWORD *)(a1 + 1280) == 2;
  v12 = a8;
  v14 = a2;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v16 = 0;
  v17 = 0;
  if ( !a3 )
    goto LABEL_20;
  v18 = a4;
  do
  {
    v19 = *v18;
    if ( (unsigned int)v19 > 0x31 )
      goto LABEL_18;
    v20 = 24 * (v19 + 3);
    v21 = *(_QWORD *)(v20 + a1 + 8);
    a8 = (_BYTE *)v20;
    if ( v21 )
    {
      if ( v18[4] < 101 )
      {
        if ( a6 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v18, a5);
          v14 = a2;
          if ( !v22 )
            goto LABEL_18;
          v20 = (__int64)a8;
        }
        v23 = *(_QWORD *)(v20 + a1 + 8);
        v24 = (1LL << v19) & *(_QWORD *)(a1 + 1272);
        v25 = *((_QWORD *)v18 + 1);
        if ( v23 < v25 )
          v25 = *(_QWORD *)(v20 + a1 + 8);
        if ( v24 )
          v25 = *((_QWORD *)v18 + 1);
        if ( v14 )
        {
          if ( v14 != 1 )
            __fastfail(0xC0000001);
          if ( !v24 )
            *(_QWORD *)(v20 + a1 + 8) = v23 - v25;
          v29 = a10;
          v30 = 3 * (*v18 + 3LL);
          *(_OWORD *)(a10 + 8 * v30) = *(_OWORD *)v18;
          *(_QWORD *)(v29 + 8 * v30 + 16) = *((_QWORD *)v18 + 2);
        }
        else if ( *(_QWORD *)(a1 + 64) )
        {
          v16 = 1;
        }
        *((_QWORD *)v18 + 1) -= v25;
      }
    }
    else if ( !*((_QWORD *)v18 + 1) && v14 == 1 )
    {
      v31 = a10;
      *(_OWORD *)(v20 + a10) = *(_OWORD *)v18;
      *(_QWORD *)(v20 + v31 + 16) = *((_QWORD *)v18 + 2);
    }
LABEL_18:
    ++v17;
    v18 += 6;
  }
  while ( v17 < a3 );
  if ( v16 )
  {
    v32 = a9;
    if ( a9 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
      v33 = a8;
      for ( i = *(_QWORD **)v32; i != (_QWORD *)v32; i = v35 )
      {
        v35 = (_QWORD *)*i;
        if ( (_BYTE *)i[2] == v33 )
        {
          v36 = (_QWORD *)i[1];
          *v36 = v35;
          v35[1] = v36;
          v37 = i[2];
          if ( v37 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          operator delete(i);
          --*(_QWORD *)(v32 + 16);
          v33 = a8;
        }
      }
      if ( v33 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v33 + 16LL))(v33);
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
      v38 = *(_QWORD **)v32;
      v39 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v40 = a8;
      v41 = v39;
      if ( v39 )
      {
        ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
          v39 + 2,
          (__int64)a8);
        v42 = (_QWORD *)v38[1];
        *v41 = v38;
        v41[1] = v42;
        *v42 = v41;
        v38[1] = v41;
        ++*(_QWORD *)(v32 + 16);
        v43 = 0;
      }
      else
      {
        v43 = 1;
      }
      if ( v40 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v43 )
        return 2147500037LL;
      v14 = a2;
    }
  }
LABEL_20:
  v26 = 0;
  if ( a3 )
  {
    v27 = a4 + 2;
    while ( !*v27 )
    {
      ++v26;
      v27 += 3;
      if ( v26 >= a3 )
        goto LABEL_24;
    }
    v44 = a10;
    v45 = a9;
    *a7 = 1;
    v46 = a1 + 40;
    while ( v46 != *(_QWORD *)(a1 + 40) )
    {
      v47 = (__int64 *)(v46 + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(_QWORD *)(*(_QWORD *)(v46 + 8) + 16LL),
                 v14,
                 a3,
                 (_DWORD)a4,
                 a5,
                 a6,
                 (__int64)&a8,
                 (__int64)v12,
                 v45,
                 v44);
      if ( (int)result < 0 )
        return result;
      if ( *v12 )
        break;
      v46 = *v47;
      v14 = a2;
    }
  }
  else
  {
LABEL_24:
    *v12 = 1;
    *a7 = 0;
  }
  return 0LL;
}
