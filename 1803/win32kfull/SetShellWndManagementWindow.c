/*
 * XREFs of SetShellWndManagementWindow @ 0x1C00F1D88
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00F18FC (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01A47F4 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetShellWndManagementWindow(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = a1 + 328;
  if ( a2 )
  {
    v7[0] = v4;
    v7[1] = a2;
    HMAssignmentLock(v7);
  }
  else
  {
    v6 = HMAssignmentUnlock(v4);
    *(_DWORD *)(a1 + 336) = 0;
    return v6;
  }
  return v3;
}
