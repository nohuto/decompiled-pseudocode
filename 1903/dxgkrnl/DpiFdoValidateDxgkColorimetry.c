/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1C02A30FC
 * Callers:
 *     DpiGetMonitorColorimetryOverride @ 0x1C016FF84 (DpiGetMonitorColorimetryOverride.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02A33D0 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     _lambda_257d7c3e5d4eac318129c4c4e210f286_::operator() @ 0x1C004B92C (_lambda_257d7c3e5d4eac318129c4c4e210f286_--operator().c)
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(unsigned int *a1, unsigned int a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  _QWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v2 = a1;
  v3 = a2;
  v5 = (unsigned __int64)(a1 + 13);
  if ( (unsigned __int64)v2 < v5 )
  {
    while ( !*v2 )
    {
      if ( (unsigned __int64)++v2 >= v5 )
        goto LABEL_6;
    }
    v2 = 0LL;
  }
LABEL_6:
  if ( v2 )
    return 279LL;
  if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v5, *((_QWORD *)a1 + 3)) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v11[3] = a1[6];
    v11[4] = a1[7];
    v11[5] = v3;
    v11[6] = 1LL;
    goto LABEL_41;
  }
  v12 = a1[9];
  if ( !v12
    || (v8 = a1[10], !(_DWORD)v8)
    || (unsigned int)v8 > v12
    || (v7 = a1[8], (unsigned int)v7 >= v12)
    || (unsigned int)v7 >= (unsigned int)v8 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v11[4] = 2LL;
    goto LABEL_40;
  }
  v13 = a1[11];
  if ( (v13 & 3) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
    v11[3] = (int)(a1[11] << 30) >> 30;
    v11[4] = v3;
    v11[5] = 3LL;
    goto LABEL_41;
  }
  if ( !(_DWORD)v13 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
    v11[4] = 4LL;
LABEL_40:
    v11[3] = v3;
    goto LABEL_41;
  }
  if ( (((unsigned __int8)v13 | (unsigned __int8)(((unsigned int)v13 | ((unsigned int)v13 >> 6)) >> 6)) & 0xFCu) >= 4
    || (v13 & 0x3F00000) != 0 )
  {
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v13, *(_QWORD *)a1) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v11[3] = *a1;
      v11[4] = a1[1];
      v11[5] = v3;
      v11[6] = 6LL;
      goto LABEL_41;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v15, *((_QWORD *)a1 + 1)) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
      v11[3] = a1[2];
      v11[4] = a1[3];
      v11[5] = v3;
      v11[6] = 7LL;
      goto LABEL_41;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v18, *((_QWORD *)a1 + 2)) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
      v11[3] = a1[4];
      v11[4] = a1[5];
      v11[5] = v3;
      v11[6] = 8LL;
      goto LABEL_41;
    }
  }
  else
  {
    if ( *a1 != v10 || a1[1] != v10 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
      v11[3] = *a1;
      v11[4] = a1[1];
      v11[5] = v3;
      v11[6] = 9LL;
      goto LABEL_41;
    }
    if ( a1[2] != v10 || a1[3] != v10 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
      v11[3] = a1[2];
      v11[4] = a1[3];
      v11[5] = v3;
      v11[6] = 10LL;
      goto LABEL_41;
    }
    if ( a1[4] != v10 || a1[5] != v10 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
      v11[3] = a1[4];
      v11[4] = a1[5];
      v11[5] = v3;
      v11[6] = 11LL;
      goto LABEL_41;
    }
  }
  if ( a1[12] < 8 )
    return 0LL;
  v11 = (_QWORD *)WdLogNewEntry5_WdError(v13, v7, v9);
  v11[3] = (unsigned __int64)a1[12] >> 3;
  v11[4] = v3;
  v11[5] = 5LL;
LABEL_41:
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
