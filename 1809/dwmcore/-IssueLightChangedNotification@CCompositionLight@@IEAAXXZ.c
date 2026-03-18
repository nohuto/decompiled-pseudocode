/*
 * XREFs of ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800A1560
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800766E8 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIO.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180077CA0 (-SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180077D00 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180079B90 (-SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18007A0B8 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A1590 (-SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x180190348 (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITI.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionLight::IssueLightChangedNotification(CCompositionLight *this)
{
  char v1; // al
  CCompositionLight *v2; // r8

  v1 = *((_BYTE *)this + 153);
  v2 = this;
  if ( v1 )
    v2 = 0LL;
  (*(void (__fastcall **)(CCompositionLight *, _QWORD, CCompositionLight *))(*(_QWORD *)this + 64LL))(
    this,
    v1 != 0 ? 1 : 11,
    v2);
}
