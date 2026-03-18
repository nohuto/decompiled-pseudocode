/*
 * XREFs of NtUserGetClipboardViewer @ 0x1C022C190
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = CheckClipboardAccess(v1, v0, v2, v3);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = *(__int64 **)(v4 + 72);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
