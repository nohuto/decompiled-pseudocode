/*
 * XREFs of sub_180104E74 @ 0x180104E74
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800B8D08 @ 0x1800B8D08 (sub_1800B8D08.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     sub_180106284 @ 0x180106284 (sub_180106284.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     floorf @ 0x18012720A (floorf.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180104E74(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rbx
  float v7; // xmm0_4
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rax
  _QWORD v24[4]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v26[3]; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+1Fh]

  v5 = a2[2];
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    sub_18000E498(v24);
    v23 = sub_18000E498(v26);
    sub_180027770(pExceptionObject, v23, 172, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = o_cbrtf();
  v8 = floorf(v7);
  v9 = 0LL;
  if ( v8 >= 9.223372e18 )
  {
    v8 = v8 - 9.223372e18;
    if ( v8 < 9.223372e18 )
      v9 = 0x8000000000000000uLL;
  }
  v10 = v9 + (unsigned int)(int)v8;
  if ( v10 * v10 * v10 != v6 )
  {
    sub_18000E498(v26);
    v22 = sub_18000E498(v24);
    sub_180027770(pExceptionObject, v22, 181, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v10;
  v11 = (__int64 *)(a3 + 8);
  result = sub_180103640((__int64 *)(a3 + 8), v5 / 6);
  *(_DWORD *)(a3 + 32) = 0;
  v13 = 0LL;
  if ( v6 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      v26[2] = 0LL;
      v27 = 15LL;
      LOBYTE(v26[0]) = 0;
      sub_1800B8D08(v26, a2, v15, 6uLL);
      v16 = sub_180106284(v26, 0LL, 16LL);
      v17 = (float)HIBYTE(v16) / 255.0;
      v18 = (float)BYTE2(v16) / 255.0;
      v19 = (float)BYTE1(v16) / 255.0;
      v20 = (float)(unsigned __int8)v16 / 255.0;
      result = *v11;
      *(float *)(v14 + result) = v18;
      *(float *)(v14 + result + 4) = v19;
      *(float *)(v14 + result + 8) = v20;
      *(float *)(v14 + result + 12) = v17;
      if ( v27 >= 0x10 )
      {
        v21 = v26[0];
        if ( v27 + 1 >= 0x1000 )
        {
          v21 = *(_QWORD *)(v26[0] - 8);
          if ( (unsigned __int64)(v26[0] - v21 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v21, v27 + 40);
            __debugbreak();
          }
        }
        result = j_j__o_free(v21);
      }
      ++v13;
      v15 += 6LL;
      v14 += 16LL;
    }
    while ( v13 < v6 );
  }
  return result;
}
