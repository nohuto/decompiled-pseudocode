/*
 * XREFs of sub_180043040 @ 0x180043040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     sub_180042520 @ 0x180042520 (sub_180042520.c)
 *     sub_180042614 @ 0x180042614 (sub_180042614.c)
 *     sub_1800427E4 @ 0x1800427E4 (sub_1800427E4.c)
 *     sub_180042DA4 @ 0x180042DA4 (sub_180042DA4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180043040(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // rcx
  const char *v9; // rbx
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  char *v14; // rax
  unsigned __int64 v15; // rdx
  char *String[2]; // [rsp+38h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-88h]
  _OWORD v22[22]; // [rsp+90h] [rbp-70h] BYREF

  si128 = _mm_load_si128(xmmword_180144F90);
  v6 = 0;
  LOBYTE(String[0]) = 0;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_180042DA4((__int64)&v18, (__int64 **)(a1 + 112));
      sub_180042614(a1, a2, v18, (v19 - v18) >> 5, a3);
      sub_180017CD4(String, (__int64)v20);
      sub_180042520(&v18);
    }
  }
  else
  {
    sub_1800427E4((__int64)&v18, *(_QWORD *)(a1 + 104), v22);
    sub_180042614(a1, a2, (__int64)v22, v18, a3);
    sub_180017CD4(String, (__int64)&v19);
    if ( v21 >= 0x10 )
    {
      v8 = v19;
      if ( v21 + 1 >= 0x1000 )
      {
        v8 = *(_QWORD *)(v19 - 8);
        if ( (unsigned __int64)(v19 - v8 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v8, v21 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v8);
    }
  }
  v9 = (const char *)String;
  v10 = String[0];
  v11 = si128.m128i_u64[1];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v9 = String[0];
  v12 = *(_QWORD *)(a1 + 144);
  if ( v12 )
  {
    if ( v9 )
      v6 = strnlen(v9, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v12 + 40LL))(v12, &unk_180210200, v6, v9);
    v11 = si128.m128i_u64[1];
    v10 = String[0];
  }
  if ( v11 >= 0x10 )
  {
    v13 = v11 + 1;
    v14 = v10;
    if ( v13 >= 0x1000 )
    {
      v15 = v13 + 39;
      v10 = (char *)*((_QWORD *)v10 - 1);
      if ( (unsigned __int64)(v14 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v15);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
}
