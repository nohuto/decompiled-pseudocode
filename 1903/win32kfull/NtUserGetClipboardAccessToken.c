/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C022C040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG64 v8; // rcx
  void *v9; // rcx
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0x2000;
  v12 = -1;
  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, &v11)
    && (v9 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 128LL)) != 0LL )
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v9, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  else
  {
    UserSetLastError(5LL, v5, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
