/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C0015D14
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(_QWORD *a1, int *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v12, 0, 0x28uLL);
  v5 = *a2;
  v6 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v12) )
  {
    if ( -__CFSHR__(v12[0], 13) == v6 )
    {
      return 0;
    }
    else
    {
      v12[0] = v12[0] & 0xFFFFEFFF | (v6 << 12);
      if ( (unsigned int)SetWindowCompositionInfo(a1, v12) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v10 = (void *)ReferenceDwmApiPort(v8, v7, v9);
          v4 = DwmAsyncSetCompositionAttribute(v10);
        }
        else
        {
          v4 = 0;
        }
        if ( !v5 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 36LL, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
