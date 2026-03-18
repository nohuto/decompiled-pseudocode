/*
 * XREFs of NtUserGetClipboardViewer @ 0x1C01EDF60
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = CheckClipboardAccess(v1, v0);
  v7 = 0LL;
  if ( v2 )
  {
    v8 = *(__int64 **)(v2 + 72);
    if ( v8 )
      v7 = *v8;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
