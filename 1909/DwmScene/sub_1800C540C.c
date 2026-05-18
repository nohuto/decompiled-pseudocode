/*
 * XREFs of sub_1800C540C @ 0x1800C540C
 * Callers:
 *     sub_1800C2A00 @ 0x1800C2A00 (sub_1800C2A00.c)
 * Callees:
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180083F00 @ 0x180083F00 (sub_180083F00.c)
 *     sub_180084118 @ 0x180084118 (sub_180084118.c)
 *     sub_1800BC95C @ 0x1800BC95C (sub_1800BC95C.c)
 *     sub_1800FE190 @ 0x1800FE190 (sub_1800FE190.c)
 *     sub_1800FE19C @ 0x1800FE19C (sub_1800FE19C.c)
 *     sub_1800FE1E8 @ 0x1800FE1E8 (sub_1800FE1E8.c)
 *     sub_1800FE1F4 @ 0x1800FE1F4 (sub_1800FE1F4.c)
 *     sub_1800FE200 @ 0x1800FE200 (sub_1800FE200.c)
 *     sub_1800FE20C @ 0x1800FE20C (sub_1800FE20C.c)
 *     sub_1800FE218 @ 0x1800FE218 (sub_1800FE218.c)
 *     sub_1800FE224 @ 0x1800FE224 (sub_1800FE224.c)
 *     sub_1800FE230 @ 0x1800FE230 (sub_1800FE230.c)
 *     sub_1800FE23C @ 0x1800FE23C (sub_1800FE23C.c)
 *     sub_1800FE244 @ 0x1800FE244 (sub_1800FE244.c)
 *     sub_1800FE250 @ 0x1800FE250 (sub_1800FE250.c)
 *     sub_1800FE25C @ 0x1800FE25C (sub_1800FE25C.c)
 *     sub_1800FE268 @ 0x1800FE268 (sub_1800FE268.c)
 *     sub_1800FE274 @ 0x1800FE274 (sub_1800FE274.c)
 *     sub_1800FE28C @ 0x1800FE28C (sub_1800FE28C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C540C(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  volatile signed __int32 *v46; // rbx
  __int64 v47; // rbx
  volatile signed __int32 *v48; // rbx
  signed __int32 v49; // eax
  __int64 v50; // [rsp+38h] [rbp-49h] BYREF
  volatile signed __int32 *v51; // [rsp+40h] [rbp-41h]
  __int128 v52; // [rsp+48h] [rbp-39h] BYREF
  __int64 v53; // [rsp+58h] [rbp-29h]
  __int128 v54; // [rsp+60h] [rbp-21h]
  __int64 v55; // [rsp+70h] [rbp-11h] BYREF
  volatile signed __int32 *v56; // [rsp+78h] [rbp-9h]
  int v57; // [rsp+80h] [rbp-1h] BYREF
  __m128 v58; // [rsp+90h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v53 = -2LL;
  v5 = *a2;
  if ( *(_BYTE *)(*a2 + 116LL) )
  {
    v55 = 0LL;
    v56 = 0LL;
    v52 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v5 = *a2;
      v6 = a2[1];
    }
    *(_QWORD *)&v52 = v5;
    *((_QWORD *)&v52 + 1) = v6;
    sub_180077710(a1, &v55, 0LL, &v52);
    result = sub_180077A8C(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = result;
    if ( v55 && (*(_DWORD *)(v55 + 440) & 0x2000000) != 0 )
    {
      (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)result + 168LL))(
        result,
        &unk_18025BDD8,
        v7,
        1LL);
      v9 = v55;
      v54 = 0LL;
      v10 = *(_QWORD *)(v55 + 64);
      if ( v10 )
      {
        while ( 1 )
        {
          v49 = *(_DWORD *)(v10 + 8);
          if ( !v49 )
            break;
          if ( v49 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v49 + 1, v49) )
          {
            v11 = *(_QWORD *)(v9 + 56);
            v54 = *(_OWORD *)(v9 + 56);
            goto LABEL_8;
          }
        }
      }
      v11 = v54;
LABEL_8:
      if ( v11 )
      {
        sub_180083F00(v11, (__int64)&v57);
        sub_180084118(v11, &v58);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BCF8,
          v12,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BD18,
          v13,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BD38,
          v14,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BD58,
          v15,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BD78,
          v16,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BD98,
          v17,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BDB8,
          v18,
          1LL);
      }
      v50 = 0LL;
      v51 = 0LL;
      result = (__int64)sub_1800BC95C(&v50, &v55);
      v19 = v50;
      if ( v50 )
      {
        v20 = *(_QWORD *)v8;
        sub_1800FE218(v50);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v20 + 168))(v8, &unk_18025BF18, v21, 1LL);
        v22 = *(_QWORD *)v8;
        sub_1800FE224(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v22 + 168))(v8, &unk_18025BEF8, v23, 1LL);
        sub_1800FE230(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BF58,
          v24,
          1LL);
        sub_1800FE20C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BF78,
          v25,
          1LL);
        sub_1800FE1E8(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BF38,
          v26,
          1LL);
        sub_1800FE244(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025BF98,
          v27,
          1LL);
        v28 = *(_QWORD *)v8;
        sub_1800FE25C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v28 + 168))(v8, &unk_18025BFB8, v29, 1LL);
        v30 = *(_QWORD *)v8;
        sub_1800FE250(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v30 + 168))(v8, &unk_18025BFD8, v31, 1LL);
        v32 = *(_QWORD *)v8;
        sub_1800FE274(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v32 + 168))(v8, &unk_18025C098, v33, 1LL);
        v34 = *(_QWORD *)v8;
        sub_1800FE268(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v34 + 168))(v8, &unk_18025C0B8, v35, 1LL);
        v36 = *(_QWORD *)v8;
        v37 = sub_1800FE19C(v19);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(v36 + 152))(v8, &unk_18025BED8, v37, 1LL);
        v38 = *(_QWORD *)v8;
        v39 = sub_1800FE23C(v19);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(v38 + 152))(v8, &unk_18025C0D8, v39, 1LL);
        v40 = *(_QWORD *)v8;
        LOBYTE(v41) = sub_1800FE28C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v40 + 144))(v8, &unk_18025C058, v41, 1LL);
        v42 = *(_QWORD *)v8;
        sub_1800FE1F4(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v42 + 168))(v8, &unk_18025C078, v43, 1LL);
        sub_1800FE200(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_18025C018,
          v44,
          1LL);
        sub_1800FE190(v19);
        result = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
                   v8,
                   &unk_18025BFF8,
                   v45,
                   1LL);
      }
      if ( v51 )
      {
        result = (unsigned int)_InterlockedDecrement(v51 + 2);
        if ( !(_DWORD)result )
        {
          v46 = v51;
          (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
          result = (unsigned int)_InterlockedDecrement(v46 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        }
      }
      if ( *((_QWORD *)&v54 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v47 = *((_QWORD *)&v54 + 1);
          (***((void (__fastcall ****)(_QWORD))&v54 + 1))(*((_QWORD *)&v54 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
        }
      }
    }
    v48 = v56;
    if ( v56 )
    {
      result = (unsigned int)_InterlockedDecrement(v56 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
        result = (unsigned int)_InterlockedDecrement(v48 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      }
    }
  }
  return result;
}
