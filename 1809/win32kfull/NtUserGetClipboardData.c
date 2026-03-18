/*
 * XREFs of NtUserGetClipboardData @ 0x1C00DCA10
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     InForegroundQueue @ 0x1C00D7FE0 (InForegroundQueue.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00DA534 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void *__fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  const WCHAR *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v13; // rcx
  void *ClipboardData; // rsi
  int v15; // eax
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  ULONG64 v25; // rdx
  signed int LastError; // eax
  unsigned __int8 v27; // al
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // sf
  signed int v31; // eax
  HANDLE ThreadProcessId; // [rsp+30h] [rbp-4A8h] BYREF
  int v34; // [rsp+38h] [rbp-4A0h] BYREF
  int v35; // [rsp+3Ch] [rbp-49Ch] BYREF
  int v36; // [rsp+40h] [rbp-498h] BYREF
  int v37; // [rsp+44h] [rbp-494h] BYREF
  int v38; // [rsp+48h] [rbp-490h] BYREF
  int v39; // [rsp+4Ch] [rbp-48Ch] BYREF
  signed int v40; // [rsp+60h] [rbp-478h] BYREF
  __int64 v41; // [rsp+68h] [rbp-470h] BYREF
  LONGLONG TimeQuadPart; // [rsp+70h] [rbp-468h] BYREF
  _QWORD v43[2]; // [rsp+78h] [rbp-460h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-450h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+98h] [rbp-440h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+A8h] [rbp-430h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-420h] BYREF
  EVENT_DESCRIPTOR v48; // [rsp+D8h] [rbp-400h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-3F0h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-3E8h] BYREF
  __int64 v51; // [rsp+100h] [rbp-3D8h] BYREF
  _QWORD v52[3]; // [rsp+118h] [rbp-3C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp-3A8h] BYREF
  void *v54; // [rsp+140h] [rbp-398h]
  int v55; // [rsp+148h] [rbp-390h]
  int v56; // [rsp+14Ch] [rbp-38Ch]
  __int64 *v57; // [rsp+150h] [rbp-388h]
  __int64 v58; // [rsp+158h] [rbp-380h]
  const char *v59; // [rsp+160h] [rbp-378h]
  __int64 v60; // [rsp+168h] [rbp-370h]
  int *v61; // [rsp+170h] [rbp-368h]
  __int64 v62; // [rsp+178h] [rbp-360h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp-358h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+190h] [rbp-348h] BYREF
  void *v65; // [rsp+1A0h] [rbp-338h]
  int v66; // [rsp+1A8h] [rbp-330h]
  int v67; // [rsp+1ACh] [rbp-32Ch]
  __int64 *v68; // [rsp+1B0h] [rbp-328h]
  __int64 v69; // [rsp+1B8h] [rbp-320h]
  const char *v70; // [rsp+1C0h] [rbp-318h]
  __int64 v71; // [rsp+1C8h] [rbp-310h]
  int *v72; // [rsp+1D0h] [rbp-308h]
  __int64 v73; // [rsp+1D8h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1E0h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1F0h] [rbp-2E8h] BYREF
  void *v76; // [rsp+200h] [rbp-2D8h]
  int v77; // [rsp+208h] [rbp-2D0h]
  int v78; // [rsp+20Ch] [rbp-2CCh]
  __int64 *v79; // [rsp+210h] [rbp-2C8h]
  __int64 v80; // [rsp+218h] [rbp-2C0h]
  const char *v81; // [rsp+220h] [rbp-2B8h]
  __int64 v82; // [rsp+228h] [rbp-2B0h]
  int *v83; // [rsp+230h] [rbp-2A8h]
  __int64 v84; // [rsp+238h] [rbp-2A0h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+240h] [rbp-298h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+2B0h] [rbp-228h] BYREF
  void *v87; // [rsp+2C0h] [rbp-218h]
  int v88; // [rsp+2C8h] [rbp-210h]
  int v89; // [rsp+2CCh] [rbp-20Ch]
  __int64 *v90; // [rsp+2D0h] [rbp-208h]
  __int64 v91; // [rsp+2D8h] [rbp-200h]
  const char *v92; // [rsp+2E0h] [rbp-1F8h]
  __int64 v93; // [rsp+2E8h] [rbp-1F0h]
  signed int *v94; // [rsp+2F0h] [rbp-1E8h]
  __int64 v95; // [rsp+2F8h] [rbp-1E0h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+300h] [rbp-1D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+310h] [rbp-1C8h] BYREF
  const char *v98; // [rsp+330h] [rbp-1A8h]
  __int64 v99; // [rsp+338h] [rbp-1A0h]
  int *v100; // [rsp+340h] [rbp-198h]
  __int64 v101; // [rsp+348h] [rbp-190h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+350h] [rbp-188h] BYREF
  EVENT_DATA_DESCRIPTOR v103; // [rsp+360h] [rbp-178h] BYREF
  const char *v104; // [rsp+380h] [rbp-158h]
  __int64 v105; // [rsp+388h] [rbp-150h]
  int *v106; // [rsp+390h] [rbp-148h]
  __int64 v107; // [rsp+398h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+3A0h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR v109; // [rsp+3B0h] [rbp-128h] BYREF
  const char *v110; // [rsp+3D0h] [rbp-108h]
  __int64 v111; // [rsp+3D8h] [rbp-100h]
  int *v112; // [rsp+3E0h] [rbp-F8h]
  __int64 v113; // [rsp+3E8h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+3F0h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR v115; // [rsp+450h] [rbp-88h] BYREF
  const char *v116; // [rsp+470h] [rbp-68h]
  __int64 v117; // [rsp+478h] [rbp-60h]
  HANDLE *p_ThreadProcessId; // [rsp+480h] [rbp-58h]
  __int64 v119; // [rsp+488h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+490h] [rbp-48h] BYREF

  v2 = a2;
  v41 = (__int64)a2;
  v47 = 0uLL;
  EnterCrit(0LL, 1LL);
  v4 = (const WCHAR *)(*(_QWORD *)(gptiCurrent + 424LL) + 992LL);
  v43[1] = v4;
  v11 = CheckClipboardAccess(v6, v5);
  if ( !v11 )
  {
    if ( dword_1C030C240 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
      {
        v49 = 1LL;
        v57 = &v49;
        v58 = 8LL;
        v59 = "AccessDenied";
        v60 = 13LL;
        v34 = -2147024891;
        v61 = &v34;
        v62 = 4LL;
        TlgCreateWsz(&pDesc, v4);
        v8 = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C030C248;
        UserData.Size = *(unsigned __int16 *)off_1C030C248;
        UserData.Reserved = 2;
        v54 = &unk_1C02D5ACA;
        v55 = 64;
        v56 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          AggregateFieldTypes = ExtractAggregateFieldTypes(v8, (__int64)&UserData);
          if ( AggregateFieldTypes )
            InsertEventEntryInLookUpTable(v13, &EventDescriptor, 6u, (__int64)&UserData, AggregateFieldTypes);
          else
            EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v98 = "AccessDenied";
      v99 = 13LL;
      v35 = -2147024891;
      v100 = &v35;
      v101 = 4LL;
      TlgCreateWsz(&v102, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5A7F, 0LL, 0LL, 5u, &pData);
    }
LABEL_11:
    ClipboardData = 0LL;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 2;
  else
    v15 = 0;
  if ( v15 )
  {
    UserSetLastError(5LL, v7, v9, v10);
    if ( dword_1C030C240 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
      {
        v50 = 1LL;
        v68 = &v50;
        v69 = 8LL;
        v70 = "RestrictedThread";
        v71 = 17LL;
        v36 = -2147024891;
        v72 = &v36;
        v73 = 4LL;
        TlgCreateWsz(&v74, v4);
        v8 = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&v45.Id = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&v45.Level = 5;
        v45.Keyword = 0x400000000000LL;
        v64.Ptr = (ULONGLONG)off_1C030C248;
        v64.Size = *(unsigned __int16 *)off_1C030C248;
        v64.Reserved = 2;
        v65 = &unk_1C02D5ACA;
        v66 = 64;
        v67 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v16 = ExtractAggregateFieldTypes(v8, (__int64)&v64);
          if ( v16 )
            InsertEventEntryInLookUpTable(v17, &v45, 6u, (__int64)&v64, v16);
          else
            EtwWriteTransfer(RegHandle, &v45, 0LL, 0LL, 6u, &v64);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v104 = "RestrictedThread";
      v105 = 17LL;
      v37 = -2147024891;
      v106 = &v37;
      v107 = 4LL;
      TlgCreateWsz(&v108, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5A7F, 0LL, 0LL, 5u, &v103);
    }
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 884LL)
    || InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock(v11, v52, UserDereferenceObject);
    ObfReferenceObject((PVOID)v11);
    LODWORD(ThreadProcessId) = 0;
    TimeQuadPart = 0LL;
    v23 = *(_QWORD *)(v11 + 80);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 16);
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v24);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v24 + 424));
      v2 = (_OWORD *)v41;
    }
    v43[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
      v43,
      (unsigned int)ThreadProcessId,
      &TimeQuadPart,
      *(_DWORD *)(v11 + 112));
    LODWORD(v47) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v11, a1, (__int64)&v47);
    if ( ClipboardData )
    {
      v25 = MmUserProbeAddress;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_OWORD *)MmUserProbeAddress;
      *v2 = v47;
    }
    PopAndFreeW32ThreadLock((__int64)v52, v25);
    if ( dword_1C030C240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
    {
      v51 = 1LL;
      v90 = &v51;
      v91 = 8LL;
      v92 = "FunctionExit";
      v93 = 13LL;
      if ( ClipboardData )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      v40 = LastError;
      v94 = &v40;
      v95 = 4LL;
      TlgCreateWsz(&v96, v4);
      v8 = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&v48.Id = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&v48.Level = 5;
      v48.Keyword = 0x400000000000LL;
      v86.Ptr = (ULONGLONG)off_1C030C248;
      v86.Size = *(unsigned __int16 *)off_1C030C248;
      v86.Reserved = 2;
      v87 = &unk_1C02D5ACA;
      v88 = 64;
      v89 = 1;
      if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v27 = ExtractAggregateFieldTypes(v8, (__int64)&v86);
        if ( v27 )
          InsertEventEntryInLookUpTable(v28, &v48, 6u, (__int64)&v86, v27);
        else
          EtwWriteTransfer(RegHandle, &v48, 0LL, 0LL, 6u, &v86);
      }
    }
    if ( !ClipboardData )
    {
      v29 = UserGetLastError();
      v30 = v29 < 0;
      if ( v29 > 0 )
        v30 = 1;
      if ( v30 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v116 = "FunctionExit";
        v117 = 13LL;
        v31 = UserGetLastError();
        if ( v31 > 0 )
          v31 = (unsigned __int16)v31 | 0x80070000;
        LODWORD(ThreadProcessId) = v31;
        p_ThreadProcessId = &ThreadProcessId;
        v119 = 4LL;
        TlgCreateWsz(&v120, v4);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5A7F, 0LL, 0LL, 5u, &v115);
      }
    }
  }
  else
  {
    if ( dword_1C030C240 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
      {
        v41 = 1LL;
        v79 = &v41;
        v80 = 8LL;
        v81 = "UnsupportedFormatForLowBoxApp";
        v82 = 30LL;
        v38 = -2147024891;
        v83 = &v38;
        v84 = 4LL;
        TlgCreateWsz(&v85, v4);
        *(_DWORD *)&v46.Id = ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&v46.Level = 5;
        v46.Keyword = 0x400000000000LL;
        v75.Ptr = (ULONGLONG)off_1C030C248;
        v75.Size = *(unsigned __int16 *)off_1C030C248;
        v75.Reserved = 2;
        v76 = &unk_1C02D5ACA;
        v77 = 64;
        v78 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v21 = ExtractAggregateFieldTypes(
                  ((unsigned int)&unk_1C02D5ABF - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                  (__int64)&v75);
          if ( v21 )
            InsertEventEntryInLookUpTable(v22, &v46, 6u, (__int64)&v75, v21);
          else
            EtwWriteTransfer(RegHandle, &v46, 0LL, 0LL, 6u, &v75);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v110 = "UnsupportedFormatForLowBoxApp";
      v111 = 30LL;
      v39 = -2147024891;
      v112 = &v39;
      v113 = 4LL;
      TlgCreateWsz(&v114, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5A7F, 0LL, 0LL, 5u, &v109);
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL, v18, v19, v20);
  }
LABEL_64:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return ClipboardData;
}
