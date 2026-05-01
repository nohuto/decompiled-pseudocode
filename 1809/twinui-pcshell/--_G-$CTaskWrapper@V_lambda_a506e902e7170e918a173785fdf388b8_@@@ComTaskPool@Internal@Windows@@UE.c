/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_a506e902e7170e918a173785fdf388b8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180355180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180074E38 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E7E7C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a506e902e7170e918a173785fdf388b8_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile int **)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
