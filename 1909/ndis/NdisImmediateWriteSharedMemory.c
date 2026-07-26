/*
 * XREFs of NdisImmediateWriteSharedMemory @ 0x1C0081600
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00809C8 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 */

void __fastcall NdisImmediateWriteSharedMemory(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  ndisImmediateReadWriteSharedMemory(a1, a2, a3, a4, 0);
}
