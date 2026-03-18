/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01376F4
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C0137620 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C015A4AC (xxxActivateEnabledPopup.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
  LOBYTE(v3) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v2, v3, v4);
}
