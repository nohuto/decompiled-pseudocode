/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C012540C
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C0125350 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C02281EC (xxxActivateEnabledPopup.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != *(_QWORD *)(gptiCurrent + 432LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
  LOBYTE(v3) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v2, v3);
}
