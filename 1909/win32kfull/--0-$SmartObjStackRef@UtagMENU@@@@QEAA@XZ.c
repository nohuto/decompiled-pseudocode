/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreateWindowEx @ 0x1C00352A0 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     NtUserThunkedMenuInfo @ 0x1C0104630 (NtUserThunkedMenuInfo.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0129140 (NtUserThunkedMenuItemInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C022D1B0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0236260 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *(_QWORD *)(v5 + 1472);
  result = a1;
  *(_QWORD *)(v5 + 1472) = a1 + 1;
  a1[2] = 0LL;
  return result;
}
