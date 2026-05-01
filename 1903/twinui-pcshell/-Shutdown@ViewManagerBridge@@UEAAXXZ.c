/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18028A6F0
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x18026E660 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     IsNAVShutdownPresent @ 0x180089550 (IsNAVShutdownPresent.c)
 *     ?Shutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18028A72C (-Shutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

void __fastcall ViewManagerBridge::Shutdown(ViewManagerBridge *this)
{
  ViewManagerInteropTraceLogging::Shutdown();
  if ( IsNAVShutdownPresent() )
  {
    if ( !*((_BYTE *)this + 145) )
    {
      *((_BYTE *)this + 144) = 1;
      NAVShutdown();
    }
  }
}
