/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01DE254
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C0116530 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01DEE70 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  _QWORD *v2; // rcx

  v2 = *a1;
  if ( v2[2] )
  {
    FreeHwndList((struct tagBWL *)v2[2]);
    *((_QWORD *)*a1 + 2) = 0LL;
    v2 = *a1;
  }
  Win32FreePool(v2);
  *a1 = 0LL;
}
