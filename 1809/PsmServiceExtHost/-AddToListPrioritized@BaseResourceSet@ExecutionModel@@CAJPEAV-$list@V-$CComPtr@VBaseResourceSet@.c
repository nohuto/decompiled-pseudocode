/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180002F7C
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001F550 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180003014 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049094 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0;
  while ( v2 != a1 && *(_DWORD *)(v2[2] + 1408LL) < *(_DWORD *)(a2 + 1408) )
    v2 = (_QWORD *)*v2;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( v6 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v6 + 2, a2, v7, v8);
    v10 = (_QWORD *)v2[1];
    v9[1] = v10;
    *v9 = v2;
    *v10 = v9;
    v2[1] = v9;
    ++a1[2];
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
