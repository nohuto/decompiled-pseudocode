/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1C02ADF1C
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C015DC0C (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x1C015DD3C (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // bp
  unsigned __int8 *v4; // r15
  int InterruptIrql; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int8 v11; // dl
  _QWORD *v12; // rax
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = (unsigned __int8 *)a2;
  InterruptIrql = -1073741823;
  if ( *(_BYTE *)(v2 + 508) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 2728);
    if ( !v7 )
    {
LABEL_15:
      InterruptIrql = -1071774666;
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v12[3] = 275LL;
      v12[4] = 21LL;
      v12[5] = -1071774666LL;
      WdLogEvent5_WdCriticalError(v12);
      goto LABEL_16;
    }
    v6 = *(_QWORD *)(v7 + 64);
  }
  v8 = *(_DWORD *)(v6 + 2736);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v6 + 2728);
    while ( 1 )
    {
      a1 = *(_QWORD *)(v10 + 8 * v9);
      a2 = *(_QWORD *)(a1 + 64);
      if ( (unsigned int)(*(_DWORD *)(a2 + 236) - 1) > 1 )
        goto LABEL_15;
      a1 = *(_QWORD *)(a2 + 1288);
      if ( !a1 && !*(_BYTE *)(v2 + 2692) )
        goto LABEL_15;
      InterruptIrql = DpiFdoGetInterruptIrql(a1, &v14);
      if ( InterruptIrql >= 0 )
      {
        v11 = v3;
        if ( v3 < v14 )
          v11 = v14;
        v9 = (unsigned int)(v9 + 1);
        v3 = v11;
        if ( (unsigned int)v9 < v8 )
          continue;
      }
      break;
    }
  }
LABEL_16:
  result = (unsigned int)InterruptIrql;
  *v4 = v3;
  return result;
}
