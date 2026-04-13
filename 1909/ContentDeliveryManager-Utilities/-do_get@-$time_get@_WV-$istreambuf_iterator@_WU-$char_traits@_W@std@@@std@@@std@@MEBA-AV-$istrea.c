/*
 * XREFs of ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800A9A40
 * Callers:
 *     <none>
 * Callees:
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800375E4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800769E8 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800AAC78 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?_Getfmt@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800AAE40 (-_Getfmt@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEBA-AV-$istre.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800AB164 (--$_Getloctxt@DV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YAHAEAV-$istreambuf_i.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        char a8)
{
  __int64 v12; // r13
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r15
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _DWORD *v16; // rbx
  _DWORD *v17; // rax
  int v18; // r9d
  const char *v19; // rax
  __int128 *v20; // r9
  __int128 *v21; // r8
  __int128 *v22; // rdx
  int v23; // ecx
  int v24; // ecx
  __int128 v25; // xmm0
  void (__fastcall *v26)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *); // rax
  __int128 v27; // xmm0
  int v28; // ecx
  __int128 v29; // xmm1
  int v30; // ecx
  int v31; // eax
  int v33; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-50h]
  __int128 v36; // [rsp+50h] [rbp-30h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h] BYREF
  __int128 v38; // [rsp+70h] [rbp-10h] BYREF

  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  a5 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<wchar_t>>(&a5);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  LODWORD(a5) = 0;
  v16 = a6;
  if ( a8 <= 97 )
  {
    if ( a8 == 97 )
      goto LABEL_36;
    if ( a8 <= 82 )
    {
      if ( a8 == 82 )
      {
        v37 = *(_OWORD *)a4;
        v36 = *(_OWORD *)a3;
        v19 = "%H : %M";
        v20 = &v37;
        v21 = &v36;
LABEL_21:
        v22 = &v38;
LABEL_56:
        v25 = *(_OWORD *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getfmt(
                           a1,
                           (_DWORD)v22,
                           (_DWORD)v21,
                           (_DWORD)v20,
                           v12,
                           (__int64)a6,
                           (__int64)a7,
                           (__int64)v19);
        goto LABEL_38;
      }
      if ( a8 != 65 )
      {
        if ( a8 != 66 )
        {
          if ( a8 != 67 )
          {
            if ( a8 != 68 )
            {
              switch ( a8 )
              {
                case 'H':
                  v35 = (__int64)v14;
                  v34 = (__int64)(a7 + 2);
                  v33 = 23;
                  goto LABEL_19;
                case 'I':
                  v35 = (__int64)v14;
                  v34 = (__int64)(a7 + 2);
                  v33 = 11;
                  goto LABEL_19;
                case 'M':
                  v17 = a7 + 1;
LABEL_16:
                  v35 = (__int64)v14;
                  v34 = (__int64)v17;
                  v33 = 59;
LABEL_19:
                  v18 = 0;
LABEL_53:
                  *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                            a1,
                            (_DWORD)a3,
                            (_DWORD)a4,
                            v18,
                            v33,
                            v34,
                            v35);
                  goto LABEL_75;
              }
              goto LABEL_73;
            }
            v36 = *(_OWORD *)a4;
            v37 = *(_OWORD *)a3;
            v19 = "%m / %d / %y";
            v20 = &v36;
            v21 = &v37;
            goto LABEL_21;
          }
          v23 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  0,
                  99,
                  (__int64)&a5,
                  (__int64)v14) | *v16;
          *v16 = v23;
          if ( (v23 & 2) != 0 )
            goto LABEL_75;
          v24 = 100 * (a5 - 19);
LABEL_24:
          a7[5] = v24;
          goto LABEL_75;
        }
        goto LABEL_57;
      }
LABEL_36:
      v26 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 48LL);
LABEL_37:
      v27 = *(_OWORD *)a4;
      v37 = *(_OWORD *)a3;
      v38 = v27;
      v26(a1, &v36, &v37, &v38, v12, a6, a7);
      v25 = v36;
      goto LABEL_38;
    }
    if ( a8 == 83 )
    {
      v17 = a7;
      goto LABEL_16;
    }
    if ( a8 != 84 )
    {
      if ( a8 == 85 || a8 == 87 )
      {
        v35 = (__int64)v14;
        v34 = (__int64)(a7 + 7);
        v33 = 53;
        goto LABEL_19;
      }
      if ( a8 != 88 )
      {
        if ( a8 == 89 )
        {
          v37 = *(_OWORD *)a4;
          v36 = *(_OWORD *)a3;
          (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 64LL))(
            a1,
            &v38,
            &v36,
            &v37,
            v12,
            a6,
            a7);
          v25 = v38;
LABEL_38:
          *(_OWORD *)a3 = v25;
          goto LABEL_75;
        }
LABEL_73:
        *v16 |= 2u;
        goto LABEL_75;
      }
    }
    v19 = "%H : %M : S";
    goto LABEL_55;
  }
  if ( a8 > 110 )
  {
    if ( a8 == 112 )
    {
      v31 = std::_Getloctxt<char,std::istreambuf_iterator<wchar_t>>(a3, a4, 0LL, ":AM:am:PM:pm");
      if ( v31 < 0 )
        goto LABEL_73;
      a7[2] += 12 * v31;
      goto LABEL_75;
    }
    if ( a8 == 114 )
    {
      v19 = "%I : %M : %S %p";
      goto LABEL_55;
    }
    if ( a8 != 116 )
    {
      if ( a8 == 119 )
      {
        v35 = (__int64)v14;
        v34 = (__int64)(a7 + 6);
        v33 = 6;
        goto LABEL_19;
      }
      if ( a8 != 120 )
      {
        if ( a8 == 121 )
        {
          v30 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  0,
                  99,
                  (__int64)&a5,
                  (__int64)v14) | *v16;
          *v16 = v30;
          if ( (v30 & 2) != 0 )
            goto LABEL_75;
          v24 = a5;
          if ( (int)a5 < 69 )
            v24 = a5 + 100;
          goto LABEL_24;
        }
        goto LABEL_73;
      }
      v19 = "%d / %m / %y";
LABEL_55:
      v29 = *(_OWORD *)a3;
      v38 = *(_OWORD *)a4;
      v37 = v29;
      v20 = &v38;
      v21 = &v37;
      v22 = &v36;
      goto LABEL_56;
    }
LABEL_70:
    v19 = " ";
    goto LABEL_55;
  }
  switch ( a8 )
  {
    case 'n':
      goto LABEL_70;
    case 'b':
      goto LABEL_57;
    case 'c':
      v19 = "%b %d %H : %M : %S %Y";
      goto LABEL_55;
  }
  if ( a8 <= 99 )
    goto LABEL_73;
  if ( a8 <= 101 )
  {
    v35 = (__int64)v14;
    v34 = (__int64)(a7 + 3);
    v33 = 31;
    goto LABEL_52;
  }
  if ( a8 == 104 )
  {
LABEL_57:
    v26 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 56LL);
    goto LABEL_37;
  }
  if ( a8 == 106 )
  {
    v35 = (__int64)v14;
    v34 = (__int64)(a7 + 7);
    v33 = 366;
LABEL_52:
    v18 = 1;
    goto LABEL_53;
  }
  if ( a8 != 109 )
    goto LABEL_73;
  v28 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
          a1,
          (_DWORD)a3,
          (_DWORD)a4,
          1,
          12,
          (__int64)&a5,
          (__int64)v14) | *v16;
  *v16 = v28;
  if ( (v28 & 2) == 0 )
    a7[4] = a5 - 1;
LABEL_75:
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v16 |= 1u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
