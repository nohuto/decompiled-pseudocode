/*
 * XREFs of MonitorUnifyCCDMonitorString @ 0x1C0165038
 * Callers:
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C0164DC8 (DpiFdoInitializeAdapterUniqueString.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0176EBC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorUnifyCCDMonitorString(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  const wchar_t *v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rax

  if ( a1 )
  {
    result = *a1;
    v3 = 0LL;
    if ( (result & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v4 = *((_QWORD *)a1 + 1);
        v5 = L"+*^~\\/";
        v6 = 0;
        while ( *(_WORD *)(v4 + 2 * v3) != *v5 )
        {
          ++v6;
          ++v5;
          if ( v6 >= 6 )
            goto LABEL_6;
        }
        *(_WORD *)(v4 + 2 * v3) = 95;
LABEL_6:
        v3 = (unsigned int)(v3 + 1);
        result = *a1 >> 1;
      }
      while ( (unsigned int)v3 < (unsigned int)result );
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    return WdLogEvent5_WdAssertion(v7);
  }
  return result;
}
