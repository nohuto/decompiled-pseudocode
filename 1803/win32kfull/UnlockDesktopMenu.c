/*
 * XREFs of UnlockDesktopMenu @ 0x1C0050900
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??9?$SharedPointerBase@UtagMENU@@@@QEBAEH@Z @ 0x1C0196A44 (--9-$SharedPointerBase@UtagMENU@@@@QEBAEH@Z.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r9d

  v1 = a1;
  v2 = *(_QWORD *)(*a1 + 40);
  *(_DWORD *)(v2 + 40) &= ~0x40u;
  v3 = *a1;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 40) + 44LL)
    && (unsigned __int8)SharedPointerBase<tagMENU>::operator!=(*(_QWORD *)(v3 + 88) + 16LL, v2, v1) )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 40LL) + 40LL) &= v5;
  }
  return HMAssignmentUnlock(v1);
}
