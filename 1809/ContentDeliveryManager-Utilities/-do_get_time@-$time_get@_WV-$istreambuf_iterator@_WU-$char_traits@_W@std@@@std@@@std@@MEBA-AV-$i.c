/*
 * XREFs of ?do_get_time@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800A66B0
 * Callers:
 *     <none>
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180033670 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180034788 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180075004 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800A6C18 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_time(
        int a1,
        _OWORD *a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // r14
  int v15; // eax
  _DWORD *v16; // rbx
  bool v17; // zf
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<wchar_t>>(&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = a7;
  v15 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
          a1,
          (_DWORD)a3,
          a4,
          0,
          23,
          a7 + 8,
          (__int64)v12);
  v16 = a6;
  v17 = (v15 | *a6) == 0;
  *a6 |= v15;
  if ( v17
    && (v18 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3),
        (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
          v12,
          *v18,
          0LL) == 58) )
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              (_DWORD)a3,
              a4,
              0,
              59,
              v14 + 4,
              (__int64)v12);
  }
  else
  {
    *v16 |= 2u;
  }
  if ( *v16
    || (v19 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3),
        (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
          v12,
          *v19,
          0LL) != 58) )
  {
    *v16 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              (_DWORD)a3,
              a4,
              0,
              59,
              v14,
              (__int64)v12);
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
