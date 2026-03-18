/*
 * XREFs of RtlUnicodeStringCopy @ 0x1400CFDD0
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140603B90 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B42EC (PopUnicodeStringDeepCopy.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x14078170C (MiConstructNonRetpolineImageLoadRecord.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14082CB78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408B75DC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1400CFEA0 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int16 v3; // di
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  size_t v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // r8d
  int v12; // ecx
  wchar_t *Buffer; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rsi

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( result >= 0 )
  {
    if ( v10 )
    {
      v5 = *(_QWORD *)(v10 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v10 + 2) >> 1;
    }
    v12 = RtlUnicodeStringValidateWorker(SourceString, v9, v11);
    if ( v12 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v14 = (unsigned __int64)SourceString->Length >> 1;
      }
      v12 = 0;
      if ( v6 )
      {
        v15 = v5 - (_QWORD)Buffer;
        while ( v14 )
        {
          --v14;
          *(wchar_t *)((char *)Buffer + v15) = *Buffer;
          ++v3;
          ++Buffer;
          if ( !--v6 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v14 )
          v12 = -2147483643;
      }
    }
    result = v12;
    DestinationString->Length = 2 * v3;
  }
  return result;
}
