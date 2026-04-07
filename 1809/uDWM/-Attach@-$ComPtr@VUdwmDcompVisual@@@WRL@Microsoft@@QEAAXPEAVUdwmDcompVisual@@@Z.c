/*
 * XREFs of ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180072AE8
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
