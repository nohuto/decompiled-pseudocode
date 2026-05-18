/*
 * XREFs of sub_180122910 @ 0x180122910
 * Callers:
 *     sub_180122740 @ 0x180122740 (sub_180122740.c)
 *     sub_180122910 @ 0x180122910 (sub_180122910.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180122910 @ 0x180122910 (sub_180122910.c)
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 *     sub_1801247B8 @ 0x1801247B8 (sub_1801247B8.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180122910(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  v13[4] = -2LL;
  v4 = sub_1801247B8(a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  v5 = 0;
  LOWORD(v14[0]) = 0;
  sub_180026278((char *)v14, L"Value", 5uLL);
  if ( !v4 )
  {
    v11 = 4;
    goto LABEL_14;
  }
  v6 = v4 - 1;
  if ( !v6 )
  {
    v11 = 2;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = 1;
    goto LABEL_14;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v11 = 3;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    v9 = v14;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = (__int64 *)v14[0];
    if ( (unsigned __int8)sub_1801247BC(a2, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001115C(v13, (__int64)v14);
      v10 = sub_180124658(a2, v13);
      v11 = sub_180122910(a1, v10);
LABEL_14:
      v5 = v11;
    }
  }
  unknown_libname_116(v14);
  return v5;
}
