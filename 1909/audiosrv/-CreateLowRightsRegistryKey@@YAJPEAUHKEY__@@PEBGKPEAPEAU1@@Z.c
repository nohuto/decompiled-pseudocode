/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002F1E0
 * Callers:
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002FE40 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18003DD00 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18003E024 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18002BBB8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180045DE8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _Init_thread_footer @ 0x180065550 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800655B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800D1CB4 (WPP_SF_Sq.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x1800DF5B8 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800E0C8C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateLowRightsRegistryKey(HKEY hKey, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  int v9; // edi
  const unsigned __int16 *v10; // r13
  REGSAM samDesired; // r15d
  wchar_t *v12; // rax
  wchar_t *v13; // rbx
  const WCHAR *v14; // r12
  HKEY v15; // rdi
  int v16; // ebx
  LSTATUS v17; // eax
  __int64 v18; // r8
  unsigned __int16 *v19; // r9
  CNtDeleteKey *v20; // rcx
  int v21; // ebx
  CAudioSessionManager *v22; // rcx
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rax
  __int64 v27; // rcx
  LSTATUS v29; // eax
  LSTATUS v30; // ebx
  int v31; // eax
  HKEY v33; // rcx
  int v34; // eax
  signed int LastError; // eax
  __int64 v36; // rdx
  unsigned int phkResult; // [rsp+20h] [rbp-E0h]
  HKEY v38; // [rsp+50h] [rbp-B0h] BYREF
  DWORD dwDisposition; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKeya; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+68h] [rbp-98h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-94h] BYREF
  PSID Sid; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+88h] [rbp-78h] BYREF
  HKEY v47; // [rsp+90h] [rbp-70h] BYREF
  HKEY v48; // [rsp+98h] [rbp-68h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v50[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v52; // [rsp+D0h] [rbp-30h] BYREF
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  void *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  const char *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  int *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  BYTE v64[528]; // [rsp+120h] [rbp+20h] BYREF
  BYTE Data[528]; // [rsp+330h] [rbp+230h] BYREF

  hKeya = hKey;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, a2);
  }
  memset(&SecurityAttributes.nLength + 1, 0, 20);
  SecurityAttributes.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(hKey, &SecurityAttributes.lpSecurityDescriptor);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_22;
  }
  v10 = a2;
  samDesired = a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000);
  if ( a4 )
    *a4 = 0LL;
  if ( !a2 )
    goto LABEL_53;
  v12 = wcschr(a2, 0x5Cu);
  v13 = v12;
  if ( !v12 )
  {
    v14 = a2;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v12 - a2) >= 0x104 )
  {
LABEL_53:
    LOWORD(v9) = 87;
    goto LABEL_19;
  }
  _o_wcsncpy_s(v64, 260LL, a2);
  v14 = (const WCHAR *)v64;
  v10 = v13 + 1;
LABEL_9:
  v15 = hKeya;
  v16 = 0;
  v47 = 0LL;
  v38 = 0LL;
  v17 = RegOpenKeyExW(hKeya, v14, 8u, samDesired, &v47);
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      v16 = 3;
    }
    else
    {
      LOBYTE(v16) = v17 != 5;
      v16 += 4;
    }
  }
  else
  {
    Type = 0;
    cbData = 520;
    v29 = RegQueryValueExW(v47, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v29 || v29 == 234) && Type == 6 )
      v16 = 1;
    if ( v29 == 2 || v16 != 1 )
    {
      v48 = 0LL;
      v30 = RegOpenKeyExW(hKeya, v14, 0, 0x20019u, &v48);
      RegCloseKey(v48);
      v16 = 2 - (v30 != 0);
    }
    v38 = v47;
  }
  v20 = (CNtDeleteKey *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                        + 4LL);
  if ( dword_1801B7900 > (int)v20 )
  {
    Init_thread_header(&dword_1801B7900);
    if ( dword_1801B7900 == -1 )
    {
      hLibModule = 0LL;
      qword_1801B7910 = 0LL;
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_1801B7900);
    }
  }
  v21 = v16 - 1;
  if ( !v21 )
  {
    if ( CNtDeleteKey::Init(v20) && !(qword_1801B7910 ? qword_1801B7910(v38) : 87) )
    {
      RegCloseKey(v38);
      v38 = 0LL;
      dwDisposition = 0;
      v15 = hKeya;
      goto LABEL_16;
    }
LABEL_87:
    v33 = v38;
    if ( !v38 )
    {
LABEL_89:
      LOWORD(v9) = 5;
      goto LABEL_19;
    }
LABEL_88:
    RegCloseKey(v33);
    goto LABEL_89;
  }
  if ( (unsigned int)(v21 - 1) > 1 )
    goto LABEL_87;
  dwDisposition = 0;
  if ( v38 )
  {
    dwDisposition = 2;
    goto LABEL_39;
  }
LABEL_16:
  v9 = RegCreateKeyExW(v15, v14, 0, 0LL, 0, samDesired, &SecurityAttributes, &v38, &dwDisposition);
  if ( v9 )
    goto LABEL_17;
  if ( dwDisposition != 1 )
  {
    v33 = v38;
    goto LABEL_88;
  }
LABEL_39:
  if ( v14 == v10 )
  {
    if ( a4 )
      *a4 = v38;
    goto LABEL_41;
  }
  v9 = SafeRegCreateKeyEx(v38, v10, v18, v19, phkResult, samDesired, &SecurityAttributes, a4);
  RegCloseKey(v38);
LABEL_17:
  if ( v9 )
  {
    if ( v9 <= 0 )
    {
LABEL_20:
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v36 = 15LL;
        goto LABEL_92;
      }
      goto LABEL_22;
    }
LABEL_19:
    v9 = (unsigned __int16)v9 | 0x80070000;
    goto LABEL_20;
  }
LABEL_41:
  Sid = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
      (_DWORD)a2,
      (char)*a4);
  }
  if ( ConvertStringSidToSidW(L"LW", &Sid) )
  {
    v31 = SetRegistryKeyIntegrityLevel(*a4, Sid);
    v9 = v31;
    if ( v31 < 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
          (unsigned int)v31);
      }
      v34 = SetRegistryHandleIntegrityLevel(*a4, Sid);
      v9 = v34;
      if ( v34 < 0
        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
          (unsigned int)v34);
      }
    }
    if ( Sid )
      LocalFree(Sid);
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v36 = 14LL;
LABEL_92:
      WPP_SF_d(*((_QWORD *)v22 + 2), v36, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, (unsigned int)v9);
    }
  }
LABEL_22:
  lpSecurityDescriptor = SecurityAttributes.lpSecurityDescriptor;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
  SecurityAttributes.lpSecurityDescriptor = 0LL;
  if ( v9 < 0 )
  {
    if ( *a4 )
    {
      RegCloseKey(*a4);
      *a4 = 0LL;
    }
    v46 = v9;
    v45 = 1053;
    hKeya = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&hKeya)
      && fPending )
    {
      hKeya = (HKEY)&qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    v25 = *((_QWORD *)hKeya + 1);
    if ( *(_DWORD *)v25 > 4u )
    {
      v59 = 27LL;
      v58 = "CreateLowRightsRegistryKey";
      v60 = &v45;
      v62 = &v46;
      v61 = 4LL;
      v63 = 4LL;
      v50[1] = 4;
      v26 = *(unsigned __int16 **)(v25 + 8);
      v27 = *(_QWORD *)(v25 + 32);
      v52 = v26;
      v50[0] = 184549376;
      v51 = 0LL;
      v53 = *v26;
      v55 = &unk_1801763A3;
      v54 = 2;
      v56 = 35;
      v57 = 1;
      cbData = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(v27, v50, 0LL, 0LL, 5, &v52);
    }
  }
  return (unsigned int)v9;
}
