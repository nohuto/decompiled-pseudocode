/*
 * XREFs of NtUserTransformPoint @ 0x1C0118A30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0118B70 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v18[4]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1LL);
  v17 = 0LL;
  v18[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2, v9) && (unsigned int)IsValidKernelDpiAwarenessContext(a3, v10) )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v14 = *a1;
    v17 = *a1;
    if ( a4 && (a2 & 0xF) == 2 )
    {
      v18[0] = ValidateHmonitor(a4);
      v14 = v17;
    }
    if ( !v18[0] )
      v18[0] = GuessMonitorOverrideForCoordinateConversions(v14, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v17, &v17, a3, v18);
    PhysicalToLogicalDPIPoint(&v17, &v17, a2, v18);
    *a1 = v17;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, v10, v11, v12);
  }
  UserSessionSwitchLeaveCrit(v15);
  return v8;
}
