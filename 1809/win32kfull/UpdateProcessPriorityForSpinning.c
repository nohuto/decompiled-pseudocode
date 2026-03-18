/*
 * XREFs of UpdateProcessPriorityForSpinning @ 0x1C00CF0D4
 * Callers:
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0034150 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     NtUserYieldTask @ 0x1C021F110 (NtUserYieldTask.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00CF188 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall UpdateProcessPriorityForSpinning(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  int v4; // edx
  __int64 i; // rcx
  __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 424);
  result = 2048LL;
  v4 = *(_DWORD *)(v1 + 12);
  if ( (*(_DWORD *)(a1 + 488) & 0x400) != 0 )
  {
    if ( (v4 & 0x800) == 0 )
    {
      *(_DWORD *)(v1 + 12) = v4 | 0x800;
      result = *(_QWORD *)(a1 + 424);
      if ( (*(_DWORD *)(result + 820) & 0x30000) == 0x10000 )
      {
        v6 = 2LL;
        return SetForegroundPriorityProcess(v1, a1, v6);
      }
    }
  }
  else if ( (v4 & 0x800) != 0 )
  {
    for ( i = *(_QWORD *)(v1 + 328); i; i = *(_QWORD *)(i + 664) )
    {
      if ( (*(_DWORD *)(i + 488) & 0x400) != 0 )
        return result;
    }
    *(_DWORD *)(v1 + 12) = v4 & 0xFFFFF7FF;
    result = *(_QWORD *)(a1 + 424);
    if ( (*(_DWORD *)(result + 820) & 0x30000) == 0x20000 )
    {
      v6 = 1LL;
      return SetForegroundPriorityProcess(v1, a1, v6);
    }
  }
  return result;
}
