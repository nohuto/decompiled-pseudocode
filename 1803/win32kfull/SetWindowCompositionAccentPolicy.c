/*
 * XREFs of SetWindowCompositionAccentPolicy @ 0x1C0104E0C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionAccentPolicy(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( (_QWORD)v11 == *(_QWORD *)a2 && DWORD2(v11) == *((_DWORD *)a2 + 2) )
      return 0;
    v11 = *a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v6, v5, v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 19, a2);
    }
  }
  return v4;
}
