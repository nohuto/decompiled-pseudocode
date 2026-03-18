/*
 * XREFs of NtUserOpenClipboard @ 0x1C00D92E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00D8CF8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _OpenClipboard @ 0x1C00D9C70 (_OpenClipboard.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00DA534 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  ULONG64 v4; // rdx
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
  signed int LastError; // eax
  char v18; // al
  int v19; // ecx
  int v20; // r8d
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // al
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  char v31; // al
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rcx
  int v35; // eax
  bool v36; // sf
  signed int v37; // eax
  char v38; // al
  int v39; // ecx
  int v40; // r8d
  int v41; // [rsp+30h] [rbp-468h] BYREF
  int v42; // [rsp+34h] [rbp-464h] BYREF
  int v43; // [rsp+38h] [rbp-460h] BYREF
  int v44; // [rsp+3Ch] [rbp-45Ch] BYREF
  int v45; // [rsp+40h] [rbp-458h] BYREF
  signed int v46; // [rsp+44h] [rbp-454h] BYREF
  signed int v47; // [rsp+48h] [rbp-450h] BYREF
  int v48; // [rsp+54h] [rbp-444h] BYREF
  int v49; // [rsp+58h] [rbp-440h] BYREF
  LPCWSTR pwsz; // [rsp+60h] [rbp-438h]
  EVENT_DESCRIPTOR v51; // [rsp+68h] [rbp-430h] BYREF
  EVENT_DESCRIPTOR v52; // [rsp+78h] [rbp-420h] BYREF
  EVENT_DESCRIPTOR v53; // [rsp+88h] [rbp-410h] BYREF
  EVENT_DESCRIPTOR v54; // [rsp+A8h] [rbp-3F0h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-3E0h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-3D8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-3D0h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-3C0h] BYREF
  _QWORD v59[3]; // [rsp+E8h] [rbp-3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp-398h] BYREF
  void *v61; // [rsp+110h] [rbp-388h]
  int v62; // [rsp+118h] [rbp-380h]
  int v63; // [rsp+11Ch] [rbp-37Ch]
  __int64 *v64; // [rsp+120h] [rbp-378h]
  __int64 v65; // [rsp+128h] [rbp-370h]
  const char *v66; // [rsp+130h] [rbp-368h]
  __int64 v67; // [rsp+138h] [rbp-360h]
  int *v68; // [rsp+140h] [rbp-358h]
  __int64 v69; // [rsp+148h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+150h] [rbp-348h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+160h] [rbp-338h] BYREF
  void *v72; // [rsp+170h] [rbp-328h]
  int v73; // [rsp+178h] [rbp-320h]
  int v74; // [rsp+17Ch] [rbp-31Ch]
  __int64 *v75; // [rsp+180h] [rbp-318h]
  __int64 v76; // [rsp+188h] [rbp-310h]
  const char *v77; // [rsp+190h] [rbp-308h]
  __int64 v78; // [rsp+198h] [rbp-300h]
  int *v79; // [rsp+1A0h] [rbp-2F8h]
  __int64 v80; // [rsp+1A8h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+1B0h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1C0h] [rbp-2D8h] BYREF
  void *v83; // [rsp+1D0h] [rbp-2C8h]
  int v84; // [rsp+1D8h] [rbp-2C0h]
  int v85; // [rsp+1DCh] [rbp-2BCh]
  __int64 *v86; // [rsp+1E0h] [rbp-2B8h]
  __int64 v87; // [rsp+1E8h] [rbp-2B0h]
  const char *v88; // [rsp+1F0h] [rbp-2A8h]
  __int64 v89; // [rsp+1F8h] [rbp-2A0h]
  signed int *v90; // [rsp+200h] [rbp-298h]
  __int64 v91; // [rsp+208h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+210h] [rbp-288h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+280h] [rbp-218h] BYREF
  void *v94; // [rsp+290h] [rbp-208h]
  int v95; // [rsp+298h] [rbp-200h]
  int v96; // [rsp+29Ch] [rbp-1FCh]
  __int64 *v97; // [rsp+2A0h] [rbp-1F8h]
  __int64 v98; // [rsp+2A8h] [rbp-1F0h]
  const char *v99; // [rsp+2B0h] [rbp-1E8h]
  __int64 v100; // [rsp+2B8h] [rbp-1E0h]
  int *v101; // [rsp+2C0h] [rbp-1D8h]
  __int64 v102; // [rsp+2C8h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+2D0h] [rbp-1C8h] BYREF
  EVENT_DATA_DESCRIPTOR v104; // [rsp+2E0h] [rbp-1B8h] BYREF
  const char *v105; // [rsp+300h] [rbp-198h]
  __int64 v106; // [rsp+308h] [rbp-190h]
  int *v107; // [rsp+310h] [rbp-188h]
  __int64 v108; // [rsp+318h] [rbp-180h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+320h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v110; // [rsp+330h] [rbp-168h] BYREF
  const char *v111; // [rsp+350h] [rbp-148h]
  __int64 v112; // [rsp+358h] [rbp-140h]
  int *v113; // [rsp+360h] [rbp-138h]
  __int64 v114; // [rsp+368h] [rbp-130h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+370h] [rbp-128h] BYREF
  EVENT_DATA_DESCRIPTOR v116; // [rsp+380h] [rbp-118h] BYREF
  const char *v117; // [rsp+3A0h] [rbp-F8h]
  __int64 v118; // [rsp+3A8h] [rbp-F0h]
  signed int *v119; // [rsp+3B0h] [rbp-E8h]
  __int64 v120; // [rsp+3B8h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+3C0h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR v122; // [rsp+420h] [rbp-78h] BYREF
  const char *v123; // [rsp+440h] [rbp-58h]
  __int64 v124; // [rsp+448h] [rbp-50h]
  int *v125; // [rsp+450h] [rbp-48h]
  __int64 v126; // [rsp+458h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+460h] [rbp-38h] BYREF

  v41 = 0;
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
  v9 = (const WCHAR *)(*(_QWORD *)(gptiCurrent + 424LL) + 992LL);
  pwsz = v9;
  if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
  {
    if ( dword_1C030C240 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
      {
        v58 = 1LL;
        v97 = &v58;
        v98 = 8LL;
        v99 = "OnLockscreen";
        v100 = 13LL;
        v48 = -2147024891;
        v101 = &v48;
        v102 = 4LL;
        TlgCreateWsz(&v103, v9);
        *(_DWORD *)&v54.Id = ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&v54.Level = 5;
        v54.Keyword = 0x400000000000LL;
        v93.Ptr = (ULONGLONG)off_1C030C248;
        v93.Size = *(unsigned __int16 *)off_1C030C248;
        v93.Reserved = 2;
        v94 = &unk_1C02D5A41;
        v95 = 61;
        v96 = 1;
        if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v38 = ExtractAggregateFieldTypes(
                  ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                  &v93);
          if ( v38 )
          {
            LOBYTE(v40) = 6;
            InsertEventEntryInLookUpTable(v39, (unsigned int)&v54, v40, (unsigned int)&v93, v38);
          }
          else
          {
            EtwWriteTransfer(RegHandle, &v54, 0LL, 0LL, 6u, &v93);
          }
        }
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v123 = "OnLockscreen";
      v124 = 13LL;
      v49 = -2147024891;
      v125 = &v49;
      v126 = 4LL;
      TlgCreateWsz(&v127, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D59F9, 0LL, 0LL, 5u, &v122);
    }
    goto LABEL_70;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 884) )
  {
    v22 = gptiCurrent;
    v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( !gpqForeground || !ForegroundInputOwnerMatch(gptiCurrent, 1) )
    {
      v24 = *(_QWORD *)(v23 + 80);
      if ( !v24 || *(_QWORD *)(v24 + 16) != v22 )
      {
        if ( dword_1C030C240 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
          {
            v55 = 1LL;
            v64 = &v55;
            v65 = 8LL;
            v66 = "NoForeground";
            v67 = 13LL;
            v42 = -2147024891;
            v68 = &v42;
            v69 = 4LL;
            TlgCreateWsz(&v70, v9);
            *(_DWORD *)&v51.Id = ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            *(_DWORD *)&v51.Level = 5;
            v51.Keyword = 0x400000000000LL;
            UserData.Ptr = (ULONGLONG)off_1C030C248;
            UserData.Size = *(unsigned __int16 *)off_1C030C248;
            UserData.Reserved = 2;
            v61 = &unk_1C02D5A41;
            v62 = 61;
            v63 = 1;
            if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v25 = ExtractAggregateFieldTypes(
                      ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                      &UserData);
              if ( v25 )
              {
                LOBYTE(v27) = 6;
                InsertEventEntryInLookUpTable(v26, (unsigned int)&v51, v27, (unsigned int)&UserData, v25);
              }
              else
              {
                EtwWriteTransfer(RegHandle, &v51, 0LL, 0LL, 6u, &UserData);
              }
            }
          }
        }
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v105 = "NoForeground";
          v106 = 13LL;
          v43 = -2147024891;
          v107 = &v43;
          v108 = 4LL;
          TlgCreateWsz(&v109, v9);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D59F9, 0LL, 0LL, 5u, &v104);
        }
LABEL_70:
        v34 = 5LL;
LABEL_71:
        v14 = 0;
        UserSetLastError(v34, v4, v5, v6);
        goto LABEL_20;
      }
    }
  }
  if ( v8 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v12 = *(_QWORD *)(v8 + 16);
    v4 = *(_QWORD *)(v12 + 424);
    if ( *(_QWORD *)(v4 + 672) != *(_QWORD *)(CurrentProcessWin32Process + 672) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v12) + 672) )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL);
        if ( *(_QWORD *)(v30 + 672)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v30) + 672) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL, v4, v28, v29);
          if ( dword_1C030C240 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
            {
              v56 = 1LL;
              v75 = &v56;
              v76 = 8LL;
              v77 = "InvalidParameter";
              v78 = 17LL;
              v44 = -2147024809;
              v79 = &v44;
              v80 = 4LL;
              TlgCreateWsz(&v81, v9);
              *(_DWORD *)&v52.Id = ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              *(_DWORD *)&v52.Level = 5;
              v52.Keyword = 0x400000000000LL;
              v71.Ptr = (ULONGLONG)off_1C030C248;
              v71.Size = *(unsigned __int16 *)off_1C030C248;
              v71.Reserved = 2;
              v72 = &unk_1C02D5A41;
              v73 = 61;
              v74 = 1;
              if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
              {
                v31 = ExtractAggregateFieldTypes(
                        ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                        &v71);
                if ( v31 )
                {
                  LOBYTE(v33) = 6;
                  InsertEventEntryInLookUpTable(v32, (unsigned int)&v52, v33, (unsigned int)&v71, v31);
                }
                else
                {
                  EtwWriteTransfer(RegHandle, &v52, 0LL, 0LL, 6u, &v71);
                }
              }
            }
          }
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v111 = "InvalidParameter";
            v112 = 17LL;
            v45 = -2147024809;
            v113 = &v45;
            v114 = 4LL;
            TlgCreateWsz(&v115, v9);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D59F9, 0LL, 0LL, 5u, &v110);
          }
          v34 = 0LL;
          goto LABEL_71;
        }
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v59[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v59;
  v59[1] = v8;
  if ( v8 )
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  v14 = OpenClipboard(v8, &v41);
  ThreadUnlock1(v16, v15);
  v7 = MmUserProbeAddress;
  v4 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v41;
  if ( dword_1C030C240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
  {
    v57 = 1LL;
    v86 = &v57;
    v87 = 8LL;
    v88 = "FunctionExit";
    v89 = 13LL;
    if ( v14 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v46 = LastError;
    v90 = &v46;
    v91 = 4LL;
    TlgCreateWsz(&v92, v9);
    v7 = ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&v53.Id = ((unsigned int)&unk_1C02D5A36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&v53.Level = 5;
    v53.Keyword = 0x400000000000LL;
    v82.Ptr = (ULONGLONG)off_1C030C248;
    v82.Size = *(unsigned __int16 *)off_1C030C248;
    v82.Reserved = 2;
    v83 = &unk_1C02D5A41;
    v84 = 61;
    v85 = 1;
    if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v18 = ExtractAggregateFieldTypes(v7, &v82);
      if ( v18 )
      {
        LOBYTE(v20) = 6;
        InsertEventEntryInLookUpTable(v19, (unsigned int)&v53, v20, (unsigned int)&v82, v18);
      }
      else
      {
        EtwWriteTransfer(RegHandle, &v53, 0LL, 0LL, 6u, &v82);
      }
    }
  }
  if ( !v14 )
  {
    v35 = UserGetLastError();
    v36 = v35 < 0;
    if ( v35 > 0 )
      v36 = 1;
    if ( v36 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v117 = "FunctionExit";
      v118 = 13LL;
      v37 = UserGetLastError();
      if ( v37 > 0 )
        v37 = (unsigned __int16)v37 | 0x80070000;
      v47 = v37;
      v119 = &v47;
      v120 = 4LL;
      TlgCreateWsz(&v121, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D59F9, 0LL, 0LL, 5u, &v116);
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v7, v4, v5, v6);
  return v14;
}
