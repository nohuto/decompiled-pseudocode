/*
 * XREFs of MiInitializeColorBaseSession @ 0x1400E7770
 * Callers:
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 */

unsigned __int8 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  __int64 SessionVm; // rax
  __int64 v2; // rdx
  int v3; // r9d

  SessionVm = MiGetSessionVm(a1);
  return MiInitializePageColorBase(SessionVm, v3, v2);
}
