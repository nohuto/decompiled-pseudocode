/*
 * XREFs of ??$?4VUdwmTopVisual@@@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVUdwmTopVisual@@@Z @ 0x18004DEC4
 * Callers:
 *     ?RenderRecursive@UdwmTopVisual@@UEAAJXZ @ 0x180033C10 (-RenderRecursive@UdwmTopVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CVisual>::operator=<UdwmTopVisual>(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  v3 = *a1;
  *a1 = (CBaseObject *)a2;
  if ( v3 )
    CBaseObject::Release(v3);
  return a1;
}
