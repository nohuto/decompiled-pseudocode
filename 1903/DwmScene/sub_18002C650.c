/*
 * XREFs of sub_18002C650 @ 0x18002C650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EE28 @ 0x18000EE28 (sub_18000EE28.c)
 *     sub_180017164 @ 0x180017164 (sub_180017164.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_1800299C8 @ 0x1800299C8 (sub_1800299C8.c)
 *     sub_18002CFB8 @ 0x18002CFB8 (sub_18002CFB8.c)
 *     sub_18003167C @ 0x18003167C (sub_18003167C.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_180065548 @ 0x180065548 (sub_180065548.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18002C650(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // r13d
  int v7; // r12d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  bool v13; // di
  int v14; // edx
  __int64 v15; // r14
  __int64 **v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v33; // [rsp+48h] [rbp-B8h]
  __int64 v34[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  _QWORD v37[3]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h]
  _DWORD v43[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+DCh] [rbp-24h]
  _BYTE v45[20]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v46; // [rsp+FCh] [rbp-4h]

  v36 = -2LL;
  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  sub_18002CFB8(a1, v7, v6, a4, a5);
  v42 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v42 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v32 = 0LL;
  v33 = 0LL;
  if ( *((_QWORD *)&v42 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 1u);
  v35 = v42;
  sub_180017164(&v32, (__int64 *)&v35);
  v41 = 0LL;
  v11 = v32;
  sub_18002317C(v32, &v41);
  v30 = 0LL;
  v31 = 0LL;
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v12 = *(_QWORD *)(a1 + 104);
    v11 = v32;
  }
  v34[0] = *(_QWORD *)(a1 + 96);
  v34[1] = v12;
  sub_180017164(&v30, v34);
  v40 = 0LL;
  sub_18003167C(v30, &v40);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v40 + 80LL))(v40, v45);
  v13 = v46 > 1;
  v44 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v14 = 2;
  else
    v14 = (a5 & 8) != 0;
  v43[0] = sub_1800299C8(a4, v14);
  v43[1] = 2 * v13 + 4;
  v43[2] = 0;
  v39 = 0LL;
  sub_18003167C(v30, &v39);
  v15 = v41;
  v16 = (__int64 **)(a1 + 128);
  v17 = *(_QWORD *)(a1 + 128);
  if ( v17 )
  {
    *v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v15 + 72LL))(
          v15,
          v39,
          v43,
          a1 + 128);
  sub_1800253B0(v11, v18);
  v19 = sub_1800642F8(a1, v37);
  if ( *(_QWORD *)(v19 + 24) >= 0x10uLL )
    v19 = *(_QWORD *)v19;
  sub_18000EE28(*v16, (const char *)v19);
  if ( v38 >= 0x10 )
  {
    v20 = v37[0];
    if ( v38 + 1 >= 0x1000 )
    {
      v20 = *(_QWORD *)(v37[0] - 8LL);
      if ( (unsigned __int64)(v37[0] - v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v38 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v20);
  }
  v21 = 0LL;
  v21.m128_f32[0] = (float)v6;
  v22 = 0LL;
  v22.m128_f32[0] = (float)v7;
  result = sub_180065548(a1, _mm_unpacklo_ps(v22, v21).m128_u64[0]);
  v24 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      v26 = v31;
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v26 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  v27 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( v33 )
  {
    result = (unsigned int)_InterlockedDecrement(v33 + 2);
    if ( !(_DWORD)result )
    {
      v28 = v33;
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  if ( *((_QWORD *)&v42 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v29 = *((_QWORD *)&v42 + 1);
      (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
    }
  }
  return result;
}
