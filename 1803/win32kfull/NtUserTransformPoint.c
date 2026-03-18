/*
 * XREFs of NtUserTransformPoint @ 0x1C00F1390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00F1490 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v15[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2, v7) && (unsigned int)IsValidKernelDpiAwarenessContext(a3, v8) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v16 = *a1;
    v15[0] = GuessMonitorOverrideForCoordinateConversions(v16, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v16, &v16, a3, v15);
    PhysicalToLogicalDPIPoint(&v16, &v16, a2, v15);
    *a1 = v16;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v8);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
