/*
 * XREFs of sub_180104BBC @ 0x180104BBC
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_1800B7914 @ 0x1800B7914 (sub_1800B7914.c)
 *     sub_1800B7B48 @ 0x1800B7B48 (sub_1800B7B48.c)
 *     sub_1800B7E10 @ 0x1800B7E10 (sub_1800B7E10.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180104BBC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 i; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // al
  int v14; // eax
  _BYTE *v15; // rax
  _QWORD *v16; // rax
  char *v17; // rax
  char *v18; // rcx
  char *v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  float v25; // xmm2_4
  float v26; // xmm1_4
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+2Ch] [rbp-D4h] BYREF
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h]
  _BYTE v35[240]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v33 = 0LL;
  v34 = 15LL;
  LOBYTE(v32[0]) = 0;
  for ( i = a2 + *(int *)(*(_QWORD *)a2 + 4LL); ; i = v4 + *(int *)(*(_QWORD *)v4 + 4LL) )
  {
    LOBYTE(a2) = 10;
    v9 = std::ios::widen(i, a2);
    v10 = sub_1800B7914(v4, v32, v9);
    result = std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL));
    if ( !(_BYTE)result )
      break;
    if ( v33 )
    {
      v12 = (unsigned __int8 *)v32;
      a2 = v32[0];
      if ( v34 >= 0x10 )
        v12 = (unsigned __int8 *)v32[0];
      if ( v33 != 1 || ((v13 = *v12, v13 != 13) ? (v14 = v13 < 0xDu ? -1 : 1) : (v14 = 0), v14) )
      {
        v15 = v32;
        if ( v34 >= 0x10 )
          v15 = (_BYTE *)v32[0];
        if ( *v15 != 35 )
        {
          if ( v5 )
          {
            memset(v35, 0, sizeof(v35));
            sub_1800B7B48((__int64)v35, (__int64)v32, 1, 1);
            v23 = std::istream::operator>>(v35, &v31);
            v24 = std::istream::operator>>(v23, &v30);
            std::istream::operator>>(v24, &v29);
            v25 = (float)v29;
            v26 = (float)v30;
            v27 = *(_QWORD *)(a3 + 8) + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            *(float *)v27 = (float)v31;
            *(float *)(v27 + 4) = v26;
            *(float *)(v27 + 8) = v25;
            *(_DWORD *)(v27 + 12) = 1065353216;
            ++v7;
            sub_1800B7E10((__int64)&v35[144]);
            result = std::ios::~ios<char,std::char_traits<char>>(&v35[144]);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v16 = v32;
            if ( v34 >= 0x10 )
              v16 = (_QWORD *)v32[0];
            v17 = (char *)v16 + v33;
            v18 = (char *)v32;
            if ( v34 >= 0x10 )
              v18 = (char *)v32[0];
            v19 = v18;
            v20 = 0LL;
            v21 = v17 - v18;
            if ( v18 > v17 )
              v21 = 0LL;
            if ( v21 )
            {
              do
              {
                v22 = v20 + 1;
                if ( *v19 != 32 )
                  v22 = v20;
                v20 = v22;
                ++v19;
              }
              while ( v19 - v18 != v21 );
            }
            v5 = v20 + 1;
            v6 = v5 * v5 * v5;
            sub_180103640((__int64 *)(a3 + 8), v6);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  if ( v34 >= 0x10 )
  {
    v28 = v32[0];
    if ( v34 + 1 >= 0x1000 )
    {
      v28 = *(_QWORD *)(v32[0] - 8LL);
      if ( (unsigned __int64)(v32[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v34 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v28);
  }
  return result;
}
