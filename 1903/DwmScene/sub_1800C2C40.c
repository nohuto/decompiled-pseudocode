/*
 * XREFs of sub_1800C2C40 @ 0x1800C2C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_1800779BC @ 0x1800779BC (sub_1800779BC.c)
 *     sub_180077CCC @ 0x180077CCC (sub_180077CCC.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_1800A4A38 @ 0x1800A4A38 (sub_1800A4A38.c)
 *     sub_1800A9974 @ 0x1800A9974 (sub_1800A9974.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 *     sub_1800C6254 @ 0x1800C6254 (sub_1800C6254.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800CA5C0 @ 0x1800CA5C0 (sub_1800CA5C0.c)
 *     sub_180114E54 @ 0x180114E54 (sub_180114E54.c)
 *     sub_180115050 @ 0x180115050 (sub_180115050.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C2C40(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  char v15; // al
  char v16; // bl
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // eax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int128 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  char v27; // [rsp+76h] [rbp-8Ah]
  __m128i si128; // [rsp+78h] [rbp-88h]
  __int64 v29[3]; // [rsp+88h] [rbp-78h] BYREF
  size_t v30[4]; // [rsp+A0h] [rbp-60h] BYREF
  size_t v31[5]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v37; // [rsp+110h] [rbp+10h]
  _BYTE v38[64]; // [rsp+120h] [rbp+20h] BYREF

  v31[4] = -2LL;
  memset(v38, 0, sizeof(v38));
  v23 = 0LL;
  v8 = *(_QWORD *)(a1 + 472);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v23 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v23 + 1) = v8;
  sub_180114E54(
    (unsigned int)v38,
    (unsigned int)&v23,
    (unsigned int)"..\\Source\\Engine\\ViewerEngine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene",
    1);
  memset(v29, 0, sizeof(v29));
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v26) = 0;
  si128.m128i_i64[0] = 14LL;
  memmove(&v26, "PreRenderScene", 0xEuLL);
  v27 = 0;
  v9 = sub_1800779BC(a1, &v32);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v24 = *v9;
  v25 = v10;
  sub_180073974(v29, &v24, (__int64)&v26);
  if ( v25 && _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
  v11 = v33;
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v26;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v26 - 8);
      if ( (unsigned __int64)(v26 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v26) = 0;
  v13 = sub_18007797C(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_1800CA5C0(a1, *a3, *a4, v13);
  LOBYTE(v14) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v13 + 64LL))(v13, &unk_18025B158, v14);
  v16 = v15;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_18025B178);
  LOBYTE(v17) = v16;
  sub_1800C3634(a1, a2, v17);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1457) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(
                            v13,
                            &unk_18025B118,
                            0LL);
  sub_1800C6254(a1);
  sub_1800C58F8(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_1800C80F8(a1, a3, a4, a2);
  v18 = sub_180078118(a1);
  v36 = 0LL;
  v37 = 0LL;
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18000F3F4(v30, (__int64)&qword_18025D5D0);
  sub_1800A4A38(v18, &v36, v30);
  sub_1800A9974(v36, &qword_18025C618, *(_BYTE *)(a1 + 1457));
  v34 = 0LL;
  v35 = 0LL;
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F3F4(v31, (__int64)&qword_18025D618);
  sub_1800A4A38(v18, &v34, v31);
  sub_1800A9974(v34, &qword_18025C618, *(_BYTE *)(a1 + 1457));
  v19 = sub_180077CCC(a1, a3);
  sub_1800C9428(a1, a2, v19, a4);
  v20 = v35;
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  sub_180074840(v29);
  return sub_180115050(v38);
}
