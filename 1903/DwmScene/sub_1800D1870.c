/*
 * XREFs of sub_1800D1870 @ 0x1800D1870
 * Callers:
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_1800D0DB8 @ 0x1800D0DB8 (sub_1800D0DB8.c)
 *     sub_1800D144C @ 0x1800D144C (sub_1800D144C.c)
 *     sub_1800D1A24 @ 0x1800D1A24 (sub_1800D1A24.c)
 *     sub_1800D1C40 @ 0x1800D1C40 (sub_1800D1C40.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1870(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int128 v9; // [rsp+28h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-29h]
  int v11; // [rsp+40h] [rbp-21h] BYREF
  __int64 v12; // [rsp+48h] [rbp-19h]
  __int64 v13[4]; // [rsp+50h] [rbp-11h] BYREF
  __int128 v14; // [rsp+70h] [rbp+Fh]
  __int128 v15; // [rsp+88h] [rbp+27h] BYREF

  v10 = -2LL;
  result = sub_1800641B0(a1, a2);
  v14 = 0LL;
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v5 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), result + 1, result) )
      {
        v6 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)&v14 = v6;
        result = *(_QWORD *)(a1 + 168);
        *((_QWORD *)&v14 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v6 = v14;
LABEL_3:
  if ( v6 )
  {
    v15 = 0uLL;
    sub_1800D0DB8(*a2, (__int64 *)&v15);
    v11 = *(_DWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a1 + 104);
    sub_1800D144C(v13, (__int64 *)(a1 + 112));
    v13[3] = *(_QWORD *)(a1 + 136);
    sub_1800D1C40(v15, *a2, &v11, v6);
    v9 = v15;
    v15 = 0uLL;
    result = sub_1800D1A24(a1, &v9);
    v7 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
    if ( *((_QWORD *)&v15 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v8 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return result;
}
