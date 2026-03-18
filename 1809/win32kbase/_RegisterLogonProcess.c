/*
 * XREFs of _RegisterLogonProcess @ 0x1C0090020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00900E0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C020057C (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  __int64 v6; // rcx

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 567) = v3;
      v4 = WmsgpConnect(a2);
      goto LABEL_4;
    }
    v6 = 5LL;
LABEL_12:
    UserSetLastError(v6);
    return 0LL;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v6 = 0x2000000LL;
    goto LABEL_12;
  }
  gpidLogonUI = v3;
  v4 = 0;
LABEL_4:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v4 >= 0;
}
