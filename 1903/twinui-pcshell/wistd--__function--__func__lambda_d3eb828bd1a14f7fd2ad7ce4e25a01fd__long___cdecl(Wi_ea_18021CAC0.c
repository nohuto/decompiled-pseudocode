/*
 * XREFs of wistd::__function::__func__lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___IInspectable_____)_::__clone @ 0x18021CAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___IInspectable_______::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 result; // rax

  *a2 = &off_18042E488;
  v2 = *(_QWORD *)(a1 + 8);
  a2[1] = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 192);
    while ( v3 >= 0 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 192), v3 + 1, v3);
      if ( v4 == v3 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
  }
LABEL_7:
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}
