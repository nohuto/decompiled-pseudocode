/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F3FEC
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C00FAD30 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4BE0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
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
