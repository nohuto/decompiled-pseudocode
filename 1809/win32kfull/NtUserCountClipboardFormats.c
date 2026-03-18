/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0150A80
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00DA0CC (CountNumClipFormatForIL.c)
 */

__int64 NtUserCountClipboardFormats()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = 0;
  v5 = CheckClipboardAccess(v1, v0);
  if ( v5 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v2 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 880), v5);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
