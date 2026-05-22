/*
 * XREFs of ??B?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x180035970
 * Callers:
 *     ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F18A0 (-StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Intern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
