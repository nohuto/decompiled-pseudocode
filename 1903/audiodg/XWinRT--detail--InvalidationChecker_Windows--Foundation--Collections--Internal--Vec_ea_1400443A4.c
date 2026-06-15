/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ed38f1c9fab6ded12fecd945b1b9e25e___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x1400443A4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140049EC0 (-MoveNext@-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Stre.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x140043F00 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b.c)
 *     _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator() @ 0x140046098 (_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ed38f1c9fab6ded12fecd945b1b9e25e___lambda_2b4e95c994fbfcf834a48c0377dad5b5___(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE ***v10; // r8
  bool v11; // zf
  int updated; // eax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = a3[1];
    v10 = (_BYTE ***)a3[2];
    v14[0] = v9;
    v15 = v8;
    v11 = *(_BYTE *)(v8 + 56) == 0;
    v14[1] = &v15;
    if ( v11 )
      updated = XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___(
                  (volatile signed __int32 *)(v8 + 40),
                  (__int64)v14,
                  v10);
    else
      updated = lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(v14, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = updated;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( updated < 0 )
      {
        RoTransformError((unsigned int)updated, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
