/*
 * XREFs of SetWindowCompositionAccentPolicy @ 0x1C00163E0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SetWindowCompositionAccentPolicy(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rax
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v10, 0, 0x28uLL);
  if ( (unsigned int)GetWindowCompositionInfo(a1, v10) )
  {
    if ( v10[1] == *(_QWORD *)a2 && LODWORD(v10[2]) == *(_DWORD *)(a2 + 8) )
      return 0;
    *(_OWORD *)&v10[1] = *(_OWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v7, v6, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9);
    }
  }
  return v4;
}
