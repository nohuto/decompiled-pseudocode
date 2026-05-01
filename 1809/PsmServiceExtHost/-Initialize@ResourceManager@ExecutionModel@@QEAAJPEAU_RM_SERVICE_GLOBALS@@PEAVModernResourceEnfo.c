/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180043918
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180043890 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043980 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043C70 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043F48 (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180044418 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Initialize(
        struct IUnknown *this,
        struct IUnknownVtbl *a2,
        struct IUnknown **a3)
{
  __int64 result; // rax

  this[19].lpVtbl = a2;
  if ( a3 && a3[37] != &this[1] )
    ATL::AtlComPtrAssign(a3 + 37, this + 1);
  result = ExecutionModel::ResourceManager::ReadSettings((ExecutionModel::ResourceManager *)this);
  if ( (int)result >= 0 )
  {
    result = ExecutionModel::ResourceManager::InitializePools((ExecutionModel::ResourceManager *)this);
    if ( (int)result >= 0 )
    {
      result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems((ExecutionModel::ResourceManager *)this);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
