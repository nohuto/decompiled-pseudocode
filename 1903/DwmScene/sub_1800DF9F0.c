/*
 * XREFs of sub_1800DF9F0 @ 0x1800DF9F0
 * Callers:
 *     sub_1800E0648 @ 0x1800E0648 (sub_1800E0648.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DF9F0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IndexBufferState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *(_BYTE *)(a1 + 68) = 1;
  std::shared_ptr<__ExceptionPtr>::operator=(v4, (_QWORD *)(a2 + 1120));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 1136);
  return a1;
}
