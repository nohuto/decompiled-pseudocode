/*
 * XREFs of sub_180010DE0 @ 0x180010DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180010DE0(__int64 a1, int *a2, unsigned int *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  signed __int32 v8; // eax
  int v9; // eax
  int v10; // xmm8_4
  int v11; // xmm7_4
  int v12; // xmm6_4
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __m128 v16; // xmm1
  __int64 v17; // rbx
  __int64 v19; // [rsp+28h] [rbp-39h] BYREF
  int v20; // [rsp+30h] [rbp-31h]
  unsigned __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-21h]
  unsigned int v23; // [rsp+50h] [rbp-11h]
  __int64 v24; // [rsp+58h] [rbp-9h]
  __int128 v25; // [rsp+60h] [rbp-1h]
  __int64 v26; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+78h] [rbp+17h]

  v24 = -2LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v25 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v25 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    v26 = 0LL;
    v27 = 0LL;
    sub_1800631C0(v25 + 16, &v26);
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 == 2 || v9 == 3 )
    {
      v10 = a2[2];
      v11 = a2[1];
      v12 = *a2;
      v13 = *(_QWORD *)(a1 + 16);
      sub_180087414(v13);
      *(_DWORD *)(v13 + 144) = v12;
      *(_DWORD *)(v13 + 148) = v11;
      *(_DWORD *)(v13 + 152) = v10;
      v14 = _InterlockedIncrement64(&qword_180258748);
      *(_QWORD *)(v13 + 208) = v14;
      v15 = *(_QWORD *)(v13 + 216);
      if ( v14 >= v15 )
        v15 = v14;
      *(_QWORD *)(v13 + 216) = v15;
      v9 = *(_DWORD *)(a1 + 48);
    }
    if ( ((v9 - 1) & 0xFFFFFFFD) == 0 )
    {
      v19 = qword_18025DF28;
      v20 = dword_18025DF30;
      v16 = (__m128)a3[1];
      v23 = a3[2];
      v21 = _mm_unpacklo_ps((__m128)*a3, v16).m128_u64[0];
      v22 = v23;
      sub_1800847E4(*(_QWORD *)(a1 + 16), &v21, &v19);
    }
    if ( (_BYTE)v27 )
      sub_180063668(v26);
    if ( *((_QWORD *)&v25 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v17 = *((_QWORD *)&v25 + 1);
        (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
      }
    }
  }
  return 0LL;
}
