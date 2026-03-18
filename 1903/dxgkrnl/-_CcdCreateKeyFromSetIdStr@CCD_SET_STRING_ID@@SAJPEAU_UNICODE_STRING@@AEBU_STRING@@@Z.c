/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00D7370
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00D631C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00DD6DC (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C012B64C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D4B94 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C00D74A4 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(struct _UNICODE_STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // r14
  SIZE_T v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _STRING SourceString; // [rsp+20h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = (unsigned __int16)(Length + 34);
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x63644356u, PagedPool);
  a1->Buffer = v7;
  if ( v7 )
  {
    memset(v7, 0, 2 * v5);
    a1->Length = 0;
    SourceString.Length = Length;
    a1->MaximumLength = 2 * (Length + 1);
    SourceString.MaximumLength = Length;
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v12 = RtlAnsiStringToUnicodeString(a1, &SourceString, 0);
    v15 = v12;
    if ( v12 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v23[3] = v15;
      v23[4] = a2;
      v23[5] = a2->Length;
      v23[6] = Length;
      v23[7] = a1->MaximumLength;
      WdLogEvent5_WdAssertion(v23);
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return (unsigned int)v15;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v20 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18);
        v24[3] = v20;
        v24[4] = a2;
        v24[5] = a2->Buffer;
        v24[6] = a2->Length;
        WdLogEvent5_WdAssertion(v24);
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return (unsigned int)v20;
      }
      else
      {
        a1->Length = a1->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v22[3] = a2;
    v22[4] = a2->Length;
    v22[5] = v5;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
