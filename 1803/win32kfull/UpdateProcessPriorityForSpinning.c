/*
 * XREFs of UpdateProcessPriorityForSpinning @ 0x1C005FDB4
 * Callers:
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0048C40 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C005FD6C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     NtUserYieldTask @ 0x1C01F7520 (NtUserYieldTask.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C005FE68 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall UpdateProcessPriorityForSpinning(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  int v4; // edx
  __int64 i; // rcx
  __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 416);
  result = 2048LL;
  v4 = *(_DWORD *)(v1 + 12);
  if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 )
  {
    if ( (v4 & 0x800) == 0 )
    {
      *(_DWORD *)(v1 + 12) = v4 | 0x800;
      result = *(_QWORD *)(a1 + 416);
      if ( (*(_DWORD *)(result + 812) & 0x30000) == 0x10000 )
      {
        v6 = 2LL;
        return SetForegroundPriorityProcess(v1, a1, v6);
      }
    }
  }
  else if ( (v4 & 0x800) != 0 )
  {
    for ( i = *(_QWORD *)(v1 + 320); i; i = *(_QWORD *)(i + 656) )
    {
      if ( (*(_DWORD *)(i + 480) & 0x400) != 0 )
        return result;
    }
    *(_DWORD *)(v1 + 12) = v4 & 0xFFFFF7FF;
    result = *(_QWORD *)(a1 + 416);
    if ( (*(_DWORD *)(result + 812) & 0x30000) == 0x20000 )
    {
      v6 = 1LL;
      return SetForegroundPriorityProcess(v1, a1, v6);
    }
  }
  return result;
}
