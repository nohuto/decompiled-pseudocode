/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C00B7B40
 * Callers:
 *     <none>
 * Callees:
 *     CountNumClipFormatForIL @ 0x1C00B7BA8 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 */

__int64 NtUserCountClipboardFormats()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  v6 = CheckClipboardAccess(v1, v0, v2);
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
    v3 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 872), v6);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
