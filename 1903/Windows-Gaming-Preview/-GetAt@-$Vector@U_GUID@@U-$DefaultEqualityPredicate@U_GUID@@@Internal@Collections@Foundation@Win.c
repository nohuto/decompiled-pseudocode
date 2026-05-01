/*
 * XREFs of ?GetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18002CD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // r14
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  RTL_SRWLOCK *v6; // rsi
  int v9; // ebp
  __int64 v10; // rax

  v3 = a2;
  *a3 = 0LL;
  v4 = (_DWORD *)(a1 + 104);
  v5 = 0;
  a3[1] = 0LL;
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    v9 = 0;
    *(_OWORD *)a3 = *(_OWORD *)(v10 + 16 * v3);
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v5;
}
