/*
 * XREFs of ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAG@Z @ 0x1800B3B20
 * Callers:
 *     <none>
 * Callees:
 *     _Stoulx @ 0x1800AE5E0 (_Stoulx.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B26C0 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5464 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _WORD *a7)
{
  int v11; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char *v13; // rdi
  unsigned int v14; // ebx
  int v16; // [rsp+30h] [rbp-51h] BYREF
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  char *v18[2]; // [rsp+40h] [rbp-41h] BYREF
  char v19; // [rsp+50h] [rbp-31h] BYREF
  char v20; // [rsp+51h] [rbp-30h] BYREF

  v18[1] = (char *)-2LL;
  v16 = 0;
  v17 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v11 = std::num_get<char,std::istreambuf_iterator<char>>::_Getifld(a1, &v19, a3, a4, *(_DWORD *)(a5 + 24), &v17);
  if ( v17 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v13 = &v20;
  if ( v19 != 45 )
    v13 = &v19;
  v14 = Stoulx(v13, v18, v11, &v16);
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v18[0] == v13 || v16 || v14 > 0xFFFF )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v19 == 45 )
      LOWORD(v14) = -(__int16)v14;
    *a7 = v14;
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
