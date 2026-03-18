/*
 * XREFs of BcdOpenObject @ 0x140712E44
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x1406DF998 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140710FC8 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1407118A8 (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1408A3114 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408F0DB4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D5C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408F21B4 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1408F2DC0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1408F36A8 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1408F4908 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F4BE8 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E59C (BiIsOfflineHandle.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AF0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407140D4 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1407142C4 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140714D44 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408F0DB4 (BiGetDefaultBootEntryIdentifier.c)
 */

__int64 __fastcall BcdOpenObject(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char v7; // r12
  __int64 result; // rax
  int v9; // eax
  int v10; // ebx
  wchar_t *Buffer; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int CurrentBootEntryIdentifier; // eax
  int v15; // eax
  const wchar_t *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v20[6]; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( (int)result < 0 )
    return result;
  *a3 = 0LL;
  v18 = 0LL;
  UnicodeString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx(a2, (__int64)&UnicodeString, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
    goto LABEL_20;
  }
  Buffer = UnicodeString.Buffer;
  BiLogMessage(2LL, L"Opening object %s", UnicodeString.Buffer);
  v12 = BiOpenKey(a1, L"Objects", 131097LL, &v18);
  v10 = v12;
  if ( v12 < 0 )
  {
    v16 = L"Failed to open key for all objects. Status: %x";
    v17 = 4LL;
LABEL_28:
    BiLogMessage(v17, v16, (unsigned int)v12);
    goto LABEL_6;
  }
  if ( (unsigned __int8)BiIsObjectAliased(a2, &v21) )
  {
    if ( v21 == 1 )
    {
      CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(v20);
    }
    else
    {
      if ( v21 != 2 )
      {
        v10 = -1073741811;
        goto LABEL_15;
      }
      CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(a1, v20);
    }
    v10 = CurrentBootEntryIdentifier;
LABEL_15:
    if ( v10 < 0 )
    {
      BiLogMessage(4LL, L"Failed to get aliased identifier. Status: %x", (unsigned int)v10);
      goto LABEL_6;
    }
    RtlFreeAnsiString(&UnicodeString);
    UnicodeString.Buffer = 0LL;
    v15 = RtlStringFromGUIDEx(v20, (__int64)&UnicodeString, 1);
    v10 = v15;
    if ( v15 >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      BiLogMessage(2LL, L"Object alias resolves to %s", UnicodeString.Buffer);
      goto LABEL_5;
    }
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v15);
LABEL_20:
    Buffer = UnicodeString.Buffer;
    goto LABEL_6;
  }
LABEL_5:
  v12 = BiOpenKey(v18, Buffer, 983103LL, a3);
  v10 = v12;
  if ( v12 < 0 )
  {
    v16 = L"Failed to open object's key. Status: %x";
    v17 = 4LL;
    if ( v12 == -1073741772 )
      v17 = 2LL;
    goto LABEL_28;
  }
LABEL_6:
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  v13 = v18;
  if ( v18 )
    BiCloseKey(v18);
  LOBYTE(v13) = v7;
  BiReleaseBcdSyncMutant(v13);
  return (unsigned int)v10;
}
