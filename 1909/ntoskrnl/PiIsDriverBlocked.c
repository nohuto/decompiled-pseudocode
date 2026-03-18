/*
 * XREFs of PiIsDriverBlocked @ 0x14070BEAC
 * Callers:
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x14013C100 (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsrchr @ 0x1401A2830 (wcsrchr.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatch @ 0x14070C138 (SdbGetDatabaseMatch.c)
 *     PnpLogEvent @ 0x1408618D8 (PnpLogEvent.c)
 *     PiIsHVCIEnabled @ 0x140862638 (PiIsHVCIEnabled.c)
 *     SdbQueryDataEx @ 0x1409215FC (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x140921A8C (SdbReadEntryInformation.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  PVOID v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int DatabaseMatch; // eax
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned int v12; // ebx
  char v14; // di
  char IsHVCIEnabled; // al
  wchar_t *v16; // rax
  const WCHAR *v17; // rax
  int v18; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  int v20; // [rsp+58h] [rbp-19h] BYREF
  int v21; // [rsp+5Ch] [rbp-15h] BYREF
  _BYTE v22[40]; // [rsp+60h] [rbp-11h] BYREF

  v5 = PpDDBHandle;
  *(_QWORD *)&DestinationString.Length = a3;
  v7 = a3;
  v8 = a4;
  memset(v22, 0, sizeof(v22));
  DatabaseMatch = SdbGetDatabaseMatch((_DWORD)PpDDBHandle, v8);
  v11 = DatabaseMatch;
  if ( DatabaseMatch )
  {
    v18 = 0;
    v20 = 4;
    v21 = 4;
    if ( (unsigned int)SdbQueryDataEx(v5, DatabaseMatch, v10, &v21, &v18, &v20) )
    {
      v12 = -1073740949;
    }
    else
    {
      v14 = v18;
      v12 = 0;
      if ( (v18 & 0x10) != 0 )
      {
        IsHVCIEnabled = PiIsHVCIEnabled();
        v14 = v18;
        if ( IsHVCIEnabled )
          v12 = -1073740949;
      }
      else if ( (v18 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
      {
        v12 = ((v14 & 1) != 0) - 1073740949;
      }
      if ( (v14 & 8) != 0
        && (PnpSetupInProgress || PnpSetupOOBEInProgress
                               || PnpSetupUpgradeInProgress
                               || PnpSetupRollbackActiveInProgress) )
      {
        v12 = -1073740949;
      }
      v7 = *(_QWORD *)&DestinationString.Length;
    }
    if ( !(unsigned int)SdbReadEntryInformation(v5, v11, v22) && (PiLoggedErrorEventsMask & 0x100) == 0 )
    {
      PiLoggedErrorEventsMask |= 0x100u;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v12 + 1073740949 <= 1 )
  {
    v16 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v16 )
      v17 = v16 + 1;
    else
      v17 = *(const WCHAR **)(a2 + 8);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, v17);
    PnpLogEvent(&DestinationString, 0LL, v12, v22, 16);
  }
  if ( !v12 || v12 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, v7, v10, v12, v22);
    if ( v12 + 1073740949 <= 1 && a5 )
      *a5 = *(_OWORD *)v22;
  }
  return v12;
}
