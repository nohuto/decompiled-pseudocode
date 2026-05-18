/*
 * XREFs of sub_1800DE9B8 @ 0x1800DE9B8
 * Callers:
 *     sub_1800E0648 @ 0x1800E0648 (sub_1800E0648.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DE9B8(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rsi

  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  v4 = 15LL;
  `eh vector constructor iterator'(
    (void *)(a1 + 8),
    0x10uLL,
    0xFuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  `eh vector constructor iterator'(
    (void *)(a1 + 248),
    0x10uLL,
    0xFuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  v5 = (_QWORD *)(a1 + 488);
  `eh vector constructor iterator'(
    (void *)(a1 + 488),
    0x10uLL,
    0xFuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  *(_BYTE *)(a1 + 1088) = 1;
  do
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v5, (_QWORD *)((char *)v5 + a2 - (a1 + 488) + 760));
    v5 += 2;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)(a1 + 848) = *(_OWORD *)(a2 + 1000);
  *(_OWORD *)(a1 + 864) = *(_OWORD *)(a2 + 1016);
  *(_OWORD *)(a1 + 880) = *(_OWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a2 + 1048);
  *(_DWORD *)(a1 + 904) = *(_DWORD *)(a2 + 1056);
  *(_OWORD *)(a1 + 1028) = *(_OWORD *)(a2 + 1060);
  *(_OWORD *)(a1 + 1044) = *(_OWORD *)(a2 + 1076);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a2 + 1092);
  *(_QWORD *)(a1 + 1076) = *(_QWORD *)(a2 + 1108);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1116);
  return a1;
}
