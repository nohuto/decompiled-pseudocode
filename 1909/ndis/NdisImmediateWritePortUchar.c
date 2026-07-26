/*
 * XREFs of NdisImmediateWritePortUchar @ 0x1C0081570
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008085C (-ndisImmediateReadWritePort@@YAXPEAXK0KE@Z.c)
 */

void __fastcall NdisImmediateWritePortUchar(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisImmediateReadWritePort(a1, a2, &v3, 1u, 0);
}
