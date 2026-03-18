/*
 * XREFs of NtUserCloseClipboard @ 0x1C00D9890
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  signed int LastError; // eax
  unsigned __int8 v7; // r9
  char *v8; // rcx
  char v9; // al
  char v12; // r8
  char v14; // al
  char v15; // r8
  char v16; // dl
  __int64 v17; // rax
  int v18; // eax
  bool v19; // sf
  signed int v20; // eax
  signed int v21; // [rsp+38h] [rbp-D0h] BYREF
  signed int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  void *v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 *v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  const char *v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+94h] [rbp-74h]
  signed int *v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  const char *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  signed int *v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h]
  int v44; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+F8h] [rbp-10h] BYREF

  EnterCrit(0LL, 1LL);
  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = (int)xxxCloseClipboard(0LL);
  if ( dword_1C030C240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
  {
    v30 = 0;
    v33 = 0;
    v24 = 1LL;
    v28 = &v24;
    v29 = 8;
    v31 = "FunctionExit";
    v32 = 13;
    if ( (_DWORD)v3 )
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
    v21 = LastError;
    v35 = 4;
    v34 = &v21;
    TlgCreateWsz(&pDesc, (LPCWSTR)(v0 + 992));
    v2 = ((unsigned int)&unk_1C02D5BD5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Ptr = (ULONGLONG)off_1C030C248;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C02D5BD5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    UserData.Size = *(unsigned __int16 *)off_1C030C248;
    v26 = &unk_1C02D5BE0;
    UserData.Reserved = 2;
    v27 = 0x10000003ELL;
    if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v7 = 0;
      v8 = (char *)&unk_1C02D5BE2;
      do
        v9 = *v8++;
      while ( v9 < 0 );
      while ( *v8++ )
        ;
      if ( v8 >= (char *)&unk_1C02D5C1E )
        goto LABEL_32;
      do
      {
        while ( *v8++ )
          ;
        v12 = *v8++;
        if ( v12 >= 0 )
          break;
        v14 = *v8;
        v15 = v12 & 0x7F;
        ++v8;
        if ( v14 >= 0 )
          break;
        while ( 1 )
        {
          v16 = *v8;
          if ( *v8 >= 0 )
            break;
          if ( v16 != (char)0x80 )
            goto LABEL_12;
          ++v8;
        }
        if ( v15 != 9 )
          break;
        if ( (unsigned __int8)(v16 - 113) > 2u )
          break;
        v17 = v7++;
        *((_BYTE *)&v30 + 16 * v17 + 1) = v16;
      }
      while ( v8 < (char *)&unk_1C02D5C1E );
LABEL_12:
      if ( v7 )
      {
        LOBYTE(v4) = 6;
        InsertEventEntryInLookUpTable((_DWORD)v8, (unsigned int)&EventDescriptor, v4, (unsigned int)&UserData, v7);
      }
      else
      {
LABEL_32:
        EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  if ( !(_DWORD)v3 )
  {
    v18 = UserGetLastError();
    v19 = v18 < 0;
    if ( v18 > 0 )
      v19 = 1;
    if ( v19 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v41 = 0;
      v39 = "FunctionExit";
      v40 = 13;
      v20 = UserGetLastError();
      if ( v20 > 0 )
        v20 = (unsigned __int16)v20 | 0x80070000;
      v44 = 0;
      v22 = v20;
      v43 = 4;
      v42 = &v22;
      TlgCreateWsz(&v45, (LPCWSTR)(v0 + 992));
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5B97, 0LL, 0LL, 5u, &pData);
    }
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4, v5);
  return v3;
}
