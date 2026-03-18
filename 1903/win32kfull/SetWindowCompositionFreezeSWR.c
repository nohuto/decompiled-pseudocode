/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C012DCC4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008BE98 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rax
  _DWORD v13[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v13, 0, 0x28uLL);
  v5 = *(_DWORD *)a2;
  v6 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v13, v7) )
  {
    if ( -__CFSHR__(v13[0], 13) == v6 )
    {
      return 0;
    }
    else
    {
      v13[0] = v13[0] & 0xFFFFEFFF | (v6 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v13) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v11 = (void *)ReferenceDwmApiPort(v9, v8, v10);
          v4 = DwmAsyncSetCompositionAttribute(v11, *a1, 20, a2);
        }
        else
        {
          v4 = 0;
        }
        if ( !v5 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x24u, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
