/*
 * XREFs of wistd::__function::__func__lambda_c2d6be381209f34dacbc2b1862b266e6__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____)_::__clone @ 0x180235980
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

signed __int64 __fastcall wistd::__function::__func__lambda_c2d6be381209f34dacbc2b1862b266e6__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_______::__clone(
        __int64 a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  signed __int64 v6; // rtt
  __int64 v7; // rdx
  signed __int64 v8; // rtt

  result = (signed __int64)&off_18044DD78;
  v3 = a2;
  *(_QWORD *)a2 = &off_18044DD78;
  v4 = a1;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v5;
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 200);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v6 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), result + 1, result);
        if ( v6 != result )
          continue;
      }
      goto LABEL_8;
    }
    result = Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
               (Microsoft::WRL::Details *)(2 * result + 16),
               (volatile int *)a2);
  }
LABEL_8:
  v7 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v3 + 16) = v7;
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 64);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v8 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), result + 1, result);
        if ( v8 != result )
          continue;
      }
      return result;
    }
    return Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
             (Microsoft::WRL::Details *)(2 * result + 16),
             (volatile int *)v7);
  }
  return result;
}
