/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C0105154
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(__int64 *a1, __int128 *a2)
{
  int v2; // ebp
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)a2;
  v5 = *(_DWORD *)a2 != 0;
  v6 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12) )
  {
    if ( -__CFSHR__(v12[0], 13) == v5 )
    {
      return 0;
    }
    else
    {
      v12[0] = v12[0] & 0xFFFFEFFF | (v5 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v12) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v10 = (void *)ReferenceDwmApiPort(v8, v7, v9);
          v6 = DwmAsyncSetCompositionAttribute(v10, *a1, 20, a2);
        }
        else
        {
          v6 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x24u, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
