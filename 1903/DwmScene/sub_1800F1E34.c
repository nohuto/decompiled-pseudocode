/*
 * XREFs of sub_1800F1E34 @ 0x1800F1E34
 * Callers:
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093DA8 @ 0x180093DA8 (sub_180093DA8.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A35D4 @ 0x1800A35D4 (sub_1800A35D4.c)
 *     sub_1800F164C @ 0x1800F164C (sub_1800F164C.c)
 *     sub_1800F18A8 @ 0x1800F18A8 (sub_1800F18A8.c)
 *     sub_1800F2908 @ 0x1800F2908 (sub_1800F2908.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800F1E34(__int64 a1, size_t *a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  const void **v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  _QWORD v25[4]; // [rsp+38h] [rbp-C8h] BYREF
  const void *Src[5]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int16 v30; // [rsp+E0h] [rbp-20h]
  unsigned int v31; // [rsp+E4h] [rbp-1Ch]
  int v32; // [rsp+E8h] [rbp-18h]
  unsigned int v33; // [rsp+ECh] [rbp-14h]
  int v34; // [rsp+F0h] [rbp-10h]

  Src[4] = (const void *)-2LL;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000E498(v25);
    v16 = sub_18000E498(Src);
    sub_180027770(v28, v16, 586, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  if ( !a2[2] )
  {
    sub_18000E498(Src);
    v17 = sub_18000E498(v25);
    sub_180027770(v28, v17, 589, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  if ( (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL == 512 )
  {
    sub_18000E498(Src);
    v18 = sub_18000E498(v25);
    sub_180027770(v28, v18, 592, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  v8 = (unsigned __int16)sub_1800A35D4(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v8 + 128) != 0xFFFF )
  {
    v19 = sub_18009FB30(Src, "ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v20 = sub_18002BF78((__int64)v28, v19, "' is already defined");
    v21 = sub_18000E498(v25);
    sub_180027770(pExceptionObject, v21, 598, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
  {
    sub_18000E498(Src);
    v22 = sub_18000E498(v25);
    sub_180027770(pExceptionObject, v22, 601, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = 1;
  if ( a4 <= 1 )
  {
    sub_18000E498(Src);
    v23 = sub_18000E498(v25);
    sub_180027770(pExceptionObject, v23, 604, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800F2908(a1);
  v10 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( a3 > 2 )
  {
    switch ( a3 )
    {
      case 3u:
        v9 = 2;
        break;
      case 4u:
        v9 = 3;
        break;
      case 5u:
      case 6u:
        v9 = 4;
        break;
      case 7u:
        v9 = 16;
        break;
      default:
        v9 = 0;
        break;
    }
  }
  v11 = v10 + v9 * a4;
  if ( v11 > 0x4064 )
  {
    sub_18000E498(Src);
    v15 = sub_18000E498(v25);
    sub_180027770(pExceptionObject, v15, 614, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v29 = 0LL;
  sub_18000F3F4(v28, (__int64)a2);
  v30 = v8;
  v31 = a3;
  v32 = v10;
  v33 = a4;
  v34 = 0;
  v12 = (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL;
  sub_1800F18A8((_QWORD *)(a1 + 56), (__int64)v28);
  *(_WORD *)(a1 + 2LL * (unsigned __int16)v8 + 128) = v12;
  sub_1800F164C(a1 + 80, v11);
  if ( *((_QWORD *)&v29 + 1) >= 0x10uLL )
  {
    v13 = v28[0];
    if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) + 1LL) >= 0x1000 )
    {
      v13 = *(_QWORD *)(v28[0] - 8LL);
      if ( (unsigned __int64)(v28[0] - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, *((_QWORD *)&v29 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return (unsigned __int16)v8;
}
