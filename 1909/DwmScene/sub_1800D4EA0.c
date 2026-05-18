/*
 * XREFs of sub_1800D4EA0 @ 0x1800D4EA0
 * Callers:
 *     sub_1800D5008 @ 0x1800D5008 (sub_1800D5008.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002565C @ 0x18002565C (sub_18002565C.c)
 *     sub_1800D4E24 @ 0x1800D4E24 (sub_1800D4E24.c)
 *     sub_1800D63F8 @ 0x1800D63F8 (sub_1800D63F8.c)
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800D4EA0(_QWORD *a1, __int64 a2)
{
  _OWORD *v4; // rax
  signed int v5; // edi
  _QWORD *v6; // r14
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v10; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+48h] [rbp-40h]
  _QWORD *v13; // [rsp+A0h] [rbp+18h] BYREF

  sub_18011E188(a1);
  v13 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v4 = operator new(0x10uLL);
  a1[1] = v4;
  v12 = 0LL;
  *v4 = 0LL;
  *(_QWORD *)a1[1] = a1 + 1;
  v13 = a1 + 6;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[6] = sub_18002565C();
  `eh vector constructor iterator'(
    a1 + 8,
    0x10uLL,
    5uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  v5 = 0;
  v6 = a1 + 18;
  do
  {
    v7 = sub_1800D4E24(&v10, a2);
    std::shared_ptr<__ExceptionPtr>::operator=(&a1[2 * v5 + 8], v7);
    v8 = v11;
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    *v6 = 0LL;
    v13 = (_QWORD *)v5;
    sub_1800D63F8(a1 + 1, &v13);
    ++v5;
    ++v6;
  }
  while ( (unsigned int)v5 < 5 );
  return a1;
}
