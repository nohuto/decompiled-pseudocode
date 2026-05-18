/*
 * XREFs of sub_18009BC50 @ 0x18009BC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 *     sub_18009996C @ 0x18009996C (sub_18009996C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009BC50(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-48h]
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+58h] [rbp-18h]

  v13 = -2LL;
  v10 = 0LL;
  v11 = 0LL;
  result = (__int64)sub_18009996C((__int64)a1, &v10, 0LL);
  if ( v10 )
  {
    v15 = 0LL;
    v3 = a1[8];
    if ( v3 )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v3 + 8);
        if ( !(_DWORD)result )
          break;
        if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), result + 1, result) )
        {
          *(_QWORD *)&v15 = a1[7];
          result = a1[8];
          *((_QWORD *)&v15 + 1) = result;
          break;
        }
      }
    }
    v4 = (__int64 *)a1[13];
    if ( v4[9] )
    {
      v14 = 0LL;
      v5 = a1[18];
      if ( v5 )
      {
        while ( 1 )
        {
          result = *(unsigned int *)(v5 + 8);
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), result + 1, result) )
          {
            *(_QWORD *)&v14 = a1[17];
            result = a1[18];
            *((_QWORD *)&v14 + 1) = result;
            break;
          }
        }
      }
      if ( (_QWORD)v14 )
      {
        sub_180090A04(*v4, (__int64)&qword_18025C6D8, 1);
        v12 = 0LL;
        v6 = v4[10];
        if ( v6 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
          v6 = v4[10];
        }
        *(_QWORD *)&v12 = v4[9];
        *((_QWORD *)&v12 + 1) = v6;
        result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v14 + 8LL))(v14, &v12);
      }
      if ( *((_QWORD *)&v14 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v7 = *((_QWORD *)&v14 + 1);
          (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
        }
      }
    }
    if ( *((_QWORD *)&v15 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v8 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
  }
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      v9 = v11;
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
