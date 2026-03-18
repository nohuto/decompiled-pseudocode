/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0116C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rdx

  v5 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( CurrentProcess == gpepCSRSS )
  {
    UserSetLastError(12LL, CurrentProcess, v7, v8);
  }
  else
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(MmUserProbeAddress, v9) + 816);
    return 1;
  }
  return v5;
}
