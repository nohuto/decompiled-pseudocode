/*
 * XREFs of xxxInitProcessInfo @ 0x1C003C3AC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1C003CBE0 (GetProcessLuid.c)
 *     SetAppStarting @ 0x1C003CC90 (SetAppStarting.c)
 *     xxxSetProcessInitState @ 0x1C003CD00 (xxxSetProcessInitState.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C003CDEC (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003CEF4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, unsigned int a3, int a4, int a5)
{
  bool v5; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int Win32KFilterSet; // eax
  int v17; // ecx
  int v18; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v21; // [rsp+60h] [rbp+20h] BYREF

  v5 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v21) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  if ( !v5 )
    return 1073741851LL;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( gbEnforceUIPI )
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
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v21);
    MarkImmersiveProcess(a1, Token, a3);
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
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v18) >= 0 )
        *((_DWORD *)a1 + 220) = v18;
      else
        *((_DWORD *)a1 + 220) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v21 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 203) |= 2u;
      }
      if ( PsGetProcessWow64Process(*(_QWORD *)a1) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v14 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 112) = -1LL;
      *((_QWORD *)a1 + 113) = -1LL;
      xxxSetProcessInitState(v14, 128LL);
      SetAppStarting(a1);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      if ( (*((_DWORD *)a1 + 203) & 0x30) != 0x10
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported() >= 0
        && (unsigned int)CheckAllowForeground(*(_QWORD *)a1) )
      {
        *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 772));
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 188) = 0;
      CitProcessCallout((__int64)a1, 1);
      *((_DWORD *)a1 + 203) &= 0xFF9C7FFF;
      v15 = *((_DWORD *)a1 + 203);
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v15 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 203) = v15 | 0x80000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v17 = 0;
      if ( Win32KFilterSet == 5 )
        v17 = 0x2000000;
      *((_DWORD *)a1 + 203) = v17 | *((_DWORD *)a1 + 203) & 0xFDFFFFFF;
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
