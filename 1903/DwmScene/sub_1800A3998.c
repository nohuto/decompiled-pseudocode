/*
 * XREFs of sub_1800A3998 @ 0x1800A3998
 * Callers:
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 * Callees:
 *     sub_1800A8090 @ 0x1800A8090 (sub_1800A8090.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A3998(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  volatile signed __int32 *v8; // rbx
  signed __int32 v9; // eax
  bool v10; // zf
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD **)(a1 + 18560);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v11 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = a2[1];
    }
    *(_QWORD *)&v11 = *a2;
    *((_QWORD *)&v11 + 1) = v6;
    sub_1800A8090(v5[8], &v11);
    result = v5[2];
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = v5[1]; !*(_BYTE *)(result + 25) && v5 == *(_QWORD **)(result + 16); result = *(_QWORD *)(result + 8) )
        v5 = (_QWORD *)result;
      v5 = (_QWORD *)result;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      v7 = *(__int64 **)result;
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          v5 = v7;
          result = *v7;
          v7 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
