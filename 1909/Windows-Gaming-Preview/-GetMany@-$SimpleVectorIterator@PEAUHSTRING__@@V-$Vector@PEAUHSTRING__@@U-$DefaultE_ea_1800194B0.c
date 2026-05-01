/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800194B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180043A5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  _DWORD *v7; // r12
  unsigned __int32 v8; // r15d
  _DWORD *v9; // rax
  __int64 j; // rsi
  bool v11; // zf
  signed __int32 v12; // eax
  _DWORD *v13; // rax
  __int64 i; // r14

  *a4 = 0;
  v5 = a2;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD **)(a1 + 32);
  if ( v6 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v7 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v8,
             v5,
             a3,
             a4);
      if ( v6 >= 0 )
        *(_DWORD *)(a1 + 40) = v8 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v8,
               v5,
               a3,
               a4);
        if ( v6 < 0 )
          break;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v8 + *a4, v8);
        v11 = v8 == v12;
        v8 = v12;
        if ( v11 )
          break;
        v13 = a4;
        for ( i = 0LL; (unsigned int)i < *a4; v13 = a4 )
        {
          WindowsDeleteString(*((HSTRING *)a3 + i));
          *((_QWORD *)a3 + i) = 0LL;
          *((_QWORD *)a3 + i) = 0LL;
          i = (unsigned int)(i + 1);
        }
        *v13 = 0;
        v5 = a2;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v7[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v9 = a4 )
        {
          WindowsDeleteString(*((HSTRING *)a3 + j));
          *((_QWORD *)a3 + j) = 0LL;
          *((_QWORD *)a3 + j) = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v9 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
