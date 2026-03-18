/*
 * XREFs of UnlockDesktopMenu @ 0x1C00E12C8
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00BF09C (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // r9d

  v1 = a1;
  *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 40LL) &= ~0x40u;
  v2 = *a1;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 40) + 44LL)
    && SharedPointerBase<unsigned short>::operator!=((_QWORD *)(*(_QWORD *)(v2 + 88) + 16LL)) )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 40LL) + 40LL) &= v4;
  }
  return HMAssignmentUnlock(v1);
}
