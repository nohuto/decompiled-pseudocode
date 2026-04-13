/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x180091490
 * Callers:
 *     <none>
 * Callees:
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800371A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x1800929EC (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     _Stoullx @ 0x1800AEF50 (_Stoullx.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7)
{
  unsigned int v11; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  int v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-30h] BYREF

  v17[1] = -2LL;
  v15 = 0;
  v16 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v11 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
          a1,
          (unsigned int)v18,
          (_DWORD)a3,
          (_DWORD)a4,
          2048,
          (__int64)&v16);
  if ( v16 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v13 = Stoullx(v18, v17, v11, &v15);
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( (_BYTE *)v17[0] == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *(_OWORD *)a3;
  return a2;
}
