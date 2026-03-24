/*
 * XREFs of MiInitializeColorBaseSession @ 0x1400E76F0
 * Callers:
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x1400E945C (MiGetSessionVm.c)
 */

unsigned __int8 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  __int64 SessionVm; // rax
  __int64 v2; // rdx
  int v3; // r9d

  SessionVm = MiGetSessionVm(a1);
  return MiInitializePageColorBase(SessionVm, v3, v2);
}
