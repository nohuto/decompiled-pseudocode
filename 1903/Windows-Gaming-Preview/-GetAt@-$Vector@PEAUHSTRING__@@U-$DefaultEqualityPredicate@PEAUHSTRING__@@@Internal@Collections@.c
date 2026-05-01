/*
 * XREFs of ?GetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180013060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  HRESULT v9; // ebp

  v3 = 0;
  v4 = a2;
  v5 = (_DWORD *)(a1 + 104);
  *a3 = 0LL;
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
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    WindowsDeleteString(*a3);
    *a3 = 0LL;
    v9 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8 * v4), a3);
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v5 )
  {
    if ( *v5 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v3;
}
