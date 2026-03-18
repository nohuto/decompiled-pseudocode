/*
 * XREFs of zzzShowStartGlass @ 0x1C01D70F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     zzzCalcStartCursorHide @ 0x1C00ABC40 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // edx
  int v4; // ecx
  __int64 CurrentProcessWin32Process; // rbx
  int v6; // eax

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v6 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_(v4, v3, 2, 14, (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
    v6 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        v4,
        v3,
        2u,
        0xFu,
        (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids,
        CurrentProcessWin32Process);
      v6 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    }
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) = v6 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v2);
  return 1LL;
}
