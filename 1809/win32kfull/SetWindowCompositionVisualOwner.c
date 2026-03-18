/*
 * XREFs of SetWindowCompositionVisualOwner @ 0x1C0223A58
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionVisualOwner(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v9) )
  {
    if ( v10 == *(_QWORD *)a2 )
      return 0;
    v10 = *(_QWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6, v5);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7, *a1, 22, a2);
    }
  }
  return v4;
}
