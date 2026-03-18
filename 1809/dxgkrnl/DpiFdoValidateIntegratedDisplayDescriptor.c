/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C0267978
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiIsValidEdid @ 0x1C0044E5C (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02676A4 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  int DriverVersion; // eax
  __int64 v5; // rcx
  unsigned int *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // al

  DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(a1 + 3792));
  v6 = *(unsigned int **)(a2 + 104);
  v7 = *(unsigned int *)(a2 + 24);
  if ( *v6 >= 0x10 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v9 = (unsigned __int64)*v6 >> 4;
    v8[5] = 1LL;
LABEL_25:
    v8[3] = v9;
    v8[4] = v7;
    goto LABEL_26;
  }
  if ( v6[16] >= 0x800 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v9 = (unsigned __int64)v6[16] >> 11;
    v8[5] = 2LL;
    goto LABEL_25;
  }
  if ( (DriverVersion != 2300 || *(_DWORD *)(a1 + 1116) != 1297040209)
    && (int)DpiFdoValidateDxgkColorimetry(v6 + 17, v7) < 0 )
  {
    return 3221225485LL;
  }
  if ( (unsigned __int8)(*((_BYTE *)v6 + 120) - 1) > 3u )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v9 = *((unsigned __int8 *)v6 + 120);
    v8[5] = 3LL;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*((_BYTE *)v6 + 121) - 1) > 4u )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v9 = *((unsigned __int8 *)v6 + 121);
    v8[5] = 4LL;
    goto LABEL_25;
  }
  if ( *((_BYTE *)v6 + 122) <= 0x10u )
  {
    v10 = *((_BYTE *)v6 + 123);
    if ( v10 == 1 )
    {
      if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(char **)(a2 + 112)) )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
        v8[3] = v7;
        v8[4] = 8LL;
        goto LABEL_26;
      }
    }
    else if ( v10 != 2 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
      v9 = *((unsigned __int8 *)v6 + 123);
      v8[5] = 6LL;
      goto LABEL_25;
    }
    if ( (v6[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2623) || *(_BYTE *)(a1 + 2620) )
      return 0LL;
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v7;
    v8[4] = 10LL;
    goto LABEL_26;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
  v8[3] = *((unsigned __int8 *)v6 + 122);
  v8[4] = 16LL;
  v8[5] = v7;
  v8[6] = 5LL;
LABEL_26:
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
