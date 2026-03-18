/*
 * XREFs of xxxInitProcessInfo @ 0x1C009B0FC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     CitProcessCallout @ 0x1C00332B0 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1C0046F00 (GetProcessLuid.c)
 *     xxxSetProcessInitState @ 0x1C0075090 (xxxSetProcessInitState.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C007CC54 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     SetAppStarting @ 0x1C007E170 (SetAppStarting.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00A9084 (-GetSpriteFillColor@@YAKXZ.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00E3F24 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v5; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  unsigned int SpriteFillColor; // eax
  __int64 v15; // rcx
  void *v16; // rcx
  int v17; // ecx
  int Win32KFilterSet; // eax
  int v19; // ecx
  int v20; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v23; // [rsp+60h] [rbp+20h] BYREF

  v5 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v23) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  if ( !v5 )
    return 1073741851LL;
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0((struct _MCGEN_TRACE_CONTEXT *)a1, &InitiateGuiProcessExecution, (const GUID *)&Context.Flags);
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
      *((_DWORD *)a1 + 220) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 221) = v13;
    }
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v23);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 205) ^= (*((_DWORD *)a1 + 205) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v20) >= 0 )
        *((_DWORD *)a1 + 222) = v20;
      else
        *((_DWORD *)a1 + 222) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v23 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 205) |= 2u;
      }
      SpriteFillColor = GetSpriteFillColor();
      v15 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 272) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v15) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v16 = *(void **)a1;
      *((_QWORD *)a1 + 113) = -1LL;
      *((_QWORD *)a1 + 114) = -1LL;
      xxxSetProcessInitState(v16, 128);
      SetAppStarting((__int64)a1);
      *((_QWORD *)a1 + 48) = gppiList;
      gppiList = (__int64)a1;
      if ( (*((_DWORD *)a1 + 205) & 0x30) != 0x10
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported() >= 0
        && (unsigned int)CheckAllowForeground(*(_QWORD *)a1) )
      {
        *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 780));
      *((_DWORD *)a1 + 102) = gcSysExpunge;
      *((_DWORD *)a1 + 190) = 0;
      CitProcessCallout((__int64)a1, 1);
      *((_DWORD *)a1 + 205) &= 0xFFDC7FFF;
      v17 = *((_DWORD *)a1 + 205);
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v17 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 205) = v17 | 0x80000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v19 = 0;
      if ( Win32KFilterSet == 5 )
        v19 = 0x1000000;
      *((_DWORD *)a1 + 205) = v19 | *((_DWORD *)a1 + 205) & 0xFEFFFFFF;
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
