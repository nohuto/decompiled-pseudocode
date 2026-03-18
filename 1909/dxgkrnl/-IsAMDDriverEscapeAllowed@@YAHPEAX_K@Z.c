/*
 * XREFs of ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0240B8C
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAMDDriverEscapeAllowed(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a2 < 0xC )
  {
    v6 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = 691LL;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v3 = a1[2] & 0xFFFFFF00;
    if ( (((_DWORD)v3 - 16778752) & 0xFFFFFCFF) != 0 || (_DWORD)v3 == 16779520 )
      return 1LL;
    v4 = WdLogNewEntry5_WdWarning(v3, a2, a3);
    *(_QWORD *)(v4 + 24) = 678LL;
    WdLogEvent5_WdWarning(v4);
  }
  return 0LL;
}
