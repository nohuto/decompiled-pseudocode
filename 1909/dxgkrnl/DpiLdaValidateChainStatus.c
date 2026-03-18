/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C02AEF9C
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C0181900 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( *(_BYTE *)(v3 + 508) != 1 )
  {
    v5 = *(_QWORD *)(v3 + 2728);
    if ( !v5 )
    {
      v4 = -1071774671;
      v6 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v6 + 24) = -1071774671LL;
LABEL_4:
      WdLogEvent5_WdError(v6);
      return v4;
    }
    v3 = *(_QWORD *)(v5 + 64);
  }
  v7 = *(unsigned int *)(v3 + 2736);
  if ( (_DWORD)v7 != *(_DWORD *)(v3 + 504) )
  {
    v4 = -1071774670;
    v6 = WdLogNewEntry5_WdError(a1, a2, v7);
    *(_QWORD *)(v6 + 24) = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    v4 = -1071774669;
    v6 = WdLogNewEntry5_WdError(a1, a2, v7);
    *(_QWORD *)(v6 + 24) = -1071774669LL;
    goto LABEL_4;
  }
  v8 = 1LL;
  if ( (unsigned int)v7 > 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v3 + 2728) + 8LL * (unsigned int)v8);
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 64) + 236LL) != 2 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        return v4;
    }
    v4 = -1071774666;
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  return v4;
}
