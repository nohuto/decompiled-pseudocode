/*
 * XREFs of sub_1800C22B0 @ 0x1800C22B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_18001DA04 @ 0x18001DA04 (sub_18001DA04.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_1800781B8 @ 0x1800781B8 (sub_1800781B8.c)
 *     sub_180078214 @ 0x180078214 (sub_180078214.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C22B0(__int64 a1, int a2)
{
  __int64 v4; // r14
  void **v5; // rdx
  void **v6; // rcx
  char *v7; // rbx
  size_t v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  char *v17; // rax
  __int16 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int16 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v27; // [rsp+90h] [rbp-78h]
  __int64 v28; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v29; // [rsp+A0h] [rbp-68h]
  void *Buf1[2]; // [rsp+A8h] [rbp-60h] BYREF
  size_t Size[2]; // [rsp+B8h] [rbp-50h]
  _QWORD v32[3]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v35[4]; // [rsp+108h] [rbp+0h] BYREF

  v25 = -2LL;
  v4 = sub_180077A8C(a1, a2);
  v20 = 0LL;
  v21 = 7LL;
  v19 = 0;
  sub_180026278((char *)&v19, &unk_1801F5798, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, void *, __int16 *))(*(_QWORD *)v4 + 96LL))(v4, v35, &unk_18025B438, &v19);
  sub_18001DA04(Buf1);
  v5 = &qword_18025E888;
  if ( *((_QWORD *)&xmmword_18025E898 + 1) >= 0x10uLL )
    v5 = (void **)qword_18025E888;
  v6 = Buf1;
  v7 = (char *)Buf1[0];
  v8 = Size[1];
  if ( Size[1] >= 0x10 )
    v6 = (void **)Buf1[0];
  if ( Size[0] == (_QWORD)xmmword_18025E898 && !memcmp(v6, v5, Size[0]) )
  {
    v28 = 0LL;
    v29 = 0LL;
    sub_1800781B8(a1, &v28, 0);
    v9 = 0;
    if ( (int)sub_180078214(a1) > 0 )
    {
      while ( 1 )
      {
        v26 = 0LL;
        v27 = 0LL;
        sub_1800781B8(a1, &v26, v9);
        if ( *(_DWORD *)(v26 + 112) == a2 )
          break;
        v11 = v27;
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        if ( ++v9 >= (int)sub_180078214(a1) )
          goto LABEL_19;
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v28, &v26);
      v12 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
LABEL_19:
    v13 = sub_1800BB1FC(v28, v10);
    v23 = 0LL;
    v24 = 7LL;
    v22 = 0;
    sub_180026278((char *)&v22, &unk_1801F579C, 0LL);
    (*(void (__fastcall **)(__int64, __int64 *, void *, __int16 *))(*(_QWORD *)v4 + 96LL))(
      v4,
      v34,
      &unk_18025B418,
      &v22);
    if ( v34[2] )
    {
      sub_18001DA04(v32);
      v14 = v32;
      if ( v33 >= 0x10 )
        v14 = (_QWORD *)v32[0];
      sub_1801049A4(*(_QWORD *)(v13 + 120), v14, v32[2], Buf1);
      if ( v33 >= 0x10 )
      {
        v15 = v32[0];
        if ( v33 + 1 >= 0x1000 )
        {
          v15 = *(_QWORD *)(v32[0] - 8LL);
          if ( (unsigned __int64)(v32[0] - v15 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, v33 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v15);
      }
    }
    unknown_libname_116(v34);
    v16 = v29;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v7 = (char *)Buf1[0];
    v8 = Size[1];
  }
  if ( v8 >= 0x10 )
  {
    v17 = v7;
    if ( v8 + 1 >= 0x1000 )
    {
      v7 = (char *)*((_QWORD *)v7 - 1);
      if ( (unsigned __int64)(v17 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v7);
  }
  *(__m128i *)Size = _mm_load_si128(xmmword_180145F90);
  LOBYTE(Buf1[0]) = 0;
  return unknown_libname_116(v35);
}
