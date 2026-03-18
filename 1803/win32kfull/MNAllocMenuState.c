/*
 * XREFs of MNAllocMenuState @ 0x1C01D4E78
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C00B428C (MNSetupAnimationDC.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_QWORD **a1)
{
  HDC v2; // rbx
  HDC result; // rax

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (HDC)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    *((_QWORD *)v2 + 17) = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
  }
  memset(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_QWORD *)v2 = **a1;
  *((_QWORD *)v2 + 4) = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  *((_QWORD *)v2 + 6) = *(_QWORD *)(gptiCurrent + 600LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 600LL) = v2;
  return result;
}
