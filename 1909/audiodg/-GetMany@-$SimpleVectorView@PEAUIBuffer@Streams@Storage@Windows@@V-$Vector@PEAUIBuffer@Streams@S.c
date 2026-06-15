/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x140048550
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ac3beea330571e42c38df3f7f9b88514___lambda_56213c9095e2d0ec17d12af2ecfb5d02___ @ 0x140044458 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140044458.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v11 )
        break;
      a4 = v12;
    }
  }
  v9[0] = a1;
  *a5 = 0;
  v6 = *(_QWORD *)(a1 + 40);
  v8[0] = &a5;
  v8[1] = &v12;
  v9[1] = &v10;
  v9[2] = &v11;
  v9[3] = &v12;
  v9[4] = &a5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ac3beea330571e42c38df3f7f9b88514___lambda_56213c9095e2d0ec17d12af2ecfb5d02___(
           (unsigned int *)(a1 + 48),
           v6,
           (__int64)v9,
           (__int64)v8);
}
