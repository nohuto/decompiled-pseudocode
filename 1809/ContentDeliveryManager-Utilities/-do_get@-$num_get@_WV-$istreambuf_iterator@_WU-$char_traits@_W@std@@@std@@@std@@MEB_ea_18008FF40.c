/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x18008FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800366A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x180090BC8 (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     _Stoulx @ 0x1800AA4D0 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v11; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char *v13; // rdi
  int v14; // ebx
  int v16; // [rsp+30h] [rbp-51h] BYREF
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-41h] BYREF
  char v19; // [rsp+50h] [rbp-31h] BYREF
  char v20; // [rsp+51h] [rbp-30h] BYREF

  v18[1] = -2LL;
  v16 = 0;
  v17 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v11 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
          a1,
          (unsigned int)&v19,
          (_DWORD)a3,
          (_DWORD)a4,
          *(_DWORD *)(a5 + 24),
          (__int64)&v17);
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
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( (char *)v18[0] == v13 || v16 )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v19 == 45 )
      v14 = -v14;
    *a7 = v14;
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
