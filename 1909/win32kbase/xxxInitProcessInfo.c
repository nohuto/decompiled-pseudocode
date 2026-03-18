/*
 * XREFs of xxxInitProcessInfo @ 0x1C00AA140
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 *     WPP_RECORDER_SF_sq @ 0x1C00375EC (WPP_RECORDER_SF_sq.c)
 *     xxxSetProcessInitState @ 0x1C00376C0 (xxxSetProcessInitState.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CF44 (WPP_RECORDER_SF_qDD.c)
 *     GetProcessLuid @ 0x1C0061900 (GetProcessLuid.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0089D38 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C008A7A4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     SetAppStarting @ 0x1C008D180 (SetAppStarting.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00BA434 (-GetSpriteFillColor@@YAKXZ.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v6; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  int v14; // edx
  unsigned int SpriteFillColor; // eax
  __int64 v16; // rcx
  void *v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  char v23; // al
  const char *v24; // rax
  __int64 v25; // xmm1_8
  unsigned int v26; // ecx
  int Win32KFilterSet; // eax
  int v28; // ecx
  int v29; // [rsp+20h] [rbp-50h]
  int v30; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int128 v33; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+68h] [rbp-8h]
  PVOID v35; // [rsp+90h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v35) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  if ( !v6 )
    return 1073741851LL;
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(a1, &InitiateGuiProcessExecution, &Context.Flags);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_DWORD *)a1 + 78) = 0;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( UIPrivelegeIsolation::fEnforce )
    {
      if ( v11 < 0 )
        return 3221225473LL;
      v13 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 218) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 219) = v13;
    }
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v35);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 203) ^= (*((_DWORD *)a1 + 203) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v30) >= 0 )
        *((_DWORD *)a1 + 220) = v30;
      else
        *((_DWORD *)a1 + 220) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v35 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 203) |= 2u;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qDD(
          (_DWORD)gBaseLog,
          v14,
          18,
          18,
          (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids,
          *(_QWORD *)a1,
          *((_DWORD *)a1 + 218),
          *((_DWORD *)a1 + 219));
      }
      SpriteFillColor = GetSpriteFillColor();
      v16 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 271) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v16) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v17 = *(void **)a1;
      *((_QWORD *)a1 + 112) = -1LL;
      *((_QWORD *)a1 + 113) = -1LL;
      xxxSetProcessInitState(v17, 128);
      SetAppStarting((__int64)a1);
      v21 = *(_OWORD *)((char *)a1 + 296);
      v22 = *((_QWORD *)a1 + 39);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      v23 = *((_DWORD *)a1 + 203) & 0x30;
      v34 = v22;
      v33 = v21;
      if ( v23 != 16
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported() >= 0
        && (unsigned int)CheckAllowForeground(*(_QWORD *)a1) )
      {
        *((_DWORD *)a1 + 3) |= 0x100u;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = "set";
        if ( (*((_DWORD *)a1 + 3) & 0x100) == 0 )
          v24 = "NOT";
        WPP_RECORDER_SF_sq((unsigned int)"NOT", v18, v19, v20, v29, (__int64)v24, (char)a1);
      }
      v25 = *((_QWORD *)a1 + 39);
      v33 = *(_OWORD *)((char *)a1 + 296);
      v34 = v25;
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 772));
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 188) = 0;
      CitProcessCallout((__int64)a1, 1);
      v26 = *((_DWORD *)a1 + 203) & 0xFFB87FFF;
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 203) = v26;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v26 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 203) = v26 | 0x100000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v28 = 0;
      if ( Win32KFilterSet == 5 )
        v28 = 0x2000000;
      *((_DWORD *)a1 + 203) = v28 & 0xEFFFFFFF | *((_DWORD *)a1 + 203) & 0xEDFFFFFF;
      if ( *((_WORD *)gpsi + 3499) )
      {
        if ( (int)IsInitProcessSystemDpiSupported() < 0 )
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
        else
          InitProcessSystemDpi(a1);
      }
      return 0LL;
    }
  }
  return result;
}
