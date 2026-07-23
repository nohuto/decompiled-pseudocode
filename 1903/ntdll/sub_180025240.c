/*
 * XREFs of sub_180025240 @ 0x180025240
 * Callers:
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 * Callees:
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     sub_180025788 @ 0x180025788 (sub_180025788.c)
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 *     sub_180029974 @ 0x180029974 (sub_180029974.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_180025240(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  bool v5; // zf
  int v8; // ebx
  char v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  unsigned __int64 v13; // rdx
  _WORD *j; // rcx
  unsigned __int64 v15; // rdx
  _WORD *k; // rcx
  int v18; // eax
  const char *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-38h]
  char v21; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v8 = sub_1800253F0(a3, a1, a3, a2, &v21);
    if ( v8 < 0 )
      goto LABEL_23;
    v9 = v21;
  }
  v10 = a1;
  if ( !*a2 )
  {
    v11 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(*a1 + v11 - 2); (unsigned __int64)i >= v11; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        if ( (unsigned int)sub_18002891C(a1) != 5 )
        {
          v8 = sub_180029974(a1, a2);
          if ( v8 >= 0 )
            *a4 |= 0x600u;
          goto LABEL_12;
        }
LABEL_11:
        v8 = sub_180025788(a2, a1, a3, a4);
        goto LABEL_12;
      }
    }
    *a4 |= 0x20u;
    goto LABEL_11;
  }
  if ( (dword_18015FAB0 & 5) != 0 )
  {
    v19 = "SxS";
    if ( !v9 )
      v19 = "API set";
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2680,
      (unsigned int)"LdrpPreprocessDllName",
      2,
      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
      a1,
      a2,
      v19);
  }
  v18 = *a4 | 0x200;
  *a4 = v18;
  if ( v9 )
    *a4 = v18 | 4;
  v10 = a2;
LABEL_12:
  if ( v8 >= 0 )
  {
    v13 = *((_QWORD *)v10 + 1);
    for ( j = (_WORD *)(*v10 + v13 - 2); ; --j )
    {
      if ( (unsigned __int64)j < v13 )
      {
LABEL_29:
        v8 = sub_180025788(a2, &Extension, a3, a4);
        goto LABEL_23;
      }
      if ( *j == 46 )
        break;
      if ( *j == 47 || *j == 92 )
        goto LABEL_29;
    }
    v15 = *((_QWORD *)a2 + 1);
    for ( k = (_WORD *)(*a2 + v15 - 2); (unsigned __int64)k >= v15 && *k == 46; --k )
      *a2 -= 2;
    k[1] = 0;
LABEL_23:
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    LODWORD(v20) = v8;
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2738,
      (unsigned int)"LdrpPreprocessDllName",
      0,
      (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      a1,
      v20);
  }
  if ( (dword_18015FAB0 & 0x10) != 0 )
    __debugbreak();
  return (unsigned int)v8;
}
