/*
 * XREFs of ?get_Size@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18000B9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v3; // zf
  RTL_SRWLOCK *v6; // rcx
  RTL_SRWLOCK *v7; // rcx

  *a2 = 0;
  v2 = (RTL_SRWLOCK *)(a1 + 104);
  v3 = *(_DWORD *)(a1 + 104) == 1;
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( v3 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v6);
  }
  *a2 = *(_DWORD *)(a1 + 72);
  if ( v2 )
  {
    v7 = v2 + 1;
    if ( LODWORD(v2->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  return 0LL;
}
