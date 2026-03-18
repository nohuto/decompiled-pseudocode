/*
 * XREFs of xxxSetActiveWindow @ 0x1C0100E20
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C0100CD4 (xxxActivateEnabledPopup.c)
 *     NtUserSetActiveWindow @ 0x1C0100D80 (NtUserSetActiveWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSetActiveWindow(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *v2; // rdx
  __int64 v3; // rdx

  v1 = 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    return 0LL;
  v2 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
  if ( v2 )
    v1 = *v2;
  xxxActivateWindow((struct tagWND *)a1, 1, gptiCurrent);
  LOBYTE(v3) = 1;
  return HMValidateHandleNoSecure(v1, v3);
}
