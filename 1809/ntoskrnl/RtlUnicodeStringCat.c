/*
 * XREFs of RtlUnicodeStringCat @ 0x14012B59C
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x14012B688 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  size_t v7; // rdx
  unsigned __int16 *v8; // rcx
  ULONG v9; // r8d
  int v10; // r10d
  wchar_t *Buffer; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r11
  __int16 v14; // cx
  __int64 v15; // r11
  __int64 v16; // rdx

  v5 = 0LL;
  v6 = 0LL;
  v10 = RtlUnicodeStringValidateWorker_0(DestinationString, (const size_t)SourceString, v2);
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      v5 = *((_QWORD *)v8 + 1);
      v6 = (unsigned __int64)*v8 >> 1;
    }
    Buffer = 0LL;
    v12 = 0LL;
    v10 = RtlUnicodeStringValidateWorker_0(SourceString, v7, v9);
    if ( v10 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v12 = (unsigned __int64)SourceString->Length >> 1;
      }
      v14 = 0;
      v10 = 0;
      v15 = v13 - v6;
      if ( !v15 )
        goto LABEL_14;
      v16 = v5 + 2 * v6 - (_QWORD)Buffer;
      do
      {
        if ( !v12 )
          break;
        --v12;
        *(wchar_t *)((char *)Buffer + v16) = *Buffer;
        ++v14;
        ++Buffer;
        --v15;
      }
      while ( v15 );
      if ( !v15 )
      {
LABEL_14:
        if ( v12 )
          v10 = -2147483643;
      }
      DestinationString->Length = 2 * (v6 + v14);
    }
  }
  return v10;
}
