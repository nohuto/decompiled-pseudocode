/*
 * XREFs of MiAdvanceToLastUntrimmableVa @ 0x1401B4EC4
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140070670 (MiComputePxeWalkAction.c)
 * Callees:
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 */

unsigned __int64 __fastcall MiAdvanceToLastUntrimmableVa(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 Address; // r10
  unsigned __int64 v3; // r11
  _QWORD **v4; // rax
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rcx

  v1 = 0;
  Address = MiLocateAddress(a1);
  while ( Address )
  {
    if ( (((*(_DWORD *)(Address + 48) & 7) - 1) & 0xFFFFFFF9) != 0 )
      break;
    ++v1;
    v3 = ((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12) | 0xFFF;
    if ( v1 > 0x100 )
      break;
    v4 = *(_QWORD ***)(Address + 8);
    v5 = Address;
    if ( v4 )
    {
      v6 = *v4;
      for ( Address = *(_QWORD *)(Address + 8); v6; v6 = (_QWORD *)*v6 )
        Address = (unsigned __int64)v6;
    }
    else
    {
      while ( 1 )
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Address || *(_QWORD *)Address == v5 )
          break;
        v5 = Address;
      }
    }
  }
  return v3;
}
