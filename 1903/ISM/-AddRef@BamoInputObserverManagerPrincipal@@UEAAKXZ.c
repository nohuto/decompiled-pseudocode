/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18000DFC0
 * Callers:
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x180037DC0 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x180037DD0 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WEA@EAAKXZ @ 0x180038530 (-AddRef@ControllerProcessor@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
