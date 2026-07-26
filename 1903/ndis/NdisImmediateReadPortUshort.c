/*
 * XREFs of NdisImmediateReadPortUshort @ 0x1C0081360
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008068C (-ndisImmediateReadWritePort@@YAXPEAXK0KE@Z.c)
 */

void __fastcall NdisImmediateReadPortUshort(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  ndisImmediateReadWritePort(a1, a2, a3, 2u, 1u);
}
