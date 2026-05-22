/*
 * XREFs of ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ @ 0x1800036C0
 * Callers:
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x180005760 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x1800057A0 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoMPCManagerClientProxy::AddRef(BamoMPCManagerClientProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
