/*
 * XREFs of CmVirtualKCBToRealPath @ 0x1407F33A0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v5; // rdi
  unsigned int v6; // ebp
  int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int16 v9; // r14
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING *v12; // [rsp+60h] [rbp+18h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v12 = 0LL;
  CmpConstructNameWithStatus(a1, &v12);
  v5 = v12;
  if ( v12 )
  {
    v6 = 0;
    v7 = 5;
    v8 = 0LL;
    while ( v12->Buffer[v8 / 2] != 92 || --v7 )
    {
      v8 = 2LL * ++v6;
      if ( v8 >= v12->Length )
      {
        appended = -1073741811;
        goto LABEL_14;
      }
    }
    v9 = v12->Length + 2 * (9 - v6);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12->Length + 2 * (9 - v6), 0x624E4D43u);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a2->MaximumLength = v9;
      a2->Length = 0;
      Source = *v5;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Source.Length = v5->Length - 2 * v6,
            Source.Buffer += v6,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeAnsiString(a2);
      }
    }
LABEL_14:
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
