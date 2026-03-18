/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00150E4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000A2E0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiVerifyDriverReportedFenceId(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = a2;
  if ( a3 )
  {
    v6 = *((_DWORD *)a1 + 28);
    v7 = 160LL;
  }
  else
  {
    *a4 = a2;
    v6 = *((_DWORD *)a1 + 16);
    if ( a2 == v6 || a2 == *((_DWORD *)a1 + 18) )
      return 1LL;
    v7 = 152LL;
  }
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)((char *)a1 + v7), 0, 0);
  if ( v8 < v6 )
  {
    if ( (unsigned int)v5 <= v8 )
      return 1LL;
  }
  else if ( (unsigned int)v5 > v8 )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)v5 >= v6 )
    return 1LL;
LABEL_12:
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v7);
    v10[6] = v6;
    v10[3] = 281LL;
    v10[4] = 1LL;
    v10[5] = v5;
    v10[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v10);
    __debugbreak();
    JUMPOUT(0x1C0023314LL);
  }
  *((_DWORD *)a1 + 504) = 1;
  result = 0LL;
  *((_BYTE *)a1 + 2009) = 1;
  return result;
}
