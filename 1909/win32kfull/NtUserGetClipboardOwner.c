/*
 * XREFs of NtUserGetClipboardOwner @ 0x1C0112A00
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardOwner()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 *v3; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v2 = 0LL;
  if ( v0 )
  {
    v3 = *(__int64 **)(v0 + 80);
    if ( v3 )
      v2 = *v3;
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
