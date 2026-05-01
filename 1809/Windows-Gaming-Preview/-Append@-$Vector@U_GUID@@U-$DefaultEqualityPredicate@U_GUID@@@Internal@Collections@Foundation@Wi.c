/*
 * XREFs of ?Append@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@@Z @ 0x18002D210
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIU_GUID@@_N@Z @ 0x18002F2C0 (-InsertAtInternal@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Fou.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::Append(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a4) = 1;
  v5 = *a2;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64))Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::InsertAtInternal)(
           a1,
           0LL,
           &v5,
           a4);
}
