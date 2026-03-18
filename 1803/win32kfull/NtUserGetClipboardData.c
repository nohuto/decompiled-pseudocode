/*
 * XREFs of NtUserGetClipboardData @ 0x1C00B5C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     InForegroundQueue @ 0x1C006DBF0 (InForegroundQueue.c)
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // r14
  int v9; // eax
  ULONG64 v10; // rdx
  __int64 ClipboardData; // rbx
  __int64 v13; // rdx
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-20h] BYREF

  v14 = 0uLL;
  EnterCrit(0LL, 1LL);
  v8 = (void *)CheckClipboardAccess();
  if ( !v8 )
    goto LABEL_13;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 2;
  else
    v9 = 0;
  if ( v9 )
  {
    UserSetLastError(5LL, v4);
LABEL_13:
    ClipboardData = 0LL;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 876LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v8, v15, UserDereferenceObject);
    ObfReferenceObject(v8);
    LODWORD(v14) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v8, a1, (struct tagGETCLIPBDATA *)&v14);
    if ( ClipboardData )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v14;
    }
    PopAndFreeW32ThreadLock((__int64)v15, v10);
  }
  else
  {
    ClipboardData = 0LL;
    UserSetLastError(5LL, v13);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return ClipboardData;
}
