/*
 * XREFs of NtUserOpenClipboard @ 0x1C00B7020
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C00B79D0 (_OpenClipboard.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00B7ED4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00B81F4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01272CC (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 ThreadWin32Thread; // rax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // al
  int v19; // ecx
  int v20; // r8d
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // al
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  char v29; // al
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rcx
  signed int LastError; // eax
  int v34; // eax
  bool v35; // sf
  signed int v36; // eax
  char v37; // al
  int v38; // ecx
  int v39; // r8d
  unsigned int v40; // [rsp+30h] [rbp-478h] BYREF
  signed int v41; // [rsp+34h] [rbp-474h] BYREF
  int v42; // [rsp+38h] [rbp-470h] BYREF
  signed int v43; // [rsp+3Ch] [rbp-46Ch] BYREF
  int v44; // [rsp+40h] [rbp-468h] BYREF
  int v45; // [rsp+44h] [rbp-464h] BYREF
  int v46; // [rsp+48h] [rbp-460h] BYREF
  int v47; // [rsp+4Ch] [rbp-45Ch] BYREF
  int v48; // [rsp+58h] [rbp-450h] BYREF
  LPCWSTR pwsz; // [rsp+60h] [rbp-448h]
  EVENT_DESCRIPTOR v50; // [rsp+68h] [rbp-440h] BYREF
  EVENT_DESCRIPTOR v51; // [rsp+78h] [rbp-430h] BYREF
  EVENT_DESCRIPTOR v52; // [rsp+88h] [rbp-420h] BYREF
  EVENT_DESCRIPTOR v53; // [rsp+A8h] [rbp-400h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-3F0h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-3E0h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-3D8h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-3D0h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-3C0h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-3B8h]
  __int64 v60; // [rsp+F8h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp-398h] BYREF
  void *v62; // [rsp+120h] [rbp-388h]
  int v63; // [rsp+128h] [rbp-380h]
  int v64; // [rsp+12Ch] [rbp-37Ch]
  __int64 *v65; // [rsp+130h] [rbp-378h]
  __int64 v66; // [rsp+138h] [rbp-370h]
  const char *v67; // [rsp+140h] [rbp-368h]
  __int64 v68; // [rsp+148h] [rbp-360h]
  int *v69; // [rsp+150h] [rbp-358h]
  __int64 v70; // [rsp+158h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+160h] [rbp-348h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+170h] [rbp-338h] BYREF
  void *v73; // [rsp+180h] [rbp-328h]
  int v74; // [rsp+188h] [rbp-320h]
  int v75; // [rsp+18Ch] [rbp-31Ch]
  __int64 *v76; // [rsp+190h] [rbp-318h]
  __int64 v77; // [rsp+198h] [rbp-310h]
  const char *v78; // [rsp+1A0h] [rbp-308h]
  __int64 v79; // [rsp+1A8h] [rbp-300h]
  int *v80; // [rsp+1B0h] [rbp-2F8h]
  __int64 v81; // [rsp+1B8h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1C0h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1D0h] [rbp-2D8h] BYREF
  void *v84; // [rsp+1E0h] [rbp-2C8h]
  int v85; // [rsp+1E8h] [rbp-2C0h]
  int v86; // [rsp+1ECh] [rbp-2BCh]
  __int64 *v87; // [rsp+1F0h] [rbp-2B8h]
  __int64 v88; // [rsp+1F8h] [rbp-2B0h]
  const char *v89; // [rsp+200h] [rbp-2A8h]
  __int64 v90; // [rsp+208h] [rbp-2A0h]
  signed int *v91; // [rsp+210h] [rbp-298h]
  __int64 v92; // [rsp+218h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+220h] [rbp-288h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+290h] [rbp-218h] BYREF
  void *v95; // [rsp+2A0h] [rbp-208h]
  int v96; // [rsp+2A8h] [rbp-200h]
  int v97; // [rsp+2ACh] [rbp-1FCh]
  __int64 *v98; // [rsp+2B0h] [rbp-1F8h]
  __int64 v99; // [rsp+2B8h] [rbp-1F0h]
  const char *v100; // [rsp+2C0h] [rbp-1E8h]
  __int64 v101; // [rsp+2C8h] [rbp-1E0h]
  int *v102; // [rsp+2D0h] [rbp-1D8h]
  __int64 v103; // [rsp+2D8h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+2E0h] [rbp-1C8h] BYREF
  EVENT_DATA_DESCRIPTOR v105; // [rsp+2F0h] [rbp-1B8h] BYREF
  const char *v106; // [rsp+310h] [rbp-198h]
  __int64 v107; // [rsp+318h] [rbp-190h]
  int *v108; // [rsp+320h] [rbp-188h]
  __int64 v109; // [rsp+328h] [rbp-180h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+330h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v111; // [rsp+340h] [rbp-168h] BYREF
  const char *v112; // [rsp+360h] [rbp-148h]
  __int64 v113; // [rsp+368h] [rbp-140h]
  int *v114; // [rsp+370h] [rbp-138h]
  __int64 v115; // [rsp+378h] [rbp-130h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+380h] [rbp-128h] BYREF
  EVENT_DATA_DESCRIPTOR v117; // [rsp+390h] [rbp-118h] BYREF
  const char *v118; // [rsp+3B0h] [rbp-F8h]
  __int64 v119; // [rsp+3B8h] [rbp-F0h]
  signed int *v120; // [rsp+3C0h] [rbp-E8h]
  __int64 v121; // [rsp+3C8h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+3D0h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR v123; // [rsp+430h] [rbp-78h] BYREF
  const char *v124; // [rsp+450h] [rbp-58h]
  __int64 v125; // [rsp+458h] [rbp-50h]
  unsigned int *v126; // [rsp+460h] [rbp-48h]
  __int64 v127; // [rsp+468h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+470h] [rbp-38h] BYREF

  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v42 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
      v14 = 0;
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
    if ( dword_1C0321230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
      {
        v54 = 1LL;
        v98 = &v54;
        v99 = 8LL;
        v100 = "OnLockscreen";
        v101 = 13LL;
        v48 = -2147024891;
        v102 = &v48;
        v103 = 4LL;
        TlgCreateWsz(&v104, v9);
        *(_DWORD *)&v53.Id = 184549376;
        *(_DWORD *)&v53.Level = 5;
        v53.Keyword = 0x400000000000LL;
        v94.Ptr = (ULONGLONG)off_1C0321238;
        v94.Size = *(unsigned __int16 *)off_1C0321238;
        v94.Reserved = 2;
        v95 = &unk_1C02E8689;
        v96 = 61;
        v97 = 1;
        v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v37 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v94);
          if ( v37 )
          {
            LOBYTE(v39) = 6;
            InsertEventEntryInLookUpTable(v38, (unsigned int)&v53, v39, (unsigned int)&v94, v37);
          }
          else
          {
            EtwWriteTransfer(RegHandle, &v53, 0LL, 0LL, 6u, &v94);
          }
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v124 = "OnLockscreen";
      v125 = 13LL;
      v40 = -2147024891;
      v126 = &v40;
      v127 = 4LL;
      TlgCreateWsz(&v128, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8641, 0LL, 0LL, 5u, &v123);
    }
    goto LABEL_71;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent, v4) + 876) )
  {
    v22 = gptiCurrent;
    v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL);
    if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
    {
      v24 = *(_QWORD *)(v23 + 80);
      if ( !v24 || *(_QWORD *)(v24 + 16) != v22 )
      {
        if ( dword_1C0321230 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
          {
            v55 = 1LL;
            v65 = &v55;
            v66 = 8LL;
            v67 = "NoForeground";
            v68 = 13LL;
            v44 = -2147024891;
            v69 = &v44;
            v70 = 4LL;
            TlgCreateWsz(&v71, v9);
            *(_DWORD *)&v50.Id = 184549376;
            *(_DWORD *)&v50.Level = 5;
            v50.Keyword = 0x400000000000LL;
            UserData.Ptr = (ULONGLONG)off_1C0321238;
            UserData.Size = *(unsigned __int16 *)off_1C0321238;
            UserData.Reserved = 2;
            v62 = &unk_1C02E8689;
            v63 = 61;
            v64 = 1;
            v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v25 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
              if ( v25 )
              {
                LOBYTE(v27) = 6;
                InsertEventEntryInLookUpTable(v26, (unsigned int)&v50, v27, (unsigned int)&UserData, v25);
              }
              else
              {
                EtwWriteTransfer(RegHandle, &v50, 0LL, 0LL, 6u, &UserData);
              }
            }
          }
        }
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v106 = "NoForeground";
          v107 = 13LL;
          v45 = -2147024891;
          v108 = &v45;
          v109 = 4LL;
          TlgCreateWsz(&v110, v9);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8641, 0LL, 0LL, 5u, &v105);
        }
LABEL_71:
        v32 = 5LL;
LABEL_72:
        v14 = 0;
        UserSetLastError(v32, v4, v5, v6);
        goto LABEL_20;
      }
    }
  }
  if ( v8 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v4);
    v12 = *(_QWORD *)(v8 + 16);
    v4 = *(_QWORD *)(v12 + 416);
    if ( *(_QWORD *)(v4 + 664) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v12, v4) + 664) )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
        if ( *(_QWORD *)(v28 + 664)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v28, v4) + 664) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL, v4, v5, v6);
          if ( dword_1C0321230 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
            {
              v56 = 1LL;
              v76 = &v56;
              v77 = 8LL;
              v78 = "InvalidParameter";
              v79 = 17LL;
              v46 = -2147024809;
              v80 = &v46;
              v81 = 4LL;
              TlgCreateWsz(&v82, v9);
              *(_DWORD *)&v51.Id = 184549376;
              *(_DWORD *)&v51.Level = 5;
              v51.Keyword = 0x400000000000LL;
              v72.Ptr = (ULONGLONG)off_1C0321238;
              v72.Size = *(unsigned __int16 *)off_1C0321238;
              v72.Reserved = 2;
              v73 = &unk_1C02E8689;
              v74 = 61;
              v75 = 1;
              v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
              {
                v29 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v72);
                if ( v29 )
                {
                  LOBYTE(v31) = 6;
                  InsertEventEntryInLookUpTable(v30, (unsigned int)&v51, v31, (unsigned int)&v72, v29);
                }
                else
                {
                  EtwWriteTransfer(RegHandle, &v51, 0LL, 0LL, 6u, &v72);
                }
              }
            }
          }
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v112 = "InvalidParameter";
            v113 = 17LL;
            v47 = -2147024809;
            v114 = &v47;
            v115 = 4LL;
            TlgCreateWsz(&v116, v9);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8641, 0LL, 0LL, 5u, &v111);
          }
          v32 = 0LL;
          goto LABEL_72;
        }
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v58 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v58;
  v59 = v8;
  if ( v8 )
    HMLockObject(v8);
  v14 = OpenClipboard(v8, &v42);
  ThreadUnlock1(v16, v15, v17);
  v7 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v42;
  if ( dword_1C0321230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
  {
    v57 = 1LL;
    v87 = &v57;
    v88 = 8LL;
    v89 = "FunctionExit";
    v90 = 13LL;
    if ( v14 )
    {
      v41 = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v41 = LastError;
    }
    v91 = &v41;
    v92 = 4LL;
    TlgCreateWsz(&v93, v9);
    *(_DWORD *)&v52.Id = 184549376;
    *(_DWORD *)&v52.Level = 5;
    v52.Keyword = 0x400000000000LL;
    v83.Ptr = (ULONGLONG)off_1C0321238;
    v83.Size = *(unsigned __int16 *)off_1C0321238;
    v83.Reserved = 2;
    v84 = &unk_1C02E8689;
    v85 = 61;
    v86 = 1;
    v7 = (ULONG64)&TraceLoggingMetadata;
    v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v18 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v83);
      if ( v18 )
      {
        LOBYTE(v20) = 6;
        InsertEventEntryInLookUpTable(v19, (unsigned int)&v52, v20, (unsigned int)&v83, v18);
      }
      else
      {
        EtwWriteTransfer(RegHandle, &v52, 0LL, 0LL, 6u, &v83);
      }
    }
  }
  if ( !v14 )
  {
    v34 = UserGetLastError();
    v35 = v34 < 0;
    if ( v34 > 0 )
      v35 = 1;
    if ( v35 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v118 = "FunctionExit";
      v119 = 13LL;
      v36 = UserGetLastError();
      if ( v36 > 0 )
        v36 = (unsigned __int16)v36 | 0x80070000;
      v43 = v36;
      v120 = &v43;
      v121 = 4LL;
      TlgCreateWsz(&v122, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8641, 0LL, 0LL, 5u, &v117);
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v7);
  return v14;
}
