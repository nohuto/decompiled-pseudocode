/*
 * XREFs of PiIsDriverBlocked @ 0x14067FCB0
 * Callers:
 *     PiLookupInDDB @ 0x14067FFCC (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x140139820 (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140723E40 (SdbReadEntryInformation.c)
 *     PiIsHVCIEnabled @ 0x140764B80 (PiIsHVCIEnabled.c)
 *     PnpLogEvent @ 0x140828FEC (PnpLogEvent.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  PVOID v5; // r13
  const WCHAR *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int DatabaseMatch; // r14d
  unsigned int v11; // ebx
  char v13; // di
  char IsHVCIEnabled; // al
  wchar_t *v15; // rax
  const WCHAR *v16; // rax
  int v17; // [rsp+40h] [rbp-41h] BYREF
  int v18; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h] BYREF
  int v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  _OWORD v23[2]; // [rsp+70h] [rbp-11h] BYREF

  v5 = PpDDBHandle;
  v7 = *(const WCHAR **)(a2 + 8);
  v8 = a3;
  v21 = a3;
  DatabaseMatch = SdbGetDatabaseMatch((__int64)PpDDBHandle, v7, a3, a3, a4);
  if ( !DatabaseMatch )
  {
    v11 = 0;
    goto LABEL_3;
  }
  v17 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v18 = 0;
  v19 = 0x400000000LL;
  v20 = 4;
  if ( (unsigned int)SdbTagRefToTagID(v5, DatabaseMatch, &DestinationString, &v18) )
  {
    if ( !(unsigned int)SdbQueryDataExTagID(
                          *(int *)&DestinationString.Length,
                          v18,
                          &v17,
                          (__int64)&v19 + 4,
                          (__int64)&v19) )
    {
      v13 = v17;
      v11 = 0;
      if ( (v17 & 0x10) != 0 )
      {
        IsHVCIEnabled = PiIsHVCIEnabled();
        v13 = v17;
        if ( IsHVCIEnabled )
          v11 = -1073740949;
      }
      else if ( (v17 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
      {
        v11 = ((v13 & 1) != 0) - 1073740949;
      }
      if ( (v13 & 8) != 0
        && (PnpSetupInProgress
         || PnpSetupPhaseInProgress
         || PnpSetupTypeInProgress
         || PnpSetupOOBEInProgress
         || PnpSetupUpgradeInProgress
         || PnpSetupRollbackActiveInProgress) )
      {
        v11 = -1073740949;
      }
      v8 = v21;
      goto LABEL_14;
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbQueryDataEx", 5688, (unsigned int)"Failed to convert tagref 0x%x to tagid");
  }
  v11 = -1073740949;
LABEL_14:
  if ( !(unsigned int)SdbReadEntryInformation(v5, DatabaseMatch, v23) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
LABEL_3:
  if ( v11 + 1073740949 <= 1 )
  {
    v15 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v15 )
      v16 = v15 + 1;
    else
      v16 = *(const WCHAR **)(a2 + 8);
    RtlInitUnicodeString(&DestinationString, v16);
    PnpLogEvent(&DestinationString, 0LL, v11, v23, 16);
  }
  if ( !v11 || v11 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, v8, v9, v11, v23);
    if ( v11 + 1073740949 <= 1 && a5 )
      *a5 = v23[0];
  }
  return v11;
}
