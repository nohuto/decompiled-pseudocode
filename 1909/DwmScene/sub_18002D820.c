/*
 * XREFs of sub_18002D820 @ 0x18002D820
 * Callers:
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 * Callees:
 *     sub_18002DD48 @ 0x18002DD48 (sub_18002DD48.c)
 *     sub_18002DDDC @ 0x18002DDDC (sub_18002DDDC.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18002D820(_QWORD *a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // ebx
  unsigned int v21; // ebx
  int v22; // r8d
  __int64 *v23; // rax
  char v24; // si
  __int64 v25; // r15
  __int64 v26; // rbx
  _DWORD *v27; // rcx
  int v28; // eax
  int v30; // [rsp+40h] [rbp-31h] BYREF
  __int64 v31; // [rsp+48h] [rbp-29h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-21h] BYREF
  int v33; // [rsp+58h] [rbp-19h]
  _QWORD v34[2]; // [rsp+60h] [rbp-11h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-1h] BYREF
  int v36; // [rsp+78h] [rbp+7h] BYREF

  v34[1] = -2LL;
  v32 = a1;
  v36 = a3;
  v33 = 0;
  sub_180030FD4(&v31, (unsigned int)a5[4]);
  if ( HIDWORD(v31) == 1 )
    v9 = a2 | 8;
  else
    v9 = a2 & 0xFFFFFFF7;
  v10 = a5[6];
  v11 = v9 & 0xFFFFFFFE;
  v12 = v9 | 1;
  if ( (v10 & 8) == 0 )
    v12 = v11;
  v13 = v12 & 0xFFFFFFFD;
  v14 = v12 | 2;
  if ( (v10 & 0x20) == 0 )
    v14 = v13;
  v15 = v14 & 0xFFFFFFFB;
  v16 = v14 | 4;
  if ( (v10 & 0x40) == 0 )
    v16 = v15;
  v17 = v16 & 0xFFFFFFEF;
  v18 = v16 | 0x10;
  if ( (a5[8] & 4) == 0 )
    v18 = v17;
  v19 = v18 & 0xFFFFFFDF;
  v20 = v18 | 0x20;
  if ( (a5[8] & 1) == 0 )
    v20 = v19;
  if ( a4 <= 1 )
    v21 = v20 & 0xFFFFFFBF;
  else
    v21 = v20 | 0x40;
  v35 = v21;
  v22 = (_DWORD)a5 + 4;
  v30 = a5[5];
  if ( a3 )
  {
    v23 = (__int64 *)sub_18002DD48(
                       (unsigned int)v34,
                       (_DWORD)a5,
                       v22,
                       (unsigned int)&v36,
                       (__int64)&v31,
                       (__int64)&v35,
                       (__int64)&v30);
    v24 = 2;
  }
  else
  {
    v23 = (__int64 *)sub_18002DDDC(
                       (unsigned int)&v32,
                       (_DWORD)a5,
                       v22,
                       (unsigned int)&v31,
                       (__int64)&v35,
                       (__int64)&v30);
    v24 = 1;
  }
  v25 = *v23;
  *v23 = 0LL;
  v26 = v25;
  v31 = v25;
  if ( (v24 & 2) != 0 )
  {
    v24 &= ~2u;
    if ( v34[0] )
      j__o_free(v34[0]);
  }
  if ( (v24 & 1) != 0 && v32 )
    j__o_free(v32);
  v27 = operator new(0x10uLL);
  v32 = v27;
  if ( v27 )
  {
    v28 = a5[3];
    v26 = 0LL;
    *(_QWORD *)v27 = v25;
    v27[2] = v28;
    v27[3] = a4;
  }
  else
  {
    v27 = 0LL;
  }
  *a1 = v27;
  if ( v26 )
    j__o_free(v26);
  return a1;
}
