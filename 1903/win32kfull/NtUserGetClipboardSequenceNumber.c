/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C00B7AF0
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  v3 = CheckClipboardAccess(v1, v0, v2);
  v5 = 0;
  if ( v3 )
    v5 = *(_DWORD *)(v3 + 112);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
