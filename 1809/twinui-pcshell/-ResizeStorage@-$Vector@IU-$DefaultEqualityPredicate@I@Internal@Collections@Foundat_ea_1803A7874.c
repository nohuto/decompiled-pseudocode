/*
 * XREFs of ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1803A7874
 * Callers:
 *     ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x1803A6770 (-InsertAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foun_ea_1803A6770.c)
 *     ?RemoveAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1803A75E0 (-RemoveAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foun_ea_1803A75E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  size_t v5; // rdx
  void *v6; // rax
  void *v7; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 56);
  v5 = 4LL * a2;
  if ( v4 )
    v6 = (void *)_o_realloc(v4, v5);
  else
    v6 = malloc(v5);
  v7 = v6;
  result = v6 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = v7;
    *(_DWORD *)(a1 + 44) = a2;
  }
  return result;
}
