/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00D8CF8
 * Callers:
 *     InForegroundQueue @ 0x1C00D7FE0 (InForegroundQueue.c)
 *     NtUserOpenClipboard @ 0x1C00D92E0 (NtUserOpenClipboard.c)
 *     NtUserSetClipboardData @ 0x1C00DB250 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(gpqForeground + 96LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 424);
  v4 = *(_QWORD *)(gpqForeground + 88LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 424);
  v5 = *((_QWORD *)a1 + 53);
  result = 1;
  if ( v3 != v5 && v4 != v5 )
  {
    v6 = *(_DWORD *)(v5 + 884);
    if ( !a2 || !v6 )
      return 0;
    if ( *(_DWORD *)(gpqForeground + 432LL) != v6
      && (!v3 || *(_DWORD *)(v3 + 884) != v6)
      && (!v4 || *(_DWORD *)(v4 + 884) != v6) )
    {
      return 0;
    }
  }
  return result;
}
