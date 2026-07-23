/*
 * XREFs of ExpQueryModuleInformationEx @ 0x140749988
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExpConvertLdrEntryToModuleInfo @ 0x140749A88 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQueryModuleInformationEx(__int64 a1, _WORD *a2, unsigned int a3, unsigned int *a4)
{
  _WORD *v6; // rsi
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  PVOID *i; // r14
  unsigned int v11; // eax

  v6 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 2;
  if ( a3 < 2 )
  {
    if ( a4 )
      *a4 = 2;
    v8 = -1073741820;
  }
  else
  {
    *a2 = 0;
  }
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v11 = v9 + 320;
    if ( v9 + 320 < v9 )
      return 3221225473LL;
    v9 += 320;
    if ( a3 < v11 )
    {
      if ( a4 )
        *a4 = v11;
      v8 = -1073741820;
    }
    else
    {
      *v6 = 320;
      ExpConvertLdrEntryToModuleInfo(i, v7, v6);
      *((_DWORD *)v6 + 77) = 0;
      v6 += 160;
      *v6 = 0;
    }
    ++v7;
  }
  if ( a4 )
    *a4 = v9;
  return v8;
}
