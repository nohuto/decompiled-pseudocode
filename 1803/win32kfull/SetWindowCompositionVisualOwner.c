/*
 * XREFs of SetWindowCompositionVisualOwner @ 0x1C01FA820
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionVisualOwner(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( v11 == *(_QWORD *)a2 )
      return 0;
    v11 = *(_QWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v6, v5, v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 22, a2);
    }
  }
  return v4;
}
