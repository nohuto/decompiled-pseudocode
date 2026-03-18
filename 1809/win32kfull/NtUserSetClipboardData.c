/*
 * XREFs of NtUserSetClipboardData @ 0x1C00DB250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00D8CF8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00DA534 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _SetClipboardData @ 0x1C00DB1B4 (_SetClipboardData.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  const WCHAR *v7; // r12
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  signed int LastError; // eax
  unsigned __int8 v29; // al
  __int64 v30; // rcx
  int v31; // eax
  bool v32; // sf
  signed int v33; // eax
  int v35; // [rsp+30h] [rbp-478h] BYREF
  int v36; // [rsp+34h] [rbp-474h] BYREF
  int v37; // [rsp+38h] [rbp-470h] BYREF
  int v38; // [rsp+3Ch] [rbp-46Ch] BYREF
  int v39; // [rsp+40h] [rbp-468h] BYREF
  int v40; // [rsp+44h] [rbp-464h] BYREF
  signed int v41; // [rsp+48h] [rbp-460h] BYREF
  signed int v42; // [rsp+4Ch] [rbp-45Ch] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-448h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-438h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+80h] [rbp-428h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+90h] [rbp-418h] BYREF
  EVENT_DESCRIPTOR v47; // [rsp+A0h] [rbp-408h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-3D8h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-3D0h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-3C8h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-3C0h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp-3A8h] BYREF
  void *v54; // [rsp+110h] [rbp-398h]
  int v55; // [rsp+118h] [rbp-390h]
  int v56; // [rsp+11Ch] [rbp-38Ch]
  __int64 *v57; // [rsp+120h] [rbp-388h]
  __int64 v58; // [rsp+128h] [rbp-380h]
  const char *v59; // [rsp+130h] [rbp-378h]
  __int64 v60; // [rsp+138h] [rbp-370h]
  int *v61; // [rsp+140h] [rbp-368h]
  __int64 v62; // [rsp+148h] [rbp-360h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp-358h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+160h] [rbp-348h] BYREF
  void *v65; // [rsp+170h] [rbp-338h]
  int v66; // [rsp+178h] [rbp-330h]
  int v67; // [rsp+17Ch] [rbp-32Ch]
  __int64 *v68; // [rsp+180h] [rbp-328h]
  __int64 v69; // [rsp+188h] [rbp-320h]
  const char *v70; // [rsp+190h] [rbp-318h]
  __int64 v71; // [rsp+198h] [rbp-310h]
  int *v72; // [rsp+1A0h] [rbp-308h]
  __int64 v73; // [rsp+1A8h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1B0h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1C0h] [rbp-2E8h] BYREF
  void *v76; // [rsp+1D0h] [rbp-2D8h]
  int v77; // [rsp+1D8h] [rbp-2D0h]
  int v78; // [rsp+1DCh] [rbp-2CCh]
  __int64 *v79; // [rsp+1E0h] [rbp-2C8h]
  __int64 v80; // [rsp+1E8h] [rbp-2C0h]
  const char *v81; // [rsp+1F0h] [rbp-2B8h]
  __int64 v82; // [rsp+1F8h] [rbp-2B0h]
  int *v83; // [rsp+200h] [rbp-2A8h]
  __int64 v84; // [rsp+208h] [rbp-2A0h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+210h] [rbp-298h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+220h] [rbp-288h] BYREF
  void *v87; // [rsp+230h] [rbp-278h]
  int v88; // [rsp+238h] [rbp-270h]
  int v89; // [rsp+23Ch] [rbp-26Ch]
  __int64 *v90; // [rsp+240h] [rbp-268h]
  __int64 v91; // [rsp+248h] [rbp-260h]
  const char *v92; // [rsp+250h] [rbp-258h]
  __int64 v93; // [rsp+258h] [rbp-250h]
  signed int *v94; // [rsp+260h] [rbp-248h]
  __int64 v95; // [rsp+268h] [rbp-240h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+270h] [rbp-238h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp-1C8h] BYREF
  const char *v98; // [rsp+300h] [rbp-1A8h]
  __int64 v99; // [rsp+308h] [rbp-1A0h]
  int *v100; // [rsp+310h] [rbp-198h]
  __int64 v101; // [rsp+318h] [rbp-190h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+320h] [rbp-188h] BYREF
  EVENT_DATA_DESCRIPTOR v103; // [rsp+330h] [rbp-178h] BYREF
  const char *v104; // [rsp+350h] [rbp-158h]
  __int64 v105; // [rsp+358h] [rbp-150h]
  int *v106; // [rsp+360h] [rbp-148h]
  __int64 v107; // [rsp+368h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+370h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR v109; // [rsp+380h] [rbp-128h] BYREF
  const char *v110; // [rsp+3A0h] [rbp-108h]
  __int64 v111; // [rsp+3A8h] [rbp-100h]
  int *v112; // [rsp+3B0h] [rbp-F8h]
  __int64 v113; // [rsp+3B8h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+3C0h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR v115; // [rsp+3D0h] [rbp-D8h] BYREF
  const char *v116; // [rsp+3F0h] [rbp-B8h]
  __int64 v117; // [rsp+3F8h] [rbp-B0h]
  signed int *v118; // [rsp+400h] [rbp-A8h]
  __int64 v119; // [rsp+408h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+410h] [rbp-98h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  v7 = (const WCHAR *)(v6 + 992);
  v43[1] = v6 + 992;
  v8 = *(_DWORD *)(v6 + 56);
  v43[0] = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v6);
  EtwTraceUiAuditWriteClipboard(v8, v43);
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v10 = *(_DWORD *)(v9 + 24) & 4;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    EtwTraceUiLimitWriteClipboard(v8, v43);
    if ( dword_1C030C240 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
      {
        v48 = 1LL;
        v57 = &v48;
        v58 = 8LL;
        v59 = "RestrictedThread";
        v60 = 17LL;
        v35 = -2147024891;
        v61 = &v35;
        v62 = 4LL;
        TlgCreateWsz(&pDesc, v7);
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C030C248;
        UserData.Size = *(unsigned __int16 *)off_1C030C248;
        UserData.Reserved = 2;
        v54 = &unk_1C02D5B56;
        v55 = 64;
        v56 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          AggregateFieldTypes = ExtractAggregateFieldTypes(
                                  ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                                  (__int64)&UserData);
          if ( AggregateFieldTypes )
            InsertEventEntryInLookUpTable(v15, &EventDescriptor, 6u, (__int64)&UserData, AggregateFieldTypes);
          else
            EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v98 = "RestrictedThread";
      v99 = 17LL;
      v36 = -2147024891;
      v100 = &v36;
      v101 = 4LL;
      TlgCreateWsz(&v102, v7);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5B0B, 0LL, 0LL, 5u, &pData);
    }
LABEL_14:
    v16 = 0;
    UserSetLastError(5LL, v11, v12, v13);
    goto LABEL_62;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 884) )
  {
    v21 = gptiCurrent;
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( (!gpqForeground || !ForegroundInputOwnerMatch(gptiCurrent, 1)) && v21 != *(_QWORD *)(v22 + 48) )
    {
      v23 = *(_QWORD *)(v22 + 80);
      if ( !v23 || *(_QWORD *)(v23 + 16) != v21 )
      {
        if ( dword_1C030C240 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
          {
            v49 = 1LL;
            v68 = &v49;
            v69 = 8LL;
            v70 = "NoForeground";
            v71 = 13LL;
            v37 = -2147024891;
            v72 = &v37;
            v73 = 4LL;
            TlgCreateWsz(&v74, v7);
            *(_DWORD *)&v45.Id = ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            *(_DWORD *)&v45.Level = 5;
            v45.Keyword = 0x400000000000LL;
            v64.Ptr = (ULONGLONG)off_1C030C248;
            v64.Size = *(unsigned __int16 *)off_1C030C248;
            v64.Reserved = 2;
            v65 = &unk_1C02D5B56;
            v66 = 64;
            v67 = 1;
            if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v24 = ExtractAggregateFieldTypes(
                      ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                      (__int64)&v64);
              if ( v24 )
                InsertEventEntryInLookUpTable(v25, &v45, 6u, (__int64)&v64, v24);
              else
                EtwWriteTransfer(RegHandle, &v45, 0LL, 0LL, 6u, &v64);
            }
          }
        }
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v104 = "NoForeground";
          v105 = 13LL;
          v38 = -2147024891;
          v106 = &v38;
          v107 = 4LL;
          TlgCreateWsz(&v108, v7);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5B0B, 0LL, 0LL, 5u, &v103);
        }
        goto LABEL_14;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( dword_1C030C240 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
        {
          v50 = 1LL;
          v79 = &v50;
          v80 = 8LL;
          v81 = "UnsupportedFormatForLowBoxApp";
          v82 = 30LL;
          v39 = -2147024891;
          v83 = &v39;
          v84 = 4LL;
          TlgCreateWsz(&v85, v7);
          *(_DWORD *)&v46.Id = ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          *(_DWORD *)&v46.Level = 5;
          v46.Keyword = 0x400000000000LL;
          v75.Ptr = (ULONGLONG)off_1C030C248;
          v75.Size = *(unsigned __int16 *)off_1C030C248;
          v75.Reserved = 2;
          v76 = &unk_1C02D5B56;
          v77 = 64;
          v78 = 1;
          if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            v26 = ExtractAggregateFieldTypes(
                    ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                    (__int64)&v75);
            if ( v26 )
              InsertEventEntryInLookUpTable(v27, &v46, 6u, (__int64)&v75, v26);
            else
              EtwWriteTransfer(RegHandle, &v46, 0LL, 0LL, 6u, &v75);
          }
        }
      }
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v110 = "UnsupportedFormatForLowBoxApp";
        v111 = 30LL;
        v40 = -2147024891;
        v112 = &v40;
        v113 = 4LL;
        TlgCreateWsz(&v114, v7);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5B0B, 0LL, 0LL, 5u, &v109);
      }
      goto LABEL_14;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v52 = *a3;
  v16 = SetClipboardData(a1, a2, v52 != 0, HIDWORD(v52) != 0);
  if ( dword_1C030C240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
  {
    v51 = 1LL;
    v90 = &v51;
    v91 = 8LL;
    v92 = "FunctionExit";
    v93 = 13LL;
    if ( v16 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v41 = LastError;
    v94 = &v41;
    v95 = 4LL;
    TlgCreateWsz(&v96, v7);
    v18 = ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&v47.Id = ((unsigned int)&unk_1C02D5B4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&v47.Level = 5;
    v47.Keyword = 0x400000000000LL;
    v86.Ptr = (ULONGLONG)off_1C030C248;
    v86.Size = *(unsigned __int16 *)off_1C030C248;
    v86.Reserved = 2;
    v87 = &unk_1C02D5B56;
    v88 = 64;
    v89 = 1;
    if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v29 = ExtractAggregateFieldTypes(v18, (__int64)&v86);
      if ( v29 )
        InsertEventEntryInLookUpTable(v30, &v47, 6u, (__int64)&v86, v29);
      else
        EtwWriteTransfer(RegHandle, &v47, 0LL, 0LL, 6u, &v86);
    }
  }
  if ( !v16 )
  {
    v31 = UserGetLastError();
    v32 = v31 < 0;
    if ( v31 > 0 )
      v32 = 1;
    if ( v32 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v116 = "FunctionExit";
      v117 = 13LL;
      v33 = UserGetLastError();
      if ( v33 > 0 )
        v33 = (unsigned __int16)v33 | 0x80070000;
      v42 = v33;
      v118 = &v42;
      v119 = 4LL;
      TlgCreateWsz(&v120, v7);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5B0B, 0LL, 0LL, 5u, &v115);
    }
  }
LABEL_62:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v16;
}
