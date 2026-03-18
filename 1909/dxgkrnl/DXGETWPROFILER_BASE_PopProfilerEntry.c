/*
 * XREFs of DXGETWPROFILER_BASE_PopProfilerEntry @ 0x1C0014B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXGETWPROFILER_BASE_PopProfilerEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 140);
    if ( !v4 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v6 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v6);
      v4 = *(_DWORD *)(v2 + 140);
    }
    v5 = v4 - 1;
    *(_DWORD *)(v2 + 140) = v5;
    if ( !v5 )
      *(_DWORD *)(v2 + 144) = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
