/*
 * XREFs of wistd::__function::__func__lambda_2532e8ff3850da9d761cbeb5a695a89f__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____)_::__clone @ 0x180206270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

signed __int64 __fastcall wistd::__function::__func__lambda_2532e8ff3850da9d761cbeb5a695a89f__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  signed __int64 result; // rax
  __int64 v5; // rdx
  signed __int64 v6; // rtt

  v2 = a2 + 1;
  *a2 = &off_18042E1D8;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  v5 = *(_QWORD *)(a1 + 16);
  v2[1] = v5;
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 88);
    while ( result >= 0 )
    {
      v6 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), result + 1, result);
      if ( v6 == result )
        return result;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * result + 16));
  }
  return result;
}
