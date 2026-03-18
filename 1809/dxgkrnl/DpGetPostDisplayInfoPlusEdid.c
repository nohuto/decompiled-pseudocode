/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C0262720
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1C026E104 (DpiAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    v3 = DpiAcquirePostDisplayOwnership(a1, a2, 0LL);
    if ( v3 >= 0 )
      memmove((void *)(a2 + 32), &xmmword_1C008EA08, 0x80uLL);
  }
  else
  {
    v3 = -1073741811;
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
