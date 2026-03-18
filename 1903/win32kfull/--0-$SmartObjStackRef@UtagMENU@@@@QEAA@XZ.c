/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C001B7C0 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     NtUserCreateWindowEx @ 0x1C0094570 (NtUserCreateWindowEx.c)
 *     NtUserThunkedMenuInfo @ 0x1C01293D0 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C022D7D0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0236880 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *(_QWORD *)(v6 + 1472);
  result = a1;
  *(_QWORD *)(v6 + 1472) = a1 + 1;
  a1[2] = 0LL;
  return result;
}
