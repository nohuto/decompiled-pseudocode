/*
 * XREFs of sub_18002AA74 @ 0x18002AA74
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002AA74(PUNICODE_STRING a1, int a2, __int64 a3, int a4, __int64 a5, char **a6, __int64 a7)
{
  char **v7; // rbx
  int v8; // r10d
  int v10; // esi
  int v12; // ebp
  _UNICODE_STRING *v13; // rdx
  int v14; // eax
  int v15; // edi
  char v17; // al
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v7 = a6;
  v8 = 0;
  LODWORD(v19) = 0;
  v10 = a3;
  v12 = (int)a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    v13 = a1;
    a1 = 0LL;
LABEL_4:
    v14 = sub_180022698(a1, v13, a3, (__int64)v7, &v19);
    v8 = v19;
    v15 = v14;
    goto LABEL_5;
  }
  v15 = -1073741515;
LABEL_5:
  if ( v15 == -1073741515 )
  {
    v15 = sub_18002AB70(v12, a2, v10, a4, a5, (__int64)v7, a7);
    if ( v15 >= 0 )
      return (unsigned int)sub_180029560(*((_BYTE **)*v7 + 22));
  }
  else if ( v8 < 0 )
  {
    v17 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v18 = *(_OWORD *)(*v7 + 72);
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        2945,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v18,
        v8);
      v17 = dword_18015FAB0;
    }
    if ( (v17 & 0x10) != 0 )
      __debugbreak();
    v15 = -1073741595;
    sub_18001B678(*v7);
    *v7 = 0LL;
  }
  else
  {
    sub_18002228C((__int64)*v7);
  }
  return (unsigned int)v15;
}
