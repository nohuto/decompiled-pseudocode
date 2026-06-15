/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18013A740
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c9878382eb39d33d8256bbfdbaf238ac_::operator() @ 0x1801378D4 (_lambda_c9878382eb39d33d8256bbfdbaf238ac_--operator().c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  int v2; // ebx
  __int64 v4; // rsi
  int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v8; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 64);
  v8 = &v9;
  v7[1] = &v9;
  v7[2] = &v8;
  v7[0] = a1;
  if ( v2 >= 0 )
  {
    v5 = lambda_c9878382eb39d33d8256bbfdbaf238ac_::operator()(v7);
    v2 = v5;
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        **v8 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v2, 0LL);
  }
  return (unsigned int)v2;
}
