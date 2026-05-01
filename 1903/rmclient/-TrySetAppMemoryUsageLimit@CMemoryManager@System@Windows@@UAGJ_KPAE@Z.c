/*
 * XREFs of ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJ_KPAE@Z @ 0x10011160
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 *     ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QAEJ_KPAH@Z @ 0x100120C6 (-SetMemoryUsageLimit@ModernResourceManagerProxy@@QAEJ_KPAH@Z.c)
 */

int __stdcall Windows::System::CMemoryManager::TrySetAppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  int v5; // [esp+8h] [ebp-4h] BYREF

  v3 = 0;
  v5 = 0;
  if ( a3 )
  {
    if ( Windows::System::CMemoryManager::Init() >= 0 )
      ModernResourceManagerProxy::SetMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, a2, &v5);
    if ( v5 )
      v3 = 1;
  }
  *a3 = v3;
  return 0;
}
