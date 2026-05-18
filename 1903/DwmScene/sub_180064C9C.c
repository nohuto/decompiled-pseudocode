/*
 * XREFs of sub_180064C9C @ 0x180064C9C
 * Callers:
 *     sub_180064AEC @ 0x180064AEC (sub_180064AEC.c)
 *     sub_1800DCAC0 @ 0x1800DCAC0 (sub_1800DCAC0.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_1800FAEC0 @ 0x1800FAEC0 (sub_1800FAEC0.c)
 *     sub_1800FB3B0 @ 0x1800FB3B0 (sub_1800FB3B0.c)
 *     sub_180100E30 @ 0x180100E30 (sub_180100E30.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_180065610 @ 0x180065610 (sub_180065610.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180064C9C(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v6; // r12d
  int v7; // r15d
  _QWORD *v9; // r13
  __int64 *v10; // rsi
  volatile signed __int32 *v11; // rbx
  _BYTE *v12; // rbx
  char v13; // bl
  __int64 *v14; // rsi
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  char result; // al
  _QWORD *v20; // rsi
  _QWORD *v21; // r14
  volatile signed __int32 *v22; // rbx
  void *v23; // rcx
  size_t Size; // [rsp+40h] [rbp-C0h]
  size_t Sizea; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v30; // [rsp+88h] [rbp-78h]
  __int64 v31[5]; // [rsp+90h] [rbp-70h] BYREF
  const void *Src; // [rsp+B8h] [rbp-48h] BYREF
  void *v33[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v35; // [rsp+F0h] [rbp-10h]
  _QWORD *v36; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  v31[4] = -2LL;
  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180015EA4(v9, &v27, 1u);
  v10 = (__int64 *)(a1 + 136);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 136), &v27);
  v11 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  sub_1800642F8(a1, v33);
  if ( !v34 )
  {
    if ( v35 < 0x11 )
    {
      sub_18000E118((__int64 *)v33, 0x11uLL, 0LL, "RenderTargetD3D11");
    }
    else
    {
      v12 = v33[0];
      v34 = 17LL;
      memmove(v33[0], "RenderTargetD3D11", 0x11uLL);
      v12[17] = 0;
    }
  }
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F3F4(v31, (__int64)v33);
  sub_1800644E4(*v10, v31);
  sub_180064574(*v10, 1, 0);
  sub_180064574(*v10, 2, 0);
  sub_180064574(*v10, 4, 0);
  sub_180064574(*v10, 8, 0);
  v13 = a5 & 0x7C | 3;
  LODWORD(Size) = 0;
  sub_18009DF60(*v10, v7, v6, 0, a4, 0, v13, 0LL, Size, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v14 = (__int64 *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      sub_180015EA4(v9, &v29, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 152), &v29);
      v15 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      v13 = a5 & 0x7C | 3;
    }
    v16 = (__int64 *)sub_18002BFD4(&Src, v33, " (staging)");
    sub_1800644E4(*v14, v16);
    sub_180064574(*v14, 1, 0);
    sub_180064574(*v14, 2, 0);
    sub_180064574(*v14, 4, 0);
    sub_180064574(*v14, 8, 0);
    LODWORD(Sizea) = 0;
    sub_18009DF60(*v14, v7, v6, 0, a4, 3, v13 & 0x7C | 0x80, 0LL, Sizea, 0LL);
  }
  v17 = 0LL;
  v17.m128_f32[0] = (float)v6;
  v18 = 0LL;
  v18.m128_f32[0] = (float)v7;
  sub_180065610(a1, _mm_unpacklo_ps(v18, v17).m128_u64[0]);
  if ( a6 )
    sub_180064574(a1, 1, 1);
  result = sub_180064320(a1, 1);
  if ( result )
  {
    if ( a6 )
    {
      sub_180065114(a1, a6);
      sub_180064574(a1, 2, 0);
      result = sub_180064574(a1, 4, 0);
    }
    else
    {
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      sub_18007B178(v9, &v36);
      v20 = v36;
      v21 = v37;
      while ( v20 != v21 )
      {
        v22 = (volatile signed __int32 *)v20[1];
        if ( v22 )
        {
          _InterlockedIncrement(v22 + 2);
          v22 = (volatile signed __int32 *)v20[1];
        }
        sub_180065114(a1, *v20);
        if ( v22 )
        {
          if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          }
        }
        v20 += 2;
      }
      result = sub_180011388((__int64 *)&v36);
    }
  }
  if ( v35 >= 0x10 )
  {
    v23 = v33[0];
    if ( v35 + 1 >= 0x1000 )
    {
      v23 = (void *)*((_QWORD *)v33[0] - 1);
      if ( (unsigned __int64)((char *)v33[0] - (char *)v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, v35 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v23);
  }
  return result;
}
