/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_b6ff88a7501cea2415cc7e57b63f7b6e___lambda_6e387076673c36248f6fb439d71c3ec2___ @ 0x1803A3F2C
 * Callers:
 *     ?GetMany@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAI0@Z @ 0x1803A5E20 (-GetMany@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Coll_ea_1803A5E20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_b6ff88a7501cea2415cc7e57b63f7b6e___lambda_6e387076673c36248f6fb439d71c3ec2___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 v9; // r8
  _DWORD *v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 40LL) + 128LL))(
           *(_QWORD *)(*(_QWORD *)a3 + 40LL),
           **(unsigned int **)(a3 + 8),
           **(unsigned int **)(a3 + 16),
           **(_QWORD **)(a3 + 24),
           **(_QWORD **)(a3 + 32));
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = 0LL;
        v10 = (_DWORD *)**a4;
        if ( *v10 )
        {
          do
          {
            *(_DWORD *)(*a4[1] + 4 * v9) = 0;
            v9 = (unsigned int)(v9 + 1);
            v10 = (_DWORD *)**a4;
          }
          while ( (unsigned int)v9 < *v10 );
        }
        *v10 = 0;
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
