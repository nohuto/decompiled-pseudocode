/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C006BBD8
 * Callers:
 *     InForegroundQueue @ 0x1C006DBF0 (InForegroundQueue.c)
 *     NtUserSetClipboardData @ 0x1C00B5F70 (NtUserSetClipboardData.c)
 *     NtUserOpenClipboard @ 0x1C00B6280 (NtUserOpenClipboard.c)
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
    v3 = *(_QWORD *)(v3 + 416);
  v4 = *(_QWORD *)(gpqForeground + 88LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 416);
  v5 = *((_QWORD *)a1 + 52);
  result = 1;
  if ( v3 != v5 && v4 != v5 )
  {
    v6 = *(_DWORD *)(v5 + 876);
    if ( !a2 || !v6 )
      return 0;
    if ( *(_DWORD *)(gpqForeground + 432LL) != v6
      && (!v3 || *(_DWORD *)(v3 + 876) != v6)
      && (!v4 || *(_DWORD *)(v4 + 876) != v6) )
    {
      return 0;
    }
  }
  return result;
}
