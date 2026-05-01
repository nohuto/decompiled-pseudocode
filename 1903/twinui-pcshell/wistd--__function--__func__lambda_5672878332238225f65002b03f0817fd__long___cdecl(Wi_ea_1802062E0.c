/*
 * XREFs of wistd::__function::__func__lambda_5672878332238225f65002b03f0817fd__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____)_::__clone @ 0x1802062E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

signed __int64 __fastcall wistd::__function::__func__lambda_5672878332238225f65002b03f0817fd__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  signed __int64 result; // rax
  __int64 v5; // rdx
  signed __int64 v6; // rtt

  v2 = a2 + 1;
  *a2 = &off_18042E200;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  v5 = *(_QWORD *)(a1 + 16);
  v2[1] = v5;
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 80);
    while ( result >= 0 )
    {
      v6 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 80), result + 1, result);
      if ( v6 == result )
        return result;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * result + 16));
  }
  return result;
}
