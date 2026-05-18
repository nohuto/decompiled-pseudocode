/*
 * XREFs of sub_180075500 @ 0x180075500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006E930 @ 0x18006E930 (sub_18006E930.c)
 *     sub_180075270 @ 0x180075270 (sub_180075270.c)
 *     sub_1800835B4 @ 0x1800835B4 (sub_1800835B4.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180075500(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v13; // [rsp+28h] [rbp-69h] BYREF
  __int128 v14; // [rsp+38h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  char v16; // [rsp+55h] [rbp-3Ch]
  __m128i si128; // [rsp+58h] [rbp-39h]
  __int64 Src; // [rsp+68h] [rbp-29h] BYREF
  char v19; // [rsp+75h] [rbp-1Ch]
  __int64 v20; // [rsp+78h] [rbp-19h]
  unsigned __int64 v21; // [rsp+80h] [rbp-11h]
  _QWORD v22[5]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+1Fh] BYREF
  volatile signed __int32 *v24; // [rsp+B8h] [rbp+27h]
  __int64 v25; // [rsp+C0h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+C8h] [rbp+37h]

  v22[4] = -2LL;
  v25 = 0LL;
  v26 = 0LL;
  sub_180063178(*a2 + 16, &v25);
  v23 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&v14 = v22;
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v15) = 0;
  si128.m128i_i64[0] = 13LL;
  memmove(&v15, "DefaultCamera", 0xDuLL);
  v16 = 0;
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18001110C(v22, (__int64)&unk_1802587E8);
  v4 = *a2;
  v5 = sub_1800835B4(&v15);
  sub_180089A38(v4, &v23, v5, v22);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v15;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v15 - 8);
      if ( (unsigned __int64)(v15 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v15) = 0;
  v13 = 0uLL;
  sub_18006E930(v23, &v13);
  v21 = 15LL;
  LOBYTE(Src) = 0;
  v20 = 13LL;
  memmove(&Src, "DefaultCamera", 0xDuLL);
  v19 = 0;
  v7 = v13;
  sub_180011714((__int64 *)(v13 + 24), &Src);
  if ( v21 >= 0x10 )
  {
    v8 = Src;
    if ( v21 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(Src - 8);
      if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v21 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  *(_BYTE *)(v7 + 72) = 0;
  v14 = 0LL;
  v9 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    v9 = *((_QWORD *)&v13 + 1);
  }
  v14 = v13;
  result = sub_180075270(a1, &v14);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v12 = v24;
  if ( v24 )
  {
    result = (unsigned int)_InterlockedDecrement(v24 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( (_BYTE)v26 )
    return sub_180063668(v25);
  return result;
}
