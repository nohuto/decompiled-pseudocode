/*
 * XREFs of ?GetSwitchItemCollection@MultitaskingData@@UEAA?AV?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@XZ @ 0x1802EC970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetSwitchItemCollection(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
