/*
 * XREFs of KeFreeCalloutStack @ 0x14072D4B0
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P)
{
  __int64 v1; // rdi
  char i; // bp

  v1 = 0LL;
  for ( i = P[4] != 0; (unsigned int)v1 < (unsigned __int8)P[5]; v1 = (unsigned int)(v1 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&P[8 * v1 + 64], i);
    *(_QWORD *)&P[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
