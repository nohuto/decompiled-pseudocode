/*
 * XREFs of PnpTraceInterruptUsage @ 0x14016DBDC
 * Callers:
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PnpTraceInterruptUsage(int a1)
{
  ETWENABLECALLBACK *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r9
  unsigned __int8 v4; // r8
  char *v5; // rdx
  char v6; // al
  char v9; // r9
  char *v10; // rdx
  char v11; // al
  char v12; // r9
  char v13; // cl
  __int64 v14; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  __int64 v17; // [rsp+50h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+1Fh] BYREF
  void *v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+74h] [rbp+3Bh]
  __int64 *v22; // [rsp+78h] [rbp+3Fh]
  __int64 v23; // [rsp+80h] [rbp+47h]

  LOBYTE(v1) = a1;
  PnpTraceInterruptCount += a1;
  if ( stru_140400BC8.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v17 = v3;
      v22 = &v17;
      v23 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)stru_140400BC8.ProviderMetadataPtr;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_14036E323 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v2;
      UserData.Size = *stru_140400BC8.ProviderMetadataPtr;
      v19 = &unk_14036E32E;
      v1 = TlgAggregateInternalRegisteredProviderEtwCallback;
      UserData.Reserved = 2;
      v20 = 43;
      v21 = 1;
      if ( (ETWENABLECALLBACK *)stru_140400BC8.EnableCallback == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v4 = 0;
        v5 = (char *)&unk_14036E330;
        do
          v6 = *v5++;
        while ( v6 < 0 );
        while ( *v5++ )
          ;
        if ( v5 >= (char *)&unk_14036E359 )
          goto LABEL_21;
        do
        {
          while ( *v5++ )
            ;
          v9 = *v5;
          v10 = v5 + 1;
          if ( v9 >= 0 )
            break;
          v11 = *v10;
          v12 = v9 & 0x7F;
          v5 = v10 + 1;
          if ( v11 >= 0 )
            break;
          while ( 1 )
          {
            v13 = *v5;
            if ( *v5 >= 0 )
              break;
            if ( v13 != (char)0x80 )
              goto LABEL_19;
            ++v5;
          }
          if ( v12 != 9 )
            break;
          if ( (unsigned __int8)(v13 - 113) > 2u )
            break;
          v14 = v4++;
          *((_BYTE *)&v23 + 16 * v14 + 5) = v13;
        }
        while ( v5 < (char *)&unk_14036E359 );
LABEL_19:
        if ( v4 )
          LOBYTE(v1) = InsertEventEntryInLookUpTable(
                         (__int64)&stru_140400BC8,
                         &EventDescriptor,
                         3u,
                         (__int64)&UserData,
                         v4);
        else
LABEL_21:
          LOBYTE(v1) = EtwWriteEx(stru_140400BC8.RegHandle, &EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return (char)v1;
}
