/*
 * XREFs of NtUserSetClipboardData @ 0x1C0059EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00593C4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00596E4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _SetClipboardData @ 0x1C0059E20 (_SetClipboardData.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0137014 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  const WCHAR *v7; // r15
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v16; // rcx
  int v17; // edi
  const struct _TraceLoggingMetadata_t *v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  signed int LastError; // eax
  unsigned __int8 v27; // al
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // sf
  signed int v31; // eax
  signed int v33; // [rsp+34h] [rbp-484h] BYREF
  signed int v34; // [rsp+38h] [rbp-480h] BYREF
  LONGLONG v35; // [rsp+40h] [rbp-478h] BYREF
  int v36; // [rsp+48h] [rbp-470h] BYREF
  int v37; // [rsp+4Ch] [rbp-46Ch] BYREF
  int v38; // [rsp+50h] [rbp-468h] BYREF
  int v39; // [rsp+54h] [rbp-464h] BYREF
  int v40; // [rsp+58h] [rbp-460h] BYREF
  int v41; // [rsp+5Ch] [rbp-45Ch] BYREF
  LPCWSTR pwsz; // [rsp+70h] [rbp-448h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-440h] BYREF
  EVENT_DESCRIPTOR v44; // [rsp+88h] [rbp-430h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+98h] [rbp-420h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+A8h] [rbp-410h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-3F0h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-3D8h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-3D0h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-3C8h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-3C0h]
  LONGLONG TimeQuadPart; // [rsp+108h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp-3A8h] BYREF
  void *v54; // [rsp+120h] [rbp-398h]
  int v55; // [rsp+128h] [rbp-390h]
  int v56; // [rsp+12Ch] [rbp-38Ch]
  __int64 *v57; // [rsp+130h] [rbp-388h]
  __int64 v58; // [rsp+138h] [rbp-380h]
  const char *v59; // [rsp+140h] [rbp-378h]
  __int64 v60; // [rsp+148h] [rbp-370h]
  int *v61; // [rsp+150h] [rbp-368h]
  __int64 v62; // [rsp+158h] [rbp-360h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp-358h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+170h] [rbp-348h] BYREF
  void *v65; // [rsp+180h] [rbp-338h]
  int v66; // [rsp+188h] [rbp-330h]
  int v67; // [rsp+18Ch] [rbp-32Ch]
  __int64 *v68; // [rsp+190h] [rbp-328h]
  __int64 v69; // [rsp+198h] [rbp-320h]
  const char *v70; // [rsp+1A0h] [rbp-318h]
  __int64 v71; // [rsp+1A8h] [rbp-310h]
  int *v72; // [rsp+1B0h] [rbp-308h]
  __int64 v73; // [rsp+1B8h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1C0h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1D0h] [rbp-2E8h] BYREF
  void *v76; // [rsp+1E0h] [rbp-2D8h]
  int v77; // [rsp+1E8h] [rbp-2D0h]
  int v78; // [rsp+1ECh] [rbp-2CCh]
  __int64 *v79; // [rsp+1F0h] [rbp-2C8h]
  __int64 v80; // [rsp+1F8h] [rbp-2C0h]
  const char *v81; // [rsp+200h] [rbp-2B8h]
  __int64 v82; // [rsp+208h] [rbp-2B0h]
  int *v83; // [rsp+210h] [rbp-2A8h]
  __int64 v84; // [rsp+218h] [rbp-2A0h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+220h] [rbp-298h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+230h] [rbp-288h] BYREF
  void *v87; // [rsp+240h] [rbp-278h]
  int v88; // [rsp+248h] [rbp-270h]
  int v89; // [rsp+24Ch] [rbp-26Ch]
  __int64 *v90; // [rsp+250h] [rbp-268h]
  __int64 v91; // [rsp+258h] [rbp-260h]
  const char *v92; // [rsp+260h] [rbp-258h]
  __int64 v93; // [rsp+268h] [rbp-250h]
  signed int *v94; // [rsp+270h] [rbp-248h]
  __int64 v95; // [rsp+278h] [rbp-240h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+280h] [rbp-238h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp-1C8h] BYREF
  const char *v98; // [rsp+310h] [rbp-1A8h]
  __int64 v99; // [rsp+318h] [rbp-1A0h]
  int *v100; // [rsp+320h] [rbp-198h]
  __int64 v101; // [rsp+328h] [rbp-190h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+330h] [rbp-188h] BYREF
  EVENT_DATA_DESCRIPTOR v103; // [rsp+340h] [rbp-178h] BYREF
  const char *v104; // [rsp+360h] [rbp-158h]
  __int64 v105; // [rsp+368h] [rbp-150h]
  int *v106; // [rsp+370h] [rbp-148h]
  __int64 v107; // [rsp+378h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+380h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR v109; // [rsp+390h] [rbp-128h] BYREF
  const char *v110; // [rsp+3B0h] [rbp-108h]
  __int64 v111; // [rsp+3B8h] [rbp-100h]
  int *v112; // [rsp+3C0h] [rbp-F8h]
  __int64 v113; // [rsp+3C8h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+3D0h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR v115; // [rsp+3E0h] [rbp-D8h] BYREF
  const char *v116; // [rsp+400h] [rbp-B8h]
  __int64 v117; // [rsp+408h] [rbp-B0h]
  signed int *v118; // [rsp+410h] [rbp-A8h]
  __int64 v119; // [rsp+418h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+420h] [rbp-98h] BYREF

  v51 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  v7 = (const WCHAR *)(v6 + 984);
  pwsz = (LPCWSTR)(v6 + 984);
  v8 = *(_DWORD *)(v6 + 56);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v6);
  v35 = TimeQuadPart;
  EtwTraceUiAuditWriteClipboard(v8, &v35);
  v10 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL);
    v11 = *(_DWORD *)(v10 + 24) & 4;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 )
  {
    EtwTraceUiLimitWriteClipboard(v8, &v35);
    if ( dword_1C031F230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
      {
        v48 = 1LL;
        v57 = &v48;
        v58 = 8LL;
        v59 = "RestrictedThread";
        v60 = 17LL;
        v36 = -2147024891;
        v61 = &v36;
        v62 = 4LL;
        TlgCreateWsz(&pDesc, v7);
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C031F238;
        UserData.Size = *(unsigned __int16 *)off_1C031F238;
        UserData.Reserved = 2;
        v54 = &unk_1C02E7D5E;
        v55 = 64;
        v56 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
          if ( AggregateFieldTypes )
            InsertEventEntryInLookUpTable(v16, (__int64)&EventDescriptor, 6, (__int64)&UserData, AggregateFieldTypes);
          else
            EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v98 = "RestrictedThread";
      v99 = 17LL;
      v37 = -2147024891;
      v100 = &v37;
      v101 = 4LL;
      TlgCreateWsz(&v102, v7);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D13, 0LL, 0LL, 5u, &pData);
    }
LABEL_14:
    v17 = 0;
    UserSetLastError(5LL, v12, v13, v14);
    goto LABEL_63;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v10, v9) + 876) )
  {
    v19 = gptiCurrent;
    v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL);
    if ( (!gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)) && v19 != *(_QWORD *)(v20 + 48) )
    {
      v21 = *(_QWORD *)(v20 + 80);
      if ( !v21 || *(_QWORD *)(v21 + 16) != v19 )
      {
        if ( dword_1C031F230 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
          {
            v49 = 1LL;
            v68 = &v49;
            v69 = 8LL;
            v70 = "NoForeground";
            v71 = 13LL;
            v38 = -2147024891;
            v72 = &v38;
            v73 = 4LL;
            TlgCreateWsz(&v74, v7);
            *(_DWORD *)&v44.Id = 184549376;
            *(_DWORD *)&v44.Level = 5;
            v44.Keyword = 0x400000000000LL;
            v64.Ptr = (ULONGLONG)off_1C031F238;
            v64.Size = *(unsigned __int16 *)off_1C031F238;
            v64.Reserved = 2;
            v65 = &unk_1C02E7D5E;
            v66 = 64;
            v67 = 1;
            if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v22 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v64);
              if ( v22 )
                InsertEventEntryInLookUpTable(v23, (__int64)&v44, 6, (__int64)&v64, v22);
              else
                EtwWriteTransfer(RegHandle, &v44, 0LL, 0LL, 6u, &v64);
            }
          }
        }
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v104 = "NoForeground";
          v105 = 13LL;
          v39 = -2147024891;
          v106 = &v39;
          v107 = 4LL;
          TlgCreateWsz(&v108, v7);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D13, 0LL, 0LL, 5u, &v103);
        }
        goto LABEL_14;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( dword_1C031F230 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
        {
          v50 = 1LL;
          v79 = &v50;
          v80 = 8LL;
          v81 = "UnsupportedFormatForLowBoxApp";
          v82 = 30LL;
          v40 = -2147024891;
          v83 = &v40;
          v84 = 4LL;
          TlgCreateWsz(&v85, v7);
          *(_DWORD *)&v45.Id = 184549376;
          *(_DWORD *)&v45.Level = 5;
          v45.Keyword = 0x400000000000LL;
          v75.Ptr = (ULONGLONG)off_1C031F238;
          v75.Size = *(unsigned __int16 *)off_1C031F238;
          v75.Reserved = 2;
          v76 = &unk_1C02E7D5E;
          v77 = 64;
          v78 = 1;
          if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            v24 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v75);
            if ( v24 )
              InsertEventEntryInLookUpTable(v25, (__int64)&v45, 6, (__int64)&v75, v24);
            else
              EtwWriteTransfer(RegHandle, &v45, 0LL, 0LL, 6u, &v75);
          }
        }
      }
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v110 = "UnsupportedFormatForLowBoxApp";
        v111 = 30LL;
        v41 = -2147024891;
        v112 = &v41;
        v113 = 4LL;
        TlgCreateWsz(&v114, v7);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D13, 0LL, 0LL, 5u, &v109);
      }
      goto LABEL_14;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v51 = *a3;
  v17 = SetClipboardData(a1, a2, v51 != 0, HIDWORD(v51) != 0);
  if ( dword_1C031F230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
  {
    v47 = 1LL;
    v90 = &v47;
    v91 = 8LL;
    v92 = "FunctionExit";
    v93 = 13LL;
    if ( v17 )
    {
      v33 = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v33 = LastError;
    }
    v94 = &v33;
    v95 = 4LL;
    TlgCreateWsz(&v96, v7);
    *(_DWORD *)&v46.Id = 184549376;
    *(_DWORD *)&v46.Level = 5;
    v46.Keyword = 0x400000000000LL;
    v86.Ptr = (ULONGLONG)off_1C031F238;
    v86.Size = *(unsigned __int16 *)off_1C031F238;
    v86.Reserved = 2;
    v87 = &unk_1C02E7D5E;
    v88 = 64;
    v89 = 1;
    v18 = &TraceLoggingMetadata;
    if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v27 = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&v86);
      if ( v27 )
        InsertEventEntryInLookUpTable(v28, (__int64)&v46, 6, (__int64)&v86, v27);
      else
        EtwWriteTransfer(RegHandle, &v46, 0LL, 0LL, 6u, &v86);
    }
  }
  if ( !v17 )
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
      v34 = v31;
      v118 = &v34;
      v119 = 4LL;
      TlgCreateWsz(&v120, v7);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D13, 0LL, 0LL, 5u, &v115);
    }
  }
LABEL_63:
  UserSessionSwitchLeaveCrit(v18);
  return v17;
}
