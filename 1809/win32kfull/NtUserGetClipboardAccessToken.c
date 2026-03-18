/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C02142D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL) < 0x2000
    || (v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 128LL)) == 0LL )
  {
    UserSetLastError(5LL, v5, gptiCurrent, v6);
  }
  else
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v11, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
