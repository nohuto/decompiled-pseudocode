/*
 * XREFs of NdisImmediateWritePortUshort @ 0x1C0081400
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008068C (-ndisImmediateReadWritePort@@YAXPEAXK0KE@Z.c)
 */

void __fastcall NdisImmediateWritePortUshort(_QWORD *a1, unsigned int a2, __int16 a3)
{
  __int16 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisImmediateReadWritePort(a1, a2, (unsigned __int8 *)&v3, 2u, 0);
}
