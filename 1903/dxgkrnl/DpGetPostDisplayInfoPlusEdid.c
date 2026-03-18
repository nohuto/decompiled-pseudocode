/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C029C130
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1C029DB1C (DpiAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rax

  if ( a1 && a2 )
  {
    v4 = DpiAcquirePostDisplayOwnership(a1, a2, 0LL);
    if ( v4 >= 0 )
      memmove((void *)(a2 + 32), &xmmword_1C00A2A08, 0x80uLL);
  }
  else
  {
    v4 = -1073741811;
    v5 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
