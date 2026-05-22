/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18000E030
 * Callers:
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x1800378D0 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x1800378E0 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WEA@EAAKXZ @ 0x180038040 (-AddRef@ControllerProcessor@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
