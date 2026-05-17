/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x1801112D0
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 *     TppExceptionFilter @ 0x1801107C4 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1801109AC (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rcx

  v5 = TppExceptionFilter((const void **)a1, a2);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    v7 = *(int **)a1;
    if ( **(_DWORD **)a1 == -1073741571 )
    {
      RtlReportException((__int64)v7, *(_QWORD *)(a1 + 8), 3u);
    }
    else
    {
      if ( *v7 <= -1073740022 || *v7 > -1073740018 && *v7 != -1073740016 )
      {
        TppTerminateProcess();
        __debugbreak();
      }
      return (unsigned int)-1;
    }
  }
  return v6;
}
