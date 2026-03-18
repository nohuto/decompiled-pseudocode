/*
 * XREFs of _SetKeyboardState @ 0x1C014EB74
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C014EAB0 (NtUserSetKeyboardState.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall SetKeyboardState(char *a1)
{
  char *v1; // r8
  __int64 v2; // rdi
  int v4; // edx
  int v5; // eax
  _BYTE *v6; // r9
  int v7; // ecx
  char v8; // al
  int v9; // ecx
  char v10; // al
  int v11; // ecx

  v1 = a1;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v4 = 0;
  v5 = 0;
  while ( v5 < 256 )
  {
    v6 = (_BYTE *)(((unsigned __int64)(unsigned __int8)v4 >> 2) + v2 + 236);
    v7 = (unsigned __int8)*v6;
    v8 = 2 * (v4 & 3);
    if ( *v1 < 0 )
      v9 = v7 | (1 << v8);
    else
      v9 = v7 & ~(1 << v8);
    *v6 = v9;
    v10 = 2 * (v4 & 3) + 1;
    if ( (*v1 & 1) != 0 )
      v11 = (unsigned __int8)v9 | (1 << v10);
    else
      v11 = (unsigned __int8)v9 & ~(1 << v10);
    *v6 = v11;
    v5 = ++v4;
    ++v1;
  }
  if ( v1 != a1 )
    ++*(_DWORD *)(gpsi + 6984LL);
  return 1LL;
}
