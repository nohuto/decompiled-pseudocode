/*
 * XREFs of MonitorUnifyCCDMonitorString @ 0x1C0149938
 * Callers:
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01496C8 (DpiFdoInitializeAdapterUniqueString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorUnifyCCDMonitorString(unsigned __int16 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r10
  const wchar_t *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rax

  if ( a1 )
  {
    result = *a1;
    v2 = 0LL;
    if ( (result & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v3 = *((_QWORD *)a1 + 1);
        v4 = asc_1C0069B48;
        v5 = 0;
        while ( *(_WORD *)(v3 + 2 * v2) != *v4 )
        {
          ++v5;
          ++v4;
          if ( v5 >= 6 )
            goto LABEL_6;
        }
        *(_WORD *)(v3 + 2 * v2) = 95;
LABEL_6:
        v2 = (unsigned int)(v2 + 1);
        result = *a1 >> 1;
      }
      while ( (unsigned int)v2 < (unsigned int)result );
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    return WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
