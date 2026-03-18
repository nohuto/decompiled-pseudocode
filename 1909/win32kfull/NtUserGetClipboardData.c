/*
 * XREFs of NtUserGetClipboardData @ 0x1C00FF9B0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00593C4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00596E4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     xxxGetClipboardData @ 0x1C01007A4 (xxxGetClipboardData.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01352D8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  const WCHAR *v4; // r15
  __int64 v5; // rdx
  const struct _TraceLoggingMetadata_t *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v11; // rcx
  __int64 ClipboardData; // rsi
  int v13; // eax
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  ULONG64 v23; // rdx
  __int64 v24; // r8
  signed int LastError; // eax
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // sf
  signed int v30; // eax
  signed int v32; // [rsp+34h] [rbp-4C4h] BYREF
  signed int v33; // [rsp+38h] [rbp-4C0h] BYREF
  HANDLE ThreadProcessId; // [rsp+40h] [rbp-4B8h]
  int v35; // [rsp+48h] [rbp-4B0h] BYREF
  int v36; // [rsp+4Ch] [rbp-4ACh] BYREF
  int v37; // [rsp+50h] [rbp-4A8h] BYREF
  int v38; // [rsp+54h] [rbp-4A4h] BYREF
  int v39; // [rsp+58h] [rbp-4A0h] BYREF
  int v40; // [rsp+5Ch] [rbp-49Ch] BYREF
  __int64 v41; // [rsp+70h] [rbp-488h] BYREF
  LONGLONG v42; // [rsp+78h] [rbp-480h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-478h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-468h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+A0h] [rbp-458h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+B0h] [rbp-448h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-438h]
  EVENT_DESCRIPTOR v48; // [rsp+E0h] [rbp-418h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-408h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-400h] BYREF
  __int64 v51; // [rsp+108h] [rbp-3F0h] BYREF
  _QWORD v52[3]; // [rsp+118h] [rbp-3E0h] BYREF
  LONGLONG TimeQuadPart; // [rsp+130h] [rbp-3C8h]
  LONGLONG v54; // [rsp+138h] [rbp-3C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp-3A8h] BYREF
  void *v56; // [rsp+160h] [rbp-398h]
  int v57; // [rsp+168h] [rbp-390h]
  int v58; // [rsp+16Ch] [rbp-38Ch]
  __int64 *v59; // [rsp+170h] [rbp-388h]
  __int64 v60; // [rsp+178h] [rbp-380h]
  const char *v61; // [rsp+180h] [rbp-378h]
  __int64 v62; // [rsp+188h] [rbp-370h]
  int *v63; // [rsp+190h] [rbp-368h]
  __int64 v64; // [rsp+198h] [rbp-360h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp-358h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1B0h] [rbp-348h] BYREF
  void *v67; // [rsp+1C0h] [rbp-338h]
  int v68; // [rsp+1C8h] [rbp-330h]
  int v69; // [rsp+1CCh] [rbp-32Ch]
  __int64 *v70; // [rsp+1D0h] [rbp-328h]
  __int64 v71; // [rsp+1D8h] [rbp-320h]
  const char *v72; // [rsp+1E0h] [rbp-318h]
  __int64 v73; // [rsp+1E8h] [rbp-310h]
  int *v74; // [rsp+1F0h] [rbp-308h]
  __int64 v75; // [rsp+1F8h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+200h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+210h] [rbp-2E8h] BYREF
  void *v78; // [rsp+220h] [rbp-2D8h]
  int v79; // [rsp+228h] [rbp-2D0h]
  int v80; // [rsp+22Ch] [rbp-2CCh]
  __int64 *v81; // [rsp+230h] [rbp-2C8h]
  __int64 v82; // [rsp+238h] [rbp-2C0h]
  const char *v83; // [rsp+240h] [rbp-2B8h]
  __int64 v84; // [rsp+248h] [rbp-2B0h]
  int *v85; // [rsp+250h] [rbp-2A8h]
  __int64 v86; // [rsp+258h] [rbp-2A0h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+260h] [rbp-298h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+2D0h] [rbp-228h] BYREF
  void *v89; // [rsp+2E0h] [rbp-218h]
  int v90; // [rsp+2E8h] [rbp-210h]
  int v91; // [rsp+2ECh] [rbp-20Ch]
  __int64 *v92; // [rsp+2F0h] [rbp-208h]
  __int64 v93; // [rsp+2F8h] [rbp-200h]
  const char *v94; // [rsp+300h] [rbp-1F8h]
  __int64 v95; // [rsp+308h] [rbp-1F0h]
  signed int *v96; // [rsp+310h] [rbp-1E8h]
  __int64 v97; // [rsp+318h] [rbp-1E0h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+320h] [rbp-1D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+330h] [rbp-1C8h] BYREF
  const char *v100; // [rsp+350h] [rbp-1A8h]
  __int64 v101; // [rsp+358h] [rbp-1A0h]
  int *v102; // [rsp+360h] [rbp-198h]
  __int64 v103; // [rsp+368h] [rbp-190h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+370h] [rbp-188h] BYREF
  EVENT_DATA_DESCRIPTOR v105; // [rsp+380h] [rbp-178h] BYREF
  const char *v106; // [rsp+3A0h] [rbp-158h]
  __int64 v107; // [rsp+3A8h] [rbp-150h]
  int *v108; // [rsp+3B0h] [rbp-148h]
  __int64 v109; // [rsp+3B8h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+3C0h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR v111; // [rsp+3D0h] [rbp-128h] BYREF
  const char *v112; // [rsp+3F0h] [rbp-108h]
  __int64 v113; // [rsp+3F8h] [rbp-100h]
  int *v114; // [rsp+400h] [rbp-F8h]
  __int64 v115; // [rsp+408h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+410h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR v117; // [rsp+470h] [rbp-88h] BYREF
  const char *v118; // [rsp+490h] [rbp-68h]
  __int64 v119; // [rsp+498h] [rbp-60h]
  signed int *v120; // [rsp+4A0h] [rbp-58h]
  __int64 v121; // [rsp+4A8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+4B0h] [rbp-48h] BYREF

  v2 = a2;
  v41 = (__int64)a2;
  memset(v52, 0, sizeof(v52));
  v47 = 0uLL;
  EnterCrit(0LL, 1LL);
  v4 = (const WCHAR *)(*(_QWORD *)(gptiCurrent + 416LL) + 984LL);
  v43[1] = v4;
  v9 = CheckClipboardAccess();
  if ( !v9 )
  {
    if ( dword_1C031F230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
      {
        v49 = 1LL;
        v59 = &v49;
        v60 = 8LL;
        v61 = "AccessDenied";
        v62 = 13LL;
        v35 = -2147024891;
        v63 = &v35;
        v64 = 4LL;
        TlgCreateWsz(&pDesc, v4);
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C031F238;
        UserData.Size = *(unsigned __int16 *)off_1C031F238;
        UserData.Reserved = 2;
        v56 = &unk_1C02E7CD2;
        v57 = 64;
        v58 = 1;
        v6 = &TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
          if ( AggregateFieldTypes )
            InsertEventEntryInLookUpTable(v11, (__int64)&EventDescriptor, 6, (__int64)&UserData, AggregateFieldTypes);
          else
            EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v100 = "AccessDenied";
      v101 = 13LL;
      v36 = -2147024891;
      v102 = &v36;
      v103 = 4LL;
      TlgCreateWsz(&v104, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C87, 0LL, 0LL, 5u, &pData);
    }
LABEL_11:
    ClipboardData = 0LL;
    goto LABEL_65;
  }
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 2;
  else
    v13 = 0;
  if ( v13 )
  {
    UserSetLastError(5LL, v5, v7, v8);
    if ( dword_1C031F230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
      {
        v50 = 1LL;
        v70 = &v50;
        v71 = 8LL;
        v72 = "RestrictedThread";
        v73 = 17LL;
        v37 = -2147024891;
        v74 = &v37;
        v75 = 4LL;
        TlgCreateWsz(&v76, v4);
        *(_DWORD *)&v45.Id = 184549376;
        *(_DWORD *)&v45.Level = 5;
        v45.Keyword = 0x400000000000LL;
        v66.Ptr = (ULONGLONG)off_1C031F238;
        v66.Size = *(unsigned __int16 *)off_1C031F238;
        v66.Reserved = 2;
        v67 = &unk_1C02E7CD2;
        v68 = 64;
        v69 = 1;
        v6 = &TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v14 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v66);
          if ( v14 )
            InsertEventEntryInLookUpTable(v15, (__int64)&v45, 6, (__int64)&v66, v14);
          else
            EtwWriteTransfer(RegHandle, &v45, 0LL, 0LL, 6u, &v66);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v106 = "RestrictedThread";
      v107 = 17LL;
      v38 = -2147024891;
      v108 = &v38;
      v109 = 4LL;
      TlgCreateWsz(&v110, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C87, 0LL, 0LL, 5u, &v105);
    }
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 876LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock(v9, v52, UserDereferenceObject);
    ObfReferenceObject((PVOID)v9);
    LODWORD(ThreadProcessId) = 0;
    v42 = 0LL;
    v21 = *(_QWORD *)(v9 + 80);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 16);
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v22);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v22 + 416));
      v42 = TimeQuadPart;
      v2 = (_OWORD *)v41;
    }
    v54 = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 416LL));
    v43[0] = v54;
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 56LL),
      v43,
      (unsigned int)ThreadProcessId,
      &v42,
      *(_DWORD *)(v9 + 112));
    LODWORD(v47) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v9, a1);
    if ( ClipboardData )
    {
      v23 = MmUserProbeAddress;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_OWORD *)MmUserProbeAddress;
      *v2 = v47;
    }
    PopAndFreeW32ThreadLock((__int64)v52, v23, v24);
    if ( dword_1C031F230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
    {
      v51 = 1LL;
      v92 = &v51;
      v93 = 8LL;
      v94 = "FunctionExit";
      v95 = 13LL;
      if ( ClipboardData )
      {
        v32 = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        v32 = LastError;
      }
      v96 = &v32;
      v97 = 4LL;
      TlgCreateWsz(&v98, v4);
      *(_DWORD *)&v48.Id = 184549376;
      *(_DWORD *)&v48.Level = 5;
      v48.Keyword = 0x400000000000LL;
      v88.Ptr = (ULONGLONG)off_1C031F238;
      v88.Size = *(unsigned __int16 *)off_1C031F238;
      v88.Reserved = 2;
      v89 = &unk_1C02E7CD2;
      v90 = 64;
      v91 = 1;
      v6 = &TraceLoggingMetadata;
      LODWORD(ThreadProcessId) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v26 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v88);
        if ( v26 )
          InsertEventEntryInLookUpTable(v27, (__int64)&v48, 6, (__int64)&v88, v26);
        else
          EtwWriteTransfer(RegHandle, &v48, 0LL, 0LL, 6u, &v88);
      }
    }
    if ( !ClipboardData )
    {
      v28 = UserGetLastError();
      v29 = v28 < 0;
      if ( v28 > 0 )
        v29 = 1;
      if ( v29 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v118 = "FunctionExit";
        v119 = 13LL;
        v30 = UserGetLastError();
        if ( v30 > 0 )
          v30 = (unsigned __int16)v30 | 0x80070000;
        v33 = v30;
        v120 = &v33;
        v121 = 4LL;
        TlgCreateWsz(&v122, v4);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C87, 0LL, 0LL, 5u, &v117);
      }
    }
  }
  else
  {
    if ( dword_1C031F230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
      {
        v41 = 1LL;
        v81 = &v41;
        v82 = 8LL;
        v83 = "UnsupportedFormatForLowBoxApp";
        v84 = 30LL;
        v39 = -2147024891;
        v85 = &v39;
        v86 = 4LL;
        TlgCreateWsz(&v87, v4);
        *(_DWORD *)&v46.Id = 184549376;
        *(_DWORD *)&v46.Level = 5;
        v46.Keyword = 0x400000000000LL;
        v77.Ptr = (ULONGLONG)off_1C031F238;
        v77.Size = *(unsigned __int16 *)off_1C031F238;
        v77.Reserved = 2;
        v78 = &unk_1C02E7CD2;
        v79 = 64;
        v80 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v19 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v77);
          if ( v19 )
            InsertEventEntryInLookUpTable(v20, (__int64)&v46, 6, (__int64)&v77, v19);
          else
            EtwWriteTransfer(RegHandle, &v46, 0LL, 0LL, 6u, &v77);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v112 = "UnsupportedFormatForLowBoxApp";
      v113 = 30LL;
      v40 = -2147024891;
      v114 = &v40;
      v115 = 4LL;
      TlgCreateWsz(&v116, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C87, 0LL, 0LL, 5u, &v111);
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL, v16, v17, v18);
  }
LABEL_65:
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardData;
}
