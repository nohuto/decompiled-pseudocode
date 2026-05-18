/*
 * XREFs of sub_1800DE7C8 @ 0x1800DE7C8
 * Callers:
 *     sub_1800E0648 @ 0x1800E0648 (sub_1800E0648.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DE7C8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = (_QWORD *)(a1 + 40);
  *v3 = 0LL;
  v3[1] = 0LL;
  *(_BYTE *)(a1 + 56) = 1;
  std::shared_ptr<__ExceptionPtr>::operator=(v3, (_QWORD *)(a2 + 704));
  return a1;
}
