/*
 * XREFs of NtUserCloseClipboard @ 0x1C0058AD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00593C4 (InsertEventEntryInLookUpTable.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  const struct _TraceLoggingMetadata_t *v1; // rcx
  __int64 v2; // rbx
  signed int LastError; // eax
  int v4; // r8d
  unsigned __int8 v5; // r9
  char *v6; // rcx
  char v7; // al
  char v10; // r8
  char v12; // al
  char v13; // r8
  char v14; // dl
  __int64 v15; // rax
  int v16; // eax
  bool v17; // sf
  signed int v18; // eax
  signed int v19; // [rsp+38h] [rbp-D0h] BYREF
  signed int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  void *v25; // [rsp+78h] [rbp-90h]
  int v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+84h] [rbp-84h]
  __int64 *v28; // [rsp+88h] [rbp-80h]
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+94h] [rbp-74h]
  const char *v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  signed int *v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  const char *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  signed int *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+108h] [rbp+0h] BYREF

  EnterCrit(0LL, 1LL);
  v0 = *(_QWORD *)(gptiCurrent + 416LL);
  v2 = (int)xxxCloseClipboard(0LL);
  if ( dword_1C031F230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
  {
    v30 = 0;
    v33 = 0;
    v23 = 1LL;
    v28 = &v23;
    v29 = 8;
    v31 = "FunctionExit";
    v32 = 13;
    if ( (_DWORD)v2 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v36 = 0;
    v19 = LastError;
    v35 = 4;
    v34 = &v19;
    TlgCreateWsz(&pDesc, (LPCWSTR)(v0 + 984));
    v1 = &TraceLoggingMetadata;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Ptr = (ULONGLONG)off_1C031F238;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1C031F238;
    v25 = &unk_1C02E7DE8;
    UserData.Reserved = 2;
    v26 = 62;
    v27 = 1;
    LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v5 = 0;
      v6 = (char *)&unk_1C02E7DEA;
      do
        v7 = *v6++;
      while ( v7 < 0 );
      while ( *v6++ )
        ;
      if ( v6 >= (char *)&unk_1C02E7E26 )
        goto LABEL_32;
      do
      {
        while ( *v6++ )
          ;
        v10 = *v6++;
        if ( v10 >= 0 )
          break;
        v12 = *v6;
        v13 = v10 & 0x7F;
        ++v6;
        if ( v12 >= 0 )
          break;
        while ( 1 )
        {
          v14 = *v6;
          if ( *v6 >= 0 )
            break;
          if ( v14 != (char)0x80 )
            goto LABEL_12;
          ++v6;
        }
        if ( v13 != 9 )
          break;
        if ( (unsigned __int8)(v14 - 113) > 2u )
          break;
        v15 = v5++;
        *((_BYTE *)&v30 + 16 * v15 + 1) = v14;
      }
      while ( v6 < (char *)&unk_1C02E7E26 );
LABEL_12:
      if ( v5 )
      {
        LOBYTE(v4) = 6;
        InsertEventEntryInLookUpTable((_DWORD)v6, (unsigned int)&EventDescriptor, v4, (unsigned int)&UserData, v5);
      }
      else
      {
LABEL_32:
        EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  if ( !(_DWORD)v2 )
  {
    v16 = UserGetLastError();
    v17 = v16 < 0;
    if ( v16 > 0 )
      v17 = 1;
    if ( v17 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v41 = 0;
      v39 = "FunctionExit";
      v40 = 13;
      v18 = UserGetLastError();
      if ( v18 > 0 )
        v18 = (unsigned __int16)v18 | 0x80070000;
      v44 = 0;
      v20 = v18;
      v43 = 4;
      v42 = &v20;
      TlgCreateWsz(&v45, (LPCWSTR)(v0 + 984));
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D9F, 0LL, 0LL, 5u, &pData);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
