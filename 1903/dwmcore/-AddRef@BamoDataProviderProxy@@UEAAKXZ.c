/*
 * XREFs of ?AddRef@BamoDataProviderProxy@@UEAAKXZ @ 0x1800DA3C0
 * Callers:
 *     ?AddRef@CExpressionForce@@W7EAAKXZ @ 0x1800ECF20 (-AddRef@CExpressionForce@@W7EAAKXZ.c)
 *     ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800ED660 (-AddRef@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderProxy::AddRef(BamoDataProviderProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
