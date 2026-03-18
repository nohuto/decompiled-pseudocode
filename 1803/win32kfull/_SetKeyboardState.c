/*
 * XREFs of _SetKeyboardState @ 0x1C0129BF0
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C0129B40 (NtUserSetKeyboardState.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall SetKeyboardState(char *a1)
{
  __int64 v1; // r11
  char *v2; // r10
  int v3; // edx
  int v4; // eax
  unsigned __int64 v5; // r9
  char v6; // r8
  char v7; // di
  int v8; // eax
  int v9; // eax
  char v10; // di
  int v11; // r8d

  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  v2 = a1;
  v3 = 0;
  v4 = 0;
  while ( v4 < 256 )
  {
    v5 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v6 = v4 & 3;
    v7 = 2 * (v4 & 3);
    v8 = *(unsigned __int8 *)(v5 + v1 + 228);
    if ( *a1 < 0 )
      v9 = v8 | (1 << v7);
    else
      v9 = v8 & ~(1 << v7);
    *(_BYTE *)(v5 + v1 + 228) = v9;
    v10 = 2 * v6 + 1;
    if ( (*a1 & 1) != 0 )
      v11 = (unsigned __int8)v9 | (1 << v10);
    else
      v11 = (unsigned __int8)v9 & ~(1 << v10);
    *(_BYTE *)(v5 + v1 + 228) = v11;
    v4 = ++v3;
    ++a1;
  }
  if ( a1 != v2 )
    ++*(_DWORD *)(gpsi + 6984LL);
  return 1LL;
}
