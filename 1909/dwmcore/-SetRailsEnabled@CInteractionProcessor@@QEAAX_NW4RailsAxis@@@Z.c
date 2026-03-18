/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1800CB400
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, __int64 a3)
{
  char v3; // r9
  char v4; // al
  char v5; // r9
  char v6; // al
  char v7; // r9
  char v8; // al
  __int64 v9; // r8
  char result; // al
  char v11; // r8
  char v12; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr, a3);
    if ( a1[148] >> 7 != a2 )
    {
      v3 = a1[148] & 0x7E;
      v4 = a2 << 7;
LABEL_5:
      a1[148] = v4 | v3 | 1;
    }
  }
  else if ( ((a1[148] & 0x40) != 0) != a2 )
  {
    v3 = a1[148] & 0xBF;
    v4 = a2 << 6;
    goto LABEL_5;
  }
  if ( (_DWORD)a3 )
  {
    if ( a1[308] >> 7 == a2 )
      goto LABEL_10;
    v5 = a1[308] & 0x7E;
    v6 = a2 << 7;
    goto LABEL_9;
  }
  if ( ((a1[308] & 0x40) != 0) != a2 )
  {
    v5 = a1[308] & 0xBF;
    v6 = a2 << 6;
LABEL_9:
    a1[308] = v6 | v5 | 1;
  }
LABEL_10:
  if ( (_DWORD)a3 )
  {
    if ( a1[468] >> 7 == a2 )
      goto LABEL_14;
    v7 = a1[468] & 0x7E;
    v8 = a2 << 7;
    goto LABEL_13;
  }
  if ( ((a1[468] & 0x40) != 0) != a2 )
  {
    v7 = a1[468] & 0xBF;
    v8 = a2 << 6;
LABEL_13:
    a1[468] = v8 | v7 | 1;
  }
LABEL_14:
  if ( (_DWORD)a3 )
  {
    v9 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v9 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr, v9);
    result = a1[628] >> 7;
    if ( result != a2 )
    {
      v11 = a1[628] & 0x7E;
      v12 = a2 << 7;
LABEL_18:
      a1[628] = v12 | v11 | 1;
    }
  }
  else
  {
    result = (a1[628] & 0x40) != 0;
    if ( result != a2 )
    {
      v11 = a1[628] & 0xBF;
      v12 = a2 << 6;
      goto LABEL_18;
    }
  }
  return result;
}
