/*
 * XREFs of TraceDxgkFunctionProfiler @ 0x1C0020C10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

void __fastcall TraceDxgkFunctionProfiler(__int64 a1, char a2, const GUID *a3)
{
  int v3; // ebx
  const EVENT_DESCRIPTOR *v4; // rdx
  __int64 v5; // rax

  v3 = a1;
  if ( a2 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v4 = (const EVENT_DESCRIPTOR *)&EventProfilerEnter;
    goto LABEL_11;
  }
  if ( a2 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v4 = (const EVENT_DESCRIPTOR *)&EventProfilerExit;
    goto LABEL_11;
  }
  if ( a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 2534LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    v4 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
LABEL_11:
    McTemplateK0q(a1, v4, a3, v3);
  }
}
