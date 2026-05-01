/*
 * XREFs of wistd::__function::__func__lambda_a9359ba1b3912c4237c6d32c3fbe7c28__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____)_::__clone @ 0x18021CA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall wistd::__function::__func__lambda_a9359ba1b3912c4237c6d32c3fbe7c28__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 result; // rax
  __int64 v4; // r8
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  signed __int64 v7; // rtt

  result = (signed __int64)&off_18042E4B0;
  *a2 = &off_18042E4B0;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 192);
    while ( result >= 0 )
    {
      v5 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 192), result + 1, result);
      if ( v5 == result )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * result + 16));
  }
LABEL_7:
  v6 = *(_QWORD *)(a1 + 16);
  a2[2] = v6;
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 64);
    while ( result >= 0 )
    {
      v7 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), result + 1, result);
      if ( v7 == result )
        return result;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * result + 16));
  }
  return result;
}
