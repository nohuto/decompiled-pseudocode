/*
 * XREFs of sub_180079F64 @ 0x180079F64
 * Callers:
 *     sub_180075824 @ 0x180075824 (sub_180075824.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006F588 @ 0x18006F588 (sub_18006F588.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180079F64(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r8
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]

  v1 = a1 + 288;
  v15 = 0LL;
  v16 = 0LL;
  sub_1800631C0(a1 + 312, &v15);
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = *(_QWORD **)(v1 + 8);
  v4 = *(_QWORD **)v1;
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v6 = v4[1];
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 8);
    else
      v7 = 0;
    if ( v7 )
    {
      if ( v2 == v5 )
      {
        sub_18006F588((__int64 *)&v13, v5, v4);
        v5 = (_QWORD *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        *v5 = 0LL;
        v5[1] = 0LL;
        v8 = v4[1];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
        *v5 = *v4;
        v5[1] = v4[1];
        v5 = (_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL);
        *((_QWORD *)&v13 + 1) += 16LL;
      }
      v2 = v14;
    }
    v4 += 2;
  }
  if ( (__int128 *)v1 != &v13 )
  {
    v9 = *(_QWORD **)v1;
    *(_QWORD *)v1 = v13;
    *(_QWORD *)&v13 = v9;
    v10 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 8) = v5;
    *((_QWORD *)&v13 + 1) = v10;
    v11 = *(_QWORD **)(v1 + 16);
    *(_QWORD *)(v1 + 16) = v2;
    v14 = v11;
  }
  result = sub_180063530((__int64 *)&v13);
  if ( (_BYTE)v16 )
    return sub_180063668(v15);
  return result;
}
