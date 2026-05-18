/*
 * XREFs of sub_1800DEF18 @ 0x1800DEF18
 * Callers:
 *     sub_1800E0758 @ 0x1800E0758 (sub_1800E0758.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DEF18(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  `eh vector constructor iterator'(
    (void *)(a1 + 8),
    0xC0uLL,
    6uLL,
    (void (*)(void *))sub_180020160,
    (void (*)(void *))sub_180020570);
  `eh vector constructor iterator'(
    (void *)(a1 + 1160),
    0xC0uLL,
    6uLL,
    (void (*)(void *))sub_180020160,
    (void (*)(void *))sub_180020570);
  `eh vector constructor iterator'(
    (void *)(a1 + 2312),
    0xC0uLL,
    6uLL,
    (void (*)(void *))sub_180020160,
    (void (*)(void *))sub_180020570);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0LL;
  do
  {
    v7 = *(_DWORD *)(a1 + 3464);
    if ( _bittest(&v7, v6) )
    {
      v8 = (_QWORD *)(192 * v6 + a1 + 2312);
      v9 = a3 - (_QWORD)v8;
      v10 = 12LL;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v8, (_QWORD *)((char *)v8 + v9));
        v8 += 2;
        --v10;
      }
      while ( v10 );
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 6 );
  return a1;
}
