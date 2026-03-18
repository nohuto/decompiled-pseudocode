/*
 * XREFs of PspComputeQuantum @ 0x14068E4CC
 * Callers:
 *     PspComputeQuantumAndPriority @ 0x14068E424 (PspComputeQuantumAndPriority.c)
 *     PsChangeQuantumTable @ 0x140744EEC (PsChangeQuantumTable.c)
 * Callees:
 *     <none>
 */

char __fastcall PspComputeQuantum(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 1119) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 952);
  if ( !v2 || !PspUseJobSchedulingClasses )
    return *((_BYTE *)&PspForegroundQuantum
           + (*(_DWORD *)((_BYTE *)&Mm64BitPhysicalAddress + 6) & (unsigned int)-(a2 != 0)));
  v4 = *(unsigned int *)(v2 + 852);
  if ( (unsigned int)v4 >= 0xA )
    v4 = *(unsigned int *)(v2 + 484);
  return *((_BYTE *)PspJobSchedulingClasses + v4);
}
