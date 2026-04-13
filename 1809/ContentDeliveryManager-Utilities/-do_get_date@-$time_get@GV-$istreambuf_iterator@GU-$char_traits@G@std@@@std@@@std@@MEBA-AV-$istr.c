/*
 * XREFs of ?do_get_date@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800BD5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180033670 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180034788 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18003496C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800366A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800A6C18 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  struct std::_Facet_base *v13; // r12
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // r13d
  char v16; // al
  _DWORD *v17; // rsi
  unsigned __int16 *v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rbx
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rax
  __int64 v27; // rbx
  _DWORD *v28; // rbx
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int16 *v33; // rax
  unsigned __int16 *v34; // rax
  void (__fastcall *v35)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64); // rax
  _DWORD *v36; // rbx
  __int128 v37; // xmm1
  _OWORD *result; // rax
  __int64 v39; // [rsp+30h] [rbp-50h]
  __int128 v40; // [rsp+50h] [rbp-30h] BYREF
  __int128 v41; // [rsp+60h] [rbp-20h] BYREF
  __int128 v42; // [rsp+70h] [rbp-10h] BYREF
  __int64 v43; // [rsp+C0h] [rbp+40h] BYREF
  _OWORD *v44; // [rsp+C8h] [rbp+48h]

  v44 = a2;
  v10 = **(_QWORD **)(a5 + 64);
  v43 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v13 = std::use_facet<std::ctype<unsigned short>>(&v43);
  if ( v10 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = v14;
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)a1 + 24LL))(
          a1,
          v11,
          v12);
  if ( !v15 )
    v15 = 2;
  v16 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
  v17 = a6;
  if ( v16 )
    goto LABEL_11;
  v18 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
          v13,
          4LL,
          *v18) )
  {
    v40 = *(_OWORD *)a4;
    v41 = *(_OWORD *)a3;
    v19 = a7;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      &v42,
      &v41,
      &v40,
      a5,
      v17,
      a7);
    *(_OWORD *)a3 = v42;
    v15 = 2;
    goto LABEL_17;
  }
  v19 = a7;
  if ( v15 == 2 )
  {
    v20 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              a3,
              a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              (__int64)v13);
    --*v20;
LABEL_11:
    v19 = a7;
    goto LABEL_17;
  }
  if ( v15 == 1 )
  {
    *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              a3,
              a4,
              1,
              31,
              (_DWORD *)(a7 + 12),
              (__int64)v13);
  }
  else
  {
    v42 = *(_OWORD *)a4;
    v41 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
      a1,
      &v40,
      &v41,
      &v42,
      a5,
      v17,
      a7);
    *(_OWORD *)a3 = v40;
  }
LABEL_17:
  while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v21 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
            v13,
            72LL,
            *v21) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    goto LABEL_24;
  v22 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  v23 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(v13, *v22, 0LL);
  if ( (unsigned __int8)v23 > 0x3Au )
    goto LABEL_24;
  v24 = 0x400900000000000LL;
  if ( !_bittest64(&v24, v23) )
    goto LABEL_24;
  do
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_24:
    if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
      break;
    v25 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  }
  while ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
            v13,
            72LL,
            *v25) );
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    goto LABEL_34;
  v26 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
         v13,
         4LL,
         *v26) )
  {
    if ( ((v15 - 1) & 0xFFFFFFFD) != 0 )
    {
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(v19 + 12),
                (__int64)v13);
    }
    else
    {
      v28 = (_DWORD *)(v19 + 16);
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                v28,
                (__int64)v13);
      --*v28;
    }
    goto LABEL_34;
  }
  if ( v15 == 2 )
  {
    *v17 |= 2u;
LABEL_34:
    v27 = a5;
    goto LABEL_37;
  }
  v42 = *(_OWORD *)a4;
  v41 = *(_OWORD *)a3;
  v39 = v19;
  v27 = a5;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    &v40,
    &v41,
    &v42,
    a5,
    v17,
    v39);
  *(_OWORD *)a3 = v40;
  if ( v15 == 4 )
    v15 = 3;
LABEL_37:
  while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v29 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
            v13,
            72LL,
            *v29) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    goto LABEL_44;
  v30 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(v13, *v30, 0LL);
  if ( (unsigned __int8)v31 > 0x3Au )
    goto LABEL_44;
  v32 = 0x400900000000000LL;
  if ( !_bittest64(&v32, v31) )
    goto LABEL_44;
  do
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_44:
    if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
      break;
    v33 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  }
  while ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
            v13,
            72LL,
            *v33) );
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    goto LABEL_46;
  v34 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
         v13,
         4LL,
         *v34) )
  {
    if ( v15 == 4 )
    {
      v36 = (_DWORD *)(a7 + 16);
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                (__int64)v13);
      --*v36;
      goto LABEL_56;
    }
    if ( v15 == 3 )
    {
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                (__int64)v13);
      goto LABEL_56;
    }
    v35 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL);
  }
  else
  {
    if ( v15 != 4 )
    {
LABEL_46:
      *v17 |= 2u;
      goto LABEL_56;
    }
    v35 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL);
  }
  v37 = *(_OWORD *)a3;
  v42 = *(_OWORD *)a4;
  v41 = v37;
  v35(a1, &v40, &v41, &v42, v27, v17, a7);
  *(_OWORD *)a3 = v40;
LABEL_56:
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v17 |= 1u;
  result = v44;
  *v44 = *(_OWORD *)a3;
  return result;
}
