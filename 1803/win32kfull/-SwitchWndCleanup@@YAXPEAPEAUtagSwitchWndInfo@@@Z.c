/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01BB73C
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C00F79B0 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01BC2A0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( *(_QWORD *)(v2 + 16) )
  {
    FreeHwndList(*(struct tagBWL **)(v2 + 16));
    v2 = (__int64)*a1;
  }
  Win32FreePool(v2);
  *a1 = 0LL;
}
