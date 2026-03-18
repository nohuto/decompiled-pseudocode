/*
 * XREFs of _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C0233C7C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     MonitorIsMonitorConnected @ 0x1C012865C (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall lambda_1ecc0e3e99406e51155bf30eed62debb_::operator()(DXGADAPTER ***a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdi
  DXGADAPTER *v6; // rcx
  int IsMonitorConnected; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  char v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  LOBYTE(a2) = !a3[3] && !a3[4];
  *(_BYTE *)a1[1] |= a2;
  v6 = **a1;
  if ( *a3 != *((_DWORD *)v6 + 69) || a3[1] != *((_DWORD *)v6 + 70) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2, a3);
    v14[3] = v4;
    v14[4] = **a1;
LABEL_20:
    v16 = -1073741811LL;
    goto LABEL_21;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(v6, (unsigned int)a3[2], 0, &v18);
  v11 = IsMonitorConnected;
  if ( IsMonitorConnected < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  if ( v18 )
  {
    if ( (unsigned int)(a3[10] - 1) > 3 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v17 = (int)a3[10];
    }
    else if ( (unsigned int)(a3[11] - 100) > 0x190 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v17 = (unsigned int)a3[11];
    }
    else
    {
      if ( (unsigned int)(a3[9] - 1) <= 0x3E )
        return 0LL;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v17 = (unsigned int)a3[9];
    }
    v14[3] = v17;
    v14[4] = v4;
    goto LABEL_20;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
  v15 = (unsigned int)a3[2];
  v16 = -1071774920LL;
  v14[3] = v15;
  v14[4] = v4;
LABEL_21:
  v14[5] = v16;
  WdLogEvent5_WdError(v14);
  return (unsigned int)v16;
}
