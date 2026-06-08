/*
 * XREFs of DecodeAcpiTStates @ 0x1C0035C54
 * Callers:
 *     RegisterHvPerfStates @ 0x1C002F810 (RegisterHvPerfStates.c)
 * Callees:
 *     DecodeControlStatusRegisterIo @ 0x1C0035D7C (DecodeControlStatusRegisterIo.c)
 */

__int64 __fastcall DecodeAcpiTStates(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r10d
  int v9; // edx
  int v11; // esi
  char v12; // cl

  *a2 = 0LL;
  v7 = a1 + 464;
  *a3 = 0LL;
  v9 = (int)a6;
  v11 = (int)a3;
  *a4 = 0LL;
  *a6 = 0;
  *a5 = 0LL;
  *a7 = 0;
  v12 = *(_BYTE *)(a1 + 464);
  if ( v12 == 127 && (*(_DWORD *)(a1 + 264) & 0x2000000) != 0 && dword_1C001B590 )
  {
    *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
    *(_DWORD *)a2 = dword_1C001B590;
    *a4 = qword_1C001B598;
  }
  else if ( v12 == 1 && (*(_DWORD *)(a1 + 264) & 0x1100000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 468) )
    {
      LOBYTE(v9) = 1;
      DecodeControlStatusRegisterIo(v7, v9, (_DWORD)a2, (_DWORD)a4, (__int64)a6);
      if ( *(_BYTE *)(a1 + 476) == 1 )
      {
        if ( *(_DWORD *)(a1 + 480) )
          DecodeControlStatusRegisterIo(a1 + 476, 0, v11, (_DWORD)a5, (__int64)a7);
      }
    }
  }
  return *a2 == 0 ? 0xC000000D : 0;
}
