/*
 * XREFs of ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UAGJPAW4AppMemoryUsageLevel@23@@Z @ 0x10008000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x10008038 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 */

int __stdcall Windows::System::CMemoryManager::get_AppMemoryUsageLevel(
        Windows::System::CMemoryManager *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int result; // eax

  if ( !a2 )
    return -2147024809;
  result = Windows::System::CMemoryManager::Init();
  if ( result >= 0 )
  {
    if ( Windows::System::CMemoryManager::s_pProxy )
      return ModernResourceManagerProxy::GetMemoryUsageLevel(Windows::System::CMemoryManager::s_pProxy, a2);
    else
      return -2147467259;
  }
  return result;
}
