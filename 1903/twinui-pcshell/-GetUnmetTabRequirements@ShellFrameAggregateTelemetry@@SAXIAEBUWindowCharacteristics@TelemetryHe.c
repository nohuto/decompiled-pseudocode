/*
 * XREFs of ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x180230DC0
 * Callers:
 *     _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x18022B118 (_lambda_49c0b2fb711056d9762ca69f307c87f4_--operator().c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18004974C (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x180106114 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x180106360 (InsertEventEntryInLookUpTable.c)
 */

void __fastcall ShellFrameAggregateTelemetry::GetUnmetTabRequirements(
        int a1,
        const struct TelemetryHelpers::WindowCharacteristics *a2)
{
  __int64 v2; // r10
  __int64 v3; // r10
  const unsigned __int16 *v4; // rdx
  const WCHAR *v5; // rax
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  __int64 *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  int *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  int *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  int *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+110h] [rbp+10h] BYREF
  int v44; // [rsp+140h] [rbp+40h] BYREF

  v44 = a1;
  if ( (unsigned int)dword_180590558 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180590558, 0x400000000000uLL) )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v18 = &v13;
      v21 = &v44;
      v24 = v2 + 16;
      v27 = v2 + 20;
      v9 = *(_DWORD *)(v2 + 32);
      v30 = &v9;
      v10 = *(_DWORD *)(v2 + 24);
      v33 = &v10;
      v19 = 8;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 8;
      v40 = 8;
      v39 = v2 + 8;
      v13 = 1LL;
      v36 = v2;
      TlgCreateWsz(&pDesc, (LPCWSTR)(v2 + 36));
      v5 = SQM::CensorAppID(*(LPCWSTR *)(v3 + 552), v4);
      TlgCreateWsz(&v43, v5);
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = (ULONGLONG)off_180590560;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_180590560;
      v15 = &unk_1804CB5FB;
      UserData.Reserved = 2;
      v16 = 179;
      v17 = 1;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( (void (__fastcall *)(LPCGUID, __int64, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_180590580 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
        if ( AggregateFieldTypes )
          InsertEventEntryInLookUpTable(v7, (__int128 *)&EventDescriptor, v8, (__int64)&UserData, AggregateFieldTypes);
        else
          EventWriteTransfer(qword_180590578, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
      }
    }
  }
}
