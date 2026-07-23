/*
 * XREFs of MiCreateVsmEnclave @ 0x14085B008
 * Callers:
 *     MiCreateEnclave @ 0x14085AD08 (MiCreateEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     PsCreateVsmEnclave @ 0x14088EDFC (PsCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateVsmEnclave(__int64 a1, _DWORD *a2)
{
  ULONG_PTR *ProcessPartition; // rax
  _BYTE *v5; // r8
  unsigned int v6; // r9d
  int v7; // r10d
  __int64 v8; // r11
  ULONG_PTR v9; // rdx
  BOOL v10; // ebx
  __int64 result; // rax

  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( ProcessPartition == &MiSystemPartition )
    LODWORD(v9) = 0;
  else
    v9 = ProcessPartition[21];
  v10 = 0;
  if ( v6 >= 4 )
    v10 = (*v5 & 1) != 0;
  result = PsCreateVsmEnclave(
             a1,
             v9,
             a2[6] << 12,
             ((a2[7] << 12) | 0xFFFu) - (a2[6] << 12) + 1,
             v8,
             v7,
             (__int64)(a2 + 18));
  if ( (int)result >= 0 )
  {
    if ( v10 )
    {
      a2[16] |= 4u;
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1296) + 232LL), 1u);
    }
    return 0LL;
  }
  return result;
}
