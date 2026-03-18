/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02A37E0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0163120 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C001E91C (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02A350C (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // al

  v3 = *(unsigned int **)(a2 + 104);
  v6 = *(unsigned int *)(a2 + 24);
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 3896) + 2452LL);
  if ( *v3 >= 0x10 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
    v9 = (unsigned __int64)*v3 >> 4;
    v8[5] = 1LL;
LABEL_25:
    v8[3] = v9;
    v8[4] = v6;
    goto LABEL_26;
  }
  if ( v3[16] >= 0x1000 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
    v9 = (unsigned __int64)v3[16] >> 12;
    v8[5] = 2LL;
    goto LABEL_25;
  }
  if ( ((_DWORD)v7 != 2300 || *(_DWORD *)(a1 + 1124) != 1297040209)
    && (int)DpiFdoValidateDxgkColorimetry(v3 + 17, v6) < 0 )
  {
    return 3221225485LL;
  }
  if ( (unsigned __int8)(*((_BYTE *)v3 + 120) - 1) > 3u )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
    v9 = *((unsigned __int8 *)v3 + 120);
    v8[5] = 3LL;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*((_BYTE *)v3 + 121) - 1) > 4u )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
    v9 = *((unsigned __int8 *)v3 + 121);
    v8[5] = 4LL;
    goto LABEL_25;
  }
  if ( *((_BYTE *)v3 + 122) <= 0x10u )
  {
    v10 = *((_BYTE *)v3 + 123);
    if ( v10 == 1 )
    {
      if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(_QWORD *)(a2 + 112)) )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
        v8[3] = v6;
        v8[4] = 8LL;
        goto LABEL_26;
      }
    }
    else if ( v10 != 2 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
      v9 = *((unsigned __int8 *)v3 + 123);
      v8[5] = 6LL;
      goto LABEL_25;
    }
    if ( (v3[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2695) || *(_BYTE *)(a1 + 2692) )
      return 0LL;
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
    v8[3] = v6;
    v8[4] = 10LL;
    goto LABEL_26;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2, a3);
  v8[3] = *((unsigned __int8 *)v3 + 122);
  v8[4] = 16LL;
  v8[5] = v6;
  v8[6] = 5LL;
LABEL_26:
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
