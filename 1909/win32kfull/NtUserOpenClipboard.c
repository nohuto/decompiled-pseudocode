/*
 * XREFs of NtUserOpenClipboard @ 0x1C0058510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C0058EC0 (_OpenClipboard.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00593C4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00596E4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0137014 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG64 v7; // rcx
  __int64 v8; // rbx
  const WCHAR *v9; // rsi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 ThreadWin32Thread; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  int v20; // ecx
  int v21; // r8d
  __int64 v23; // r11
  __int64 v24; // rdi
  __int64 v25; // rax
  char v26; // al
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  char v33; // al
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rcx
  signed int LastError; // eax
  int v38; // eax
  bool v39; // sf
  signed int v40; // eax
  char v41; // al
  int v42; // ecx
  int v43; // r8d
  unsigned int v44; // [rsp+30h] [rbp-478h] BYREF
  signed int v45; // [rsp+34h] [rbp-474h] BYREF
  int v46; // [rsp+38h] [rbp-470h] BYREF
  signed int v47; // [rsp+3Ch] [rbp-46Ch] BYREF
  int v48; // [rsp+40h] [rbp-468h] BYREF
  int v49; // [rsp+44h] [rbp-464h] BYREF
  int v50; // [rsp+48h] [rbp-460h] BYREF
  int v51; // [rsp+4Ch] [rbp-45Ch] BYREF
  int v52; // [rsp+58h] [rbp-450h] BYREF
  LPCWSTR pwsz; // [rsp+60h] [rbp-448h]
  EVENT_DESCRIPTOR v54; // [rsp+68h] [rbp-440h] BYREF
  EVENT_DESCRIPTOR v55; // [rsp+78h] [rbp-430h] BYREF
  EVENT_DESCRIPTOR v56; // [rsp+88h] [rbp-420h] BYREF
  EVENT_DESCRIPTOR v57; // [rsp+A8h] [rbp-400h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-3F0h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-3E0h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-3D8h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-3D0h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-3C0h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-3B8h]
  __int64 v64; // [rsp+F8h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp-398h] BYREF
  void *v66; // [rsp+120h] [rbp-388h]
  int v67; // [rsp+128h] [rbp-380h]
  int v68; // [rsp+12Ch] [rbp-37Ch]
  __int64 *v69; // [rsp+130h] [rbp-378h]
  __int64 v70; // [rsp+138h] [rbp-370h]
  const char *v71; // [rsp+140h] [rbp-368h]
  __int64 v72; // [rsp+148h] [rbp-360h]
  int *v73; // [rsp+150h] [rbp-358h]
  __int64 v74; // [rsp+158h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+160h] [rbp-348h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+170h] [rbp-338h] BYREF
  void *v77; // [rsp+180h] [rbp-328h]
  int v78; // [rsp+188h] [rbp-320h]
  int v79; // [rsp+18Ch] [rbp-31Ch]
  __int64 *v80; // [rsp+190h] [rbp-318h]
  __int64 v81; // [rsp+198h] [rbp-310h]
  const char *v82; // [rsp+1A0h] [rbp-308h]
  __int64 v83; // [rsp+1A8h] [rbp-300h]
  int *v84; // [rsp+1B0h] [rbp-2F8h]
  __int64 v85; // [rsp+1B8h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+1C0h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+1D0h] [rbp-2D8h] BYREF
  void *v88; // [rsp+1E0h] [rbp-2C8h]
  int v89; // [rsp+1E8h] [rbp-2C0h]
  int v90; // [rsp+1ECh] [rbp-2BCh]
  __int64 *v91; // [rsp+1F0h] [rbp-2B8h]
  __int64 v92; // [rsp+1F8h] [rbp-2B0h]
  const char *v93; // [rsp+200h] [rbp-2A8h]
  __int64 v94; // [rsp+208h] [rbp-2A0h]
  signed int *v95; // [rsp+210h] [rbp-298h]
  __int64 v96; // [rsp+218h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+220h] [rbp-288h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+290h] [rbp-218h] BYREF
  void *v99; // [rsp+2A0h] [rbp-208h]
  int v100; // [rsp+2A8h] [rbp-200h]
  int v101; // [rsp+2ACh] [rbp-1FCh]
  __int64 *v102; // [rsp+2B0h] [rbp-1F8h]
  __int64 v103; // [rsp+2B8h] [rbp-1F0h]
  const char *v104; // [rsp+2C0h] [rbp-1E8h]
  __int64 v105; // [rsp+2C8h] [rbp-1E0h]
  int *v106; // [rsp+2D0h] [rbp-1D8h]
  __int64 v107; // [rsp+2D8h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+2E0h] [rbp-1C8h] BYREF
  EVENT_DATA_DESCRIPTOR v109; // [rsp+2F0h] [rbp-1B8h] BYREF
  const char *v110; // [rsp+310h] [rbp-198h]
  __int64 v111; // [rsp+318h] [rbp-190h]
  int *v112; // [rsp+320h] [rbp-188h]
  __int64 v113; // [rsp+328h] [rbp-180h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+330h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v115; // [rsp+340h] [rbp-168h] BYREF
  const char *v116; // [rsp+360h] [rbp-148h]
  __int64 v117; // [rsp+368h] [rbp-140h]
  int *v118; // [rsp+370h] [rbp-138h]
  __int64 v119; // [rsp+378h] [rbp-130h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+380h] [rbp-128h] BYREF
  EVENT_DATA_DESCRIPTOR v121; // [rsp+390h] [rbp-118h] BYREF
  const char *v122; // [rsp+3B0h] [rbp-F8h]
  __int64 v123; // [rsp+3B8h] [rbp-F0h]
  signed int *v124; // [rsp+3C0h] [rbp-E8h]
  __int64 v125; // [rsp+3C8h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+3D0h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR v127; // [rsp+430h] [rbp-78h] BYREF
  const char *v128; // [rsp+450h] [rbp-58h]
  __int64 v129; // [rsp+458h] [rbp-50h]
  unsigned int *v130; // [rsp+460h] [rbp-48h]
  __int64 v131; // [rsp+468h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+470h] [rbp-38h] BYREF

  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v46 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
      v15 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (const WCHAR *)(*(_QWORD *)(gptiCurrent + 416LL) + 984LL);
  pwsz = v9;
  if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 448LL) == grpdeskLogon )
  {
    if ( dword_1C031F230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
      {
        v58 = 1LL;
        v102 = &v58;
        v103 = 8LL;
        v104 = "OnLockscreen";
        v105 = 13LL;
        v52 = -2147024891;
        v106 = &v52;
        v107 = 4LL;
        TlgCreateWsz(&v108, v9);
        *(_DWORD *)&v57.Id = 184549376;
        *(_DWORD *)&v57.Level = 5;
        v57.Keyword = 0x400000000000LL;
        v98.Ptr = (ULONGLONG)off_1C031F238;
        v98.Size = *(unsigned __int16 *)off_1C031F238;
        v98.Reserved = 2;
        v99 = &unk_1C02E7C49;
        v100 = 61;
        v101 = 1;
        v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v41 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v98);
          if ( v41 )
          {
            LOBYTE(v43) = 6;
            InsertEventEntryInLookUpTable(v42, (unsigned int)&v57, v43, (unsigned int)&v98, v41);
          }
          else
          {
            EtwWriteTransfer(RegHandle, &v57, 0LL, 0LL, 6u, &v98);
          }
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v128 = "OnLockscreen";
      v129 = 13LL;
      v44 = -2147024891;
      v130 = &v44;
      v131 = 4LL;
      TlgCreateWsz(&v132, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C01, 0LL, 0LL, 5u, &v127);
    }
    goto LABEL_71;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent, v4) + 876) )
  {
    v23 = gptiCurrent;
    v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL);
    if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
    {
      v25 = *(_QWORD *)(v24 + 80);
      if ( !v25 || *(_QWORD *)(v25 + 16) != v23 )
      {
        if ( dword_1C031F230 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
          {
            v59 = 1LL;
            v69 = &v59;
            v70 = 8LL;
            v71 = "NoForeground";
            v72 = 13LL;
            v48 = -2147024891;
            v73 = &v48;
            v74 = 4LL;
            TlgCreateWsz(&v75, v9);
            *(_DWORD *)&v54.Id = 184549376;
            *(_DWORD *)&v54.Level = 5;
            v54.Keyword = 0x400000000000LL;
            UserData.Ptr = (ULONGLONG)off_1C031F238;
            UserData.Size = *(unsigned __int16 *)off_1C031F238;
            UserData.Reserved = 2;
            v66 = &unk_1C02E7C49;
            v67 = 61;
            v68 = 1;
            v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v26 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
              if ( v26 )
              {
                LOBYTE(v28) = 6;
                InsertEventEntryInLookUpTable(v27, (unsigned int)&v54, v28, (unsigned int)&UserData, v26);
              }
              else
              {
                EtwWriteTransfer(RegHandle, &v54, 0LL, 0LL, 6u, &UserData);
              }
            }
          }
        }
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v110 = "NoForeground";
          v111 = 13LL;
          v49 = -2147024891;
          v112 = &v49;
          v113 = 4LL;
          TlgCreateWsz(&v114, v9);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C01, 0LL, 0LL, 5u, &v109);
        }
LABEL_71:
        v36 = 5LL;
LABEL_72:
        v15 = 0;
        UserSetLastError(v36, v4, v5, v6);
        goto LABEL_20;
      }
    }
  }
  if ( v8 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v4);
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)(v12 + 416);
    if ( *(_QWORD *)(v13 + 664) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v12, v13) + 664) )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
        if ( *(_QWORD *)(v32 + 664)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v32, v29) + 664) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL, v29, v30, v31);
          if ( dword_1C031F230 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
            {
              v60 = 1LL;
              v80 = &v60;
              v81 = 8LL;
              v82 = "InvalidParameter";
              v83 = 17LL;
              v50 = -2147024809;
              v84 = &v50;
              v85 = 4LL;
              TlgCreateWsz(&v86, v9);
              *(_DWORD *)&v55.Id = 184549376;
              *(_DWORD *)&v55.Level = 5;
              v55.Keyword = 0x400000000000LL;
              v76.Ptr = (ULONGLONG)off_1C031F238;
              v76.Size = *(unsigned __int16 *)off_1C031F238;
              v76.Reserved = 2;
              v77 = &unk_1C02E7C49;
              v78 = 61;
              v79 = 1;
              v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
              {
                v33 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v76);
                if ( v33 )
                {
                  LOBYTE(v35) = 6;
                  InsertEventEntryInLookUpTable(v34, (unsigned int)&v55, v35, (unsigned int)&v76, v33);
                }
                else
                {
                  EtwWriteTransfer(RegHandle, &v55, 0LL, 0LL, 6u, &v76);
                }
              }
            }
          }
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v116 = "InvalidParameter";
            v117 = 17LL;
            v51 = -2147024809;
            v118 = &v51;
            v119 = 4LL;
            TlgCreateWsz(&v120, v9);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C01, 0LL, 0LL, 5u, &v115);
          }
          v36 = 0LL;
          goto LABEL_72;
        }
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v62 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v62;
  v63 = v8;
  if ( v8 )
    HMLockObject(v8);
  v15 = OpenClipboard(v8, &v46);
  ThreadUnlock1(v17, v16, v18);
  v7 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v46;
  if ( dword_1C031F230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F230, 0x400000000000uLL) )
  {
    v61 = 1LL;
    v91 = &v61;
    v92 = 8LL;
    v93 = "FunctionExit";
    v94 = 13LL;
    if ( v15 )
    {
      v45 = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v45 = LastError;
    }
    v95 = &v45;
    v96 = 4LL;
    TlgCreateWsz(&v97, v9);
    *(_DWORD *)&v56.Id = 184549376;
    *(_DWORD *)&v56.Level = 5;
    v56.Keyword = 0x400000000000LL;
    v87.Ptr = (ULONGLONG)off_1C031F238;
    v87.Size = *(unsigned __int16 *)off_1C031F238;
    v87.Reserved = 2;
    v88 = &unk_1C02E7C49;
    v89 = 61;
    v90 = 1;
    v7 = (ULONG64)&TraceLoggingMetadata;
    v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v19 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v87);
      if ( v19 )
      {
        LOBYTE(v21) = 6;
        InsertEventEntryInLookUpTable(v20, (unsigned int)&v56, v21, (unsigned int)&v87, v19);
      }
      else
      {
        EtwWriteTransfer(RegHandle, &v56, 0LL, 0LL, 6u, &v87);
      }
    }
  }
  if ( !v15 )
  {
    v38 = UserGetLastError();
    v39 = v38 < 0;
    if ( v38 > 0 )
      v39 = 1;
    if ( v39 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v122 = "FunctionExit";
      v123 = 13LL;
      v40 = UserGetLastError();
      if ( v40 > 0 )
        v40 = (unsigned __int16)v40 | 0x80070000;
      v47 = v40;
      v124 = &v47;
      v125 = 4LL;
      TlgCreateWsz(&v126, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7C01, 0LL, 0LL, 5u, &v121);
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v7);
  return v15;
}
