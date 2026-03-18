/*
 * XREFs of MNAllocMenuState @ 0x1C01F99E4
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     MNSetupAnimationDC @ 0x1C00EBED8 (MNSetupAnimationDC.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_QWORD **a1)
{
  __int64 v2; // rdx
  HDC v3; // rbx
  __int64 v4; // r8
  HDC result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v3 = (HDC)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v3 )
      return 0LL;
    *((_QWORD *)v3 + 17) = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v3, v2, v4) )
    {
      Win32FreePool(v3);
      return 0LL;
    }
    GreSetDCOwnerEx(*((_QWORD *)v3 + 17), 0LL, 0LL, 1LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v3 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
    GetDPIMetrics(v7, v6);
    GreSelectFont(gMenuState[17]);
  }
  memset(v3, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v3 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_QWORD *)v3 = **a1;
  *((_QWORD *)v3 + 4) = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  *((_QWORD *)v3 + 6) = *(_QWORD *)(gptiCurrent + 608LL);
  result = v3;
  *(_QWORD *)(gptiCurrent + 608LL) = v3;
  return result;
}
