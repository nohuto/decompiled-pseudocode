/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C007F068
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C025A144 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  __int64 result; // rax

  v6 = *a1;
  if ( (!v6
     || *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6)
     && (v6 == *a2 || a4 && abs64(*a2 - v6) == 36000000000LL || gbGUISetup))
    && ((a2[5] & 0x10) != 0 || (a1[5] & 0x10) == 0) )
  {
    v7 = 1;
    if ( a3 == 1 )
      a1[2] = a2[2];
    else
      a1[1] = a2[1];
    v8 = *((_DWORD *)a1 + 10);
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *a1 = *a2;
    a1[4] = a2[4];
    a1[6] = a2[6];
    v9 = *((_DWORD *)a1 + 10) ^ (*((_DWORD *)a2 + 10) ^ v8) & 4 | 1;
    *((_DWORD *)a1 + 10) = v9;
    v10 = v9 ^ (*((_DWORD *)a2 + 10) ^ v9) & 8;
    *((_DWORD *)a1 + 10) = v10;
    v11 = v10 ^ (*((_DWORD *)a2 + 10) ^ v10) & 0x10;
    *((_DWORD *)a1 + 10) = v11;
    v12 = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 0x20;
    *((_DWORD *)a1 + 10) = v12;
    a1[9] = a2[9];
  }
  else
  {
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
    v12 = *((_DWORD *)a1 + 10);
    v7 = 0;
  }
  result = v7;
  *((_DWORD *)a1 + 10) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
