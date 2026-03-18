/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C00D9D90
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v5 = 0;
  if ( v0 )
    v5 = *(_DWORD *)(v0 + 112);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
