/*
 * XREFs of ndisOidPostPDOpenProvider @ 0x1C00C2010
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     WPP_RECORDER_SF_qqqqd @ 0x1C00C1BA0 (WPP_RECORDER_SF_qqqqd_ea_1C00C1BA0.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00C1CC8 (WPP_RECORDER_SF_qqqqq.c)
 */

void *__fastcall ndisOidPostPDOpenProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  void *result; // rax
  int v8; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
  v6 = *(_QWORD *)a1;
  result = *(void **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x1Au, v8);
    result = *(void **)a1;
  }
  if ( !result && !*(_DWORD *)(a1 + 40) )
  {
    result = &unk_1C00CBD40;
    if ( *(_UNKNOWN **)(v5 + 16) != &unk_1C00CBD40 )
      ndisBugCheckEx(0x23uLL, 5uLL, *(_QWORD *)(a1 + 16), v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (void *)WPP_RECORDER_SF_qqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v8);
  return result;
}
