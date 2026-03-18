/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0122B48
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C011F680 (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0122650 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02859A0 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v8; // r9
  unsigned int v9; // r8d
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // r9d
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx

  v6 = *a1;
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
      goto LABEL_14;
    v8 = *a2;
    if ( v6 != *a2 )
    {
      if ( !a4 )
        goto LABEL_13;
      v15 = v8 - v6;
      v16 = v6 - v8;
      if ( v15 >= 0 )
        v16 = v15;
      if ( v16 != 36000000000LL )
      {
LABEL_13:
        if ( !gbGUISetup )
          goto LABEL_14;
      }
    }
  }
  if ( (a2[5] & 0x10) != 0 || (a1[5] & 0x10) == 0 )
  {
    v9 = 1;
    if ( a3 == 1 )
      a1[2] = a2[2];
    else
      a1[1] = a2[1];
    v10 = *((_DWORD *)a1 + 10);
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *a1 = *a2;
    a1[4] = a2[4];
    a1[6] = a2[6];
    v11 = *((_DWORD *)a1 + 10) ^ (*((_DWORD *)a2 + 10) ^ v10) & 4 | 1;
    *((_DWORD *)a1 + 10) = v11;
    v12 = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 8;
    *((_DWORD *)a1 + 10) = v12;
    v13 = v12 ^ (*((_DWORD *)a2 + 10) ^ v12) & 0x10;
    *((_DWORD *)a1 + 10) = v13;
    a1[9] = a2[9];
  }
  else
  {
LABEL_14:
    if ( a3 == 1 )
    {
      --*((_DWORD *)a1 + 25);
      a1[2] = 0LL;
    }
    else
    {
      --*((_DWORD *)a1 + 24);
      a1[1] = 0LL;
    }
    *((_DWORD *)a1 + 10) &= ~1u;
    v13 = *((_DWORD *)a1 + 10);
    v9 = 0;
  }
  result = v9;
  *((_DWORD *)a1 + 10) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
