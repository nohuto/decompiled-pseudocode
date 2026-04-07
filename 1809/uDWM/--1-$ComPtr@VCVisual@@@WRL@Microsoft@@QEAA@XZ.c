/*
 * XREFs of ??1?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180086E78
 * Callers:
 *     ?RenderRecursive@UdwmTopVisual@@UEAAJXZ @ 0x180033C10 (-RenderRecursive@UdwmTopVisual@@UEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
