/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x1C00E5B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     McTemplateK0qzppq @ 0x1C00EB230 (McTemplateK0qzppq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall EtwTraceAuditApiSetWindowsHookEx(int a1, unsigned int *a2, __int64 a3, char a4, char a5)
{
  char v6; // r14
  char result; // al
  wchar_t *v9; // rbx
  __int64 v10; // rcx
  const wchar_t *v11; // rdi
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  int v14; // [rsp+40h] [rbp-288h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-248h] BYREF

  v6 = a3;
  result = W32kEtwEnabledKeyword;
  if ( (W32kEtwEnabledKeyword & 0x400) != 0 )
  {
    LOBYTE(a3) = 1;
    if ( (unsigned __int8)(byte_1C01C3328 - 1) > 2u
      && (qword_1C01C3310 & 0x400) != 0
      && (qword_1C01C3318 & 0x400) == qword_1C01C3318 )
    {
      result = 1;
      v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
      result = 0;
    }
    if ( result )
    {
      if ( !a2 )
        goto LABEL_21;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      v10 = *a2;
      v14 = *a2;
      v11 = (const wchar_t *)*((_QWORD *)a2 + 1);
      if ( ((unsigned __int8)v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
      v13 = (_BYTE **)MmUserProbeAddress;
      if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v14) )
      {
        if ( (v10 & 1) != 0 )
          goto LABEL_18;
        if ( v12 > (unsigned __int64)v11 )
        {
LABEL_20:
          result = RtlStringCchCopyW(pszDest, 0x104uLL, v11);
          v9 = pszDest;
LABEL_21:
          if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
            return McTemplateK0qzppq(a1, (_DWORD)a2, a3, a1, (__int64)v9, v6, a4, a5);
          return result;
        }
      }
      if ( (v10 & 1) == 0 )
      {
LABEL_19:
        **v13 = 0;
        goto LABEL_20;
      }
LABEL_18:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, a3);
      v13 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_19;
    }
  }
  return result;
}
