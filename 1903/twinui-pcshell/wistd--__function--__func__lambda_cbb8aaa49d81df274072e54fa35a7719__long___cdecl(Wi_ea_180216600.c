/*
 * XREFs of wistd::__function::__func__lambda_cbb8aaa49d81df274072e54fa35a7719__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____)_::__clone @ 0x180216600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_cbb8aaa49d81df274072e54fa35a7719__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  *a2 = &off_18042E368;
  v2 = *(_QWORD *)(a1 + 8);
  a2[1] = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 200);
    while ( v3 >= 0 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v3 + 1, v3);
      if ( v4 == v3 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
  }
LABEL_7:
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 2);
}
