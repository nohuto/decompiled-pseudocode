/*
 * XREFs of MiClearVadBits @ 0x140025F60
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 * Callees:
 *     MiClearVadCellBits @ 0x140067560 (MiClearVadCellBits.c)
 */

__int64 __fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v8; // rbp
  unsigned int i; // edi
  __int64 result; // rax

  v4 = a3;
  v5 = a1 >> 16;
  v6 = a2 >> 16;
  if ( a3
    && ((a1 ^ ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    LODWORD(v5) = v5 + 1;
  }
  if ( a4
    && ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    result = (unsigned int)(v6 - 1);
    if ( !(_DWORD)v6 )
      return result;
    LODWORD(v6) = v6 - 1;
  }
  v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
  for ( i = 0; i < 3; ++i )
  {
    result = MiClearVadCellBits((unsigned int)v8 + 56 * i, v5, v6, v4, a4);
    if ( (_DWORD)result )
      break;
  }
  return result;
}
