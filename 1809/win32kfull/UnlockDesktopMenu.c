/*
 * XREFs of UnlockDesktopMenu @ 0x1C0136274
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01105A0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
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
    && HmgLockResultBase<META>::operator bool((_QWORD *)(*(_QWORD *)(v2 + 88) + 16LL)) )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 40LL) + 40LL) &= v4;
  }
  return HMAssignmentUnlock(v1);
}
