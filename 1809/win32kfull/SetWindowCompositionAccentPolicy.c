/*
 * XREFs of SetWindowCompositionAccentPolicy @ 0x1C00B93A0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionAccentPolicy(__int64 a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v9) )
  {
    if ( (_QWORD)v10 == *(_QWORD *)a2 && DWORD2(v10) == *((_DWORD *)a2 + 2) )
      return 0;
    v10 = *a2;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8);
    }
  }
  return v4;
}
