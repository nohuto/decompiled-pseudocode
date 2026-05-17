/*
 * XREFs of TpQueryPoolStackInformation @ 0x1801102B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationWorkerFactory @ 0x1800A2BD0 (ZwQueryInformationWorkerFactory.c)
 */

__int64 __fastcall TpQueryPoolStackInformation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+90h] [rbp-28h]
  __int64 v5; // [rsp+98h] [rbp-20h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = ZwQueryInformationWorkerFactory();
  if ( (int)result >= 0 )
  {
    a2[1] = v5;
    *a2 = v4;
  }
  return result;
}
