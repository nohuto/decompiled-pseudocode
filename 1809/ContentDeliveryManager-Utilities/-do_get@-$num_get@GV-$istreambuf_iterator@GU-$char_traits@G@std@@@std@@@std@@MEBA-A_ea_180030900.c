/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180030900
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180032320 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800366A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _Stoullx @ 0x1800AAFD0 (_Stoullx.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7)
{
  unsigned int v11; // eax
  __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  int v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-31h] BYREF

  v17[1] = -2LL;
  v15 = 0;
  v16 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v11 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          (unsigned int)v18,
          (_DWORD)a3,
          a4,
          *(_DWORD *)(a5 + 24),
          (__int64)&v16);
  v12 = Stoullx(v18, v17, v11, &v15);
  if ( v16 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( (_BYTE *)v17[0] == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  *a2 = *a3;
  return a2;
}
