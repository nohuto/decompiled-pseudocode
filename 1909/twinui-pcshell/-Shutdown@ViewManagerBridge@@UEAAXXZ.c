/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x1802A9B50
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x18028DB30 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     IsNAVShutdownPresent @ 0x18008C0D0 (IsNAVShutdownPresent.c)
 *     ?Shutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802A9B8C (-Shutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
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
