/*
 * XREFs of NtUserGetClipboardData @ 0x1C0125AC0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00B7ED4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00B81F4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0127258 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  const WCHAR *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  const struct _TraceLoggingMetadata_t *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v15; // rcx
  __int64 ClipboardData; // rsi
  int v17; // eax
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  ULONG64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed int LastError; // eax
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  int v32; // eax
  bool v33; // sf
  signed int v34; // eax
  signed int v36; // [rsp+34h] [rbp-4C4h] BYREF
  signed int v37; // [rsp+38h] [rbp-4C0h] BYREF
  HANDLE ThreadProcessId; // [rsp+40h] [rbp-4B8h]
  int v39; // [rsp+48h] [rbp-4B0h] BYREF
  int v40; // [rsp+4Ch] [rbp-4ACh] BYREF
  int v41; // [rsp+50h] [rbp-4A8h] BYREF
  int v42; // [rsp+54h] [rbp-4A4h] BYREF
  int v43; // [rsp+58h] [rbp-4A0h] BYREF
  int v44; // [rsp+5Ch] [rbp-49Ch] BYREF
  __int64 v45; // [rsp+70h] [rbp-488h] BYREF
  LONGLONG v46; // [rsp+78h] [rbp-480h] BYREF
  _QWORD v47[2]; // [rsp+80h] [rbp-478h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-468h] BYREF
  EVENT_DESCRIPTOR v49; // [rsp+A0h] [rbp-458h] BYREF
  EVENT_DESCRIPTOR v50; // [rsp+B0h] [rbp-448h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-438h]
  EVENT_DESCRIPTOR v52; // [rsp+E0h] [rbp-418h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-408h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-400h] BYREF
  __int64 v55; // [rsp+108h] [rbp-3F0h] BYREF
  _QWORD v56[3]; // [rsp+118h] [rbp-3E0h] BYREF
  LONGLONG TimeQuadPart; // [rsp+130h] [rbp-3C8h]
  LONGLONG v58; // [rsp+138h] [rbp-3C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp-3A8h] BYREF
  void *v60; // [rsp+160h] [rbp-398h]
  int v61; // [rsp+168h] [rbp-390h]
  int v62; // [rsp+16Ch] [rbp-38Ch]
  __int64 *v63; // [rsp+170h] [rbp-388h]
  __int64 v64; // [rsp+178h] [rbp-380h]
  const char *v65; // [rsp+180h] [rbp-378h]
  __int64 v66; // [rsp+188h] [rbp-370h]
  int *v67; // [rsp+190h] [rbp-368h]
  __int64 v68; // [rsp+198h] [rbp-360h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp-358h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B0h] [rbp-348h] BYREF
  void *v71; // [rsp+1C0h] [rbp-338h]
  int v72; // [rsp+1C8h] [rbp-330h]
  int v73; // [rsp+1CCh] [rbp-32Ch]
  __int64 *v74; // [rsp+1D0h] [rbp-328h]
  __int64 v75; // [rsp+1D8h] [rbp-320h]
  const char *v76; // [rsp+1E0h] [rbp-318h]
  __int64 v77; // [rsp+1E8h] [rbp-310h]
  int *v78; // [rsp+1F0h] [rbp-308h]
  __int64 v79; // [rsp+1F8h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+200h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+210h] [rbp-2E8h] BYREF
  void *v82; // [rsp+220h] [rbp-2D8h]
  int v83; // [rsp+228h] [rbp-2D0h]
  int v84; // [rsp+22Ch] [rbp-2CCh]
  __int64 *v85; // [rsp+230h] [rbp-2C8h]
  __int64 v86; // [rsp+238h] [rbp-2C0h]
  const char *v87; // [rsp+240h] [rbp-2B8h]
  __int64 v88; // [rsp+248h] [rbp-2B0h]
  int *v89; // [rsp+250h] [rbp-2A8h]
  __int64 v90; // [rsp+258h] [rbp-2A0h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+260h] [rbp-298h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+2D0h] [rbp-228h] BYREF
  void *v93; // [rsp+2E0h] [rbp-218h]
  int v94; // [rsp+2E8h] [rbp-210h]
  int v95; // [rsp+2ECh] [rbp-20Ch]
  __int64 *v96; // [rsp+2F0h] [rbp-208h]
  __int64 v97; // [rsp+2F8h] [rbp-200h]
  const char *v98; // [rsp+300h] [rbp-1F8h]
  __int64 v99; // [rsp+308h] [rbp-1F0h]
  signed int *v100; // [rsp+310h] [rbp-1E8h]
  __int64 v101; // [rsp+318h] [rbp-1E0h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+320h] [rbp-1D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+330h] [rbp-1C8h] BYREF
  const char *v104; // [rsp+350h] [rbp-1A8h]
  __int64 v105; // [rsp+358h] [rbp-1A0h]
  int *v106; // [rsp+360h] [rbp-198h]
  __int64 v107; // [rsp+368h] [rbp-190h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+370h] [rbp-188h] BYREF
  EVENT_DATA_DESCRIPTOR v109; // [rsp+380h] [rbp-178h] BYREF
  const char *v110; // [rsp+3A0h] [rbp-158h]
  __int64 v111; // [rsp+3A8h] [rbp-150h]
  int *v112; // [rsp+3B0h] [rbp-148h]
  __int64 v113; // [rsp+3B8h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+3C0h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR v115; // [rsp+3D0h] [rbp-128h] BYREF
  const char *v116; // [rsp+3F0h] [rbp-108h]
  __int64 v117; // [rsp+3F8h] [rbp-100h]
  int *v118; // [rsp+400h] [rbp-F8h]
  __int64 v119; // [rsp+408h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+410h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR v121; // [rsp+470h] [rbp-88h] BYREF
  const char *v122; // [rsp+490h] [rbp-68h]
  __int64 v123; // [rsp+498h] [rbp-60h]
  signed int *v124; // [rsp+4A0h] [rbp-58h]
  __int64 v125; // [rsp+4A8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+4B0h] [rbp-48h] BYREF

  v2 = a2;
  v45 = (__int64)a2;
  memset(v56, 0, sizeof(v56));
  v51 = 0uLL;
  EnterCrit(0LL, 1LL);
  v4 = (const WCHAR *)(*(_QWORD *)(gptiCurrent + 416LL) + 984LL);
  v47[1] = v4;
  v13 = CheckClipboardAccess(v6, v5, v7, v8);
  if ( !v13 )
  {
    if ( dword_1C0321230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
      {
        v53 = 1LL;
        v63 = &v53;
        v64 = 8LL;
        v65 = "AccessDenied";
        v66 = 13LL;
        v39 = -2147024891;
        v67 = &v39;
        v68 = 4LL;
        TlgCreateWsz(&pDesc, v4);
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C0321238;
        UserData.Size = *(unsigned __int16 *)off_1C0321238;
        UserData.Reserved = 2;
        v60 = &unk_1C02E8712;
        v61 = 64;
        v62 = 1;
        v10 = &TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
          if ( AggregateFieldTypes )
            InsertEventEntryInLookUpTable(v15, (__int64)&EventDescriptor, 6, (__int64)&UserData, AggregateFieldTypes);
          else
            EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v104 = "AccessDenied";
      v105 = 13LL;
      v40 = -2147024891;
      v106 = &v40;
      v107 = 4LL;
      TlgCreateWsz(&v108, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E86C7, 0LL, 0LL, 5u, &pData);
    }
LABEL_11:
    ClipboardData = 0LL;
    goto LABEL_65;
  }
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 2;
  else
    v17 = 0;
  if ( v17 )
  {
    UserSetLastError(5LL, v9, v11, v12);
    if ( dword_1C0321230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
      {
        v54 = 1LL;
        v74 = &v54;
        v75 = 8LL;
        v76 = "RestrictedThread";
        v77 = 17LL;
        v41 = -2147024891;
        v78 = &v41;
        v79 = 4LL;
        TlgCreateWsz(&v80, v4);
        *(_DWORD *)&v49.Id = 184549376;
        *(_DWORD *)&v49.Level = 5;
        v49.Keyword = 0x400000000000LL;
        v70.Ptr = (ULONGLONG)off_1C0321238;
        v70.Size = *(unsigned __int16 *)off_1C0321238;
        v70.Reserved = 2;
        v71 = &unk_1C02E8712;
        v72 = 64;
        v73 = 1;
        v10 = &TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v18 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v70);
          if ( v18 )
            InsertEventEntryInLookUpTable(v19, (__int64)&v49, 6, (__int64)&v70, v18);
          else
            EtwWriteTransfer(RegHandle, &v49, 0LL, 0LL, 6u, &v70);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v110 = "RestrictedThread";
      v111 = 17LL;
      v42 = -2147024891;
      v112 = &v42;
      v113 = 4LL;
      TlgCreateWsz(&v114, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E86C7, 0LL, 0LL, 5u, &v109);
    }
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 876LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock(v13, v56, UserDereferenceObject, v12);
    ObfReferenceObject((PVOID)v13);
    LODWORD(ThreadProcessId) = 0;
    v46 = 0LL;
    v24 = *(_QWORD *)(v13 + 80);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 16);
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v25);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v25 + 416));
      v46 = TimeQuadPart;
      v2 = (_OWORD *)v45;
    }
    v58 = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 416LL));
    v47[0] = v58;
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 56LL),
      v47,
      (unsigned int)ThreadProcessId,
      &v46,
      *(_DWORD *)(v13 + 112));
    LODWORD(v51) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v13, a1);
    if ( ClipboardData )
    {
      v26 = MmUserProbeAddress;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_OWORD *)MmUserProbeAddress;
      *v2 = v51;
    }
    PopAndFreeW32ThreadLock((__int64)v56, v26, v27, v28);
    if ( dword_1C0321230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
    {
      v55 = 1LL;
      v96 = &v55;
      v97 = 8LL;
      v98 = "FunctionExit";
      v99 = 13LL;
      if ( ClipboardData )
      {
        v36 = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        v36 = LastError;
      }
      v100 = &v36;
      v101 = 4LL;
      TlgCreateWsz(&v102, v4);
      *(_DWORD *)&v52.Id = 184549376;
      *(_DWORD *)&v52.Level = 5;
      v52.Keyword = 0x400000000000LL;
      v92.Ptr = (ULONGLONG)off_1C0321238;
      v92.Size = *(unsigned __int16 *)off_1C0321238;
      v92.Reserved = 2;
      v93 = &unk_1C02E8712;
      v94 = 64;
      v95 = 1;
      v10 = &TraceLoggingMetadata;
      LODWORD(ThreadProcessId) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v30 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v92);
        if ( v30 )
          InsertEventEntryInLookUpTable(v31, (__int64)&v52, 6, (__int64)&v92, v30);
        else
          EtwWriteTransfer(RegHandle, &v52, 0LL, 0LL, 6u, &v92);
      }
    }
    if ( !ClipboardData )
    {
      v32 = UserGetLastError();
      v33 = v32 < 0;
      if ( v32 > 0 )
        v33 = 1;
      if ( v33 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v122 = "FunctionExit";
        v123 = 13LL;
        v34 = UserGetLastError();
        if ( v34 > 0 )
          v34 = (unsigned __int16)v34 | 0x80070000;
        v37 = v34;
        v124 = &v37;
        v125 = 4LL;
        TlgCreateWsz(&v126, v4);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E86C7, 0LL, 0LL, 5u, &v121);
      }
    }
  }
  else
  {
    if ( dword_1C0321230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
      {
        v45 = 1LL;
        v85 = &v45;
        v86 = 8LL;
        v87 = "UnsupportedFormatForLowBoxApp";
        v88 = 30LL;
        v43 = -2147024891;
        v89 = &v43;
        v90 = 4LL;
        TlgCreateWsz(&v91, v4);
        *(_DWORD *)&v50.Id = 184549376;
        *(_DWORD *)&v50.Level = 5;
        v50.Keyword = 0x400000000000LL;
        v81.Ptr = (ULONGLONG)off_1C0321238;
        v81.Size = *(unsigned __int16 *)off_1C0321238;
        v81.Reserved = 2;
        v82 = &unk_1C02E8712;
        v83 = 64;
        v84 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v22 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v81);
          if ( v22 )
            InsertEventEntryInLookUpTable(v23, (__int64)&v50, 6, (__int64)&v81, v22);
          else
            EtwWriteTransfer(RegHandle, &v50, 0LL, 0LL, 6u, &v81);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v116 = "UnsupportedFormatForLowBoxApp";
      v117 = 30LL;
      v44 = -2147024891;
      v118 = &v44;
      v119 = 4LL;
      TlgCreateWsz(&v120, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E86C7, 0LL, 0LL, 5u, &v115);
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL, v20, v21, v12);
  }
LABEL_65:
  UserSessionSwitchLeaveCrit(v10);
  return ClipboardData;
}
