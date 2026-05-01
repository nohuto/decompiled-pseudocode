/*
 * XREFs of ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1801DD7D0
 * Callers:
 *     _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x1801D6754 (_lambda_49c0b2fb711056d9762ca69f307c87f4_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1800E3AF4 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1800E3D40 (InsertEventEntryInLookUpTable.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 */

void __fastcall ShellFrameAggregateTelemetry::GetUnmetTabRequirements(
        int a1,
        const struct TelemetryHelpers::WindowCharacteristics *a2)
{
  __int64 v2; // r10
  __int64 v3; // r10
  const WCHAR *v4; // rax
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  void *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  __int64 *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  int *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+100h] [rbp+0h] BYREF
  int v42; // [rsp+130h] [rbp+30h] BYREF

  v42 = a1;
  if ( (unsigned int)dword_1805064A8 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1805064A8, 0x400000000000uLL) )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v16 = &v11;
      v19 = &v42;
      v22 = v2 + 16;
      v25 = v2 + 20;
      v8 = *(_DWORD *)(v2 + 32);
      v28 = &v8;
      v9 = *(_DWORD *)(v2 + 24);
      v31 = &v9;
      v17 = 8;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 8;
      v38 = 8;
      v37 = v2 + 8;
      v11 = 1LL;
      v34 = v2;
      TlgCreateWsz(&pDesc, (LPCWSTR)(v2 + 36));
      v4 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(*(LPCWSTR *)(v3 + 552));
      TlgCreateWsz(&v41, v4);
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = (ULONGLONG)off_1805064B0;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180456D66 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      UserData.Size = *(unsigned __int16 *)off_1805064B0;
      v13 = &unk_180456D71;
      UserData.Reserved = 2;
      v14 = 179;
      v15 = 1;
      if ( (void (__fastcall *)(LPCGUID, __int64, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1805064D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes(
                                ((unsigned int)&unk_180456D66 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                                (__int64)&UserData);
        if ( AggregateFieldTypes )
          InsertEventEntryInLookUpTable(v6, (__int128 *)&EventDescriptor, v7, (__int64)&UserData, AggregateFieldTypes);
        else
          EventWriteTransfer(qword_1805064C8, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
      }
    }
  }
}
