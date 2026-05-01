/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180043688
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180043600 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800436E4 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800439DC (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180044068 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Initialize(
        struct IUnknown *this,
        struct IUnknownVtbl *a2,
        struct IUnknown **a3)
{
  __int64 result; // rax

  this[16].lpVtbl = a2;
  if ( a3 && a3[36] != &this[1] )
    ATL::AtlComPtrAssign(a3 + 36, this + 1);
  result = ExecutionModel::ResourceManager::InitializePools((ExecutionModel::ResourceManager *)this);
  if ( (int)result >= 0 )
  {
    result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems((ExecutionModel::ResourceManager *)this);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
