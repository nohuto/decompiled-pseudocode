/*
 * XREFs of DXGETWPROFILER_BASE_PopProfilerEntry @ 0x1C00144A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXGETWPROFILER_BASE_PopProfilerEntry(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 140);
    if ( !v3 )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v5 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v5);
      v3 = *(_DWORD *)(v1 + 140);
    }
    v4 = v3 - 1;
    *(_DWORD *)(v1 + 140) = v4;
    if ( !v4 )
      *(_DWORD *)(v1 + 144) = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
