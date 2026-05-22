/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultVectorOptions_HSTRING________XWinRT::IntVersionTag_::Do__lambda_f813e42821691754fe37a5d1c3b7107b___lambda_a0cda285280cf77a5f4fdd8a40eba148___ @ 0x180116CF4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18011ECF0 (-MoveNext@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredi.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0cda285280cf77a5f4fdd8a40eba148___ @ 0x1801168E8 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0.c)
 *     _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator() @ 0x18011A454 (_lambda_e0774cbc35ab04c06dd6c99a10e6839d_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultVectorOptions_HSTRING________XWinRT::IntVersionTag_::Do__lambda_f813e42821691754fe37a5d1c3b7107b___lambda_a0cda285280cf77a5f4fdd8a40eba148___(
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
      updated = XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0cda285280cf77a5f4fdd8a40eba148___(
                  (volatile signed __int32 *)(v8 + 40),
                  (__int64)v14,
                  v10);
    else
      updated = lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()(v14, *(unsigned int *)(v8 + 40), v8 + 40);
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
