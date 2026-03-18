/*
 * XREFs of VidSchQueryFlipQueueInfo @ 0x1C00833A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryFlipQueueInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  if ( a1 && a2 )
  {
    a2[2] &= 1u;
    *a2 = 0;
    a2[1] = 31;
    a2[2] = (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1908LL) >> 2) & 1;
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v3);
    return 3221225485LL;
  }
}
