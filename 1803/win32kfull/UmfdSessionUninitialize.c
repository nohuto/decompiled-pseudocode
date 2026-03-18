/*
 * XREFs of UmfdSessionUninitialize @ 0x1C010FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C010CB64 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C010FC24 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void UmfdSessionUninitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  void **v2; // rcx
  PVOID v3; // rbx

  v0 = 0LL;
  v1 = 4LL;
  do
  {
    if ( g_pUmfdClientPort[v0] )
      g_pUmfdClientPort[v0] = 0LL;
    v2 = (void **)g_pUmfdServerPort[v0];
    if ( v2 )
    {
      CMultipleConsumerWorkQueue::Destroy(v2);
      g_pUmfdServerPort[v0] = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  UmfdAllocation::Uninitialize();
  if ( UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
    UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = 0LL;
  }
  v3 = UmfdFontFileLookup;
  if ( UmfdFontFileLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFontFileLookup + 6), 0);
    ExFreePoolWithTag(v3, 0);
    UmfdFontFileLookup = 0LL;
  }
}
