/*
 * XREFs of _RegisterLogonProcess @ 0x1C00A1E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00A71E0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C01D76C8 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  int v6; // ebx

  v3 = a1;
  if ( gpidLogon )
  {
    if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    {
      v4 = 0x2000000;
LABEL_4:
      UserSetLastError(v4);
      return 0LL;
    }
    gpidLogonUI = v3;
    v6 = 0;
  }
  else
  {
    if ( !(unsigned int)IsPrivileged(&psTcb) )
    {
      v4 = 5;
      goto LABEL_4;
    }
    gpidLogon = v3;
    *((_DWORD *)gpsi + 567) = v3;
    v6 = WmsgpConnect(a2);
  }
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v6 >= 0;
}
