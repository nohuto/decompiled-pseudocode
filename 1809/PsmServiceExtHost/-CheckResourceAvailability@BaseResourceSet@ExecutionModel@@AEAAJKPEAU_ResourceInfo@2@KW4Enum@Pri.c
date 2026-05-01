/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003044
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001F550 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180062D58 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x180003114 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003164 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8)
{
  unsigned int v8; // ebx
  unsigned int v10; // ebp
  __int64 result; // rax
  char v13; // bl
  _BYTE *v14; // rax
  char v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+41h] [rbp-17h]

  v8 = a4;
  v10 = a2;
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( v15 )
    {
      v13 = v16;
      if ( !v16
        && ((*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 40LL))(a1, v10, a3) < 0
         || (unsigned __int8)ExecutionModel::BaseResourceSet::HigherPriorityPending(a1, v10, a3, a5)) )
      {
        v13 = 1;
      }
      *a8 = 1;
      v14 = a7;
      if ( v13 )
      {
        *a7 = 1;
        return 0LL;
      }
    }
    else
    {
      if ( a6 == 1 )
        ExecutionModel::BaseResourceSet::CheckPoolResources(a1, v10, a3, v8);
      *a8 = 0;
      v14 = a7;
    }
    *v14 = 0;
    return 0LL;
  }
  return result;
}
