/*
 * XREFs of NtUserTransformPoint @ 0x1C010BA70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C010BB8C (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v18[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2, v7, v8)
    && (unsigned int)IsValidKernelDpiAwarenessContext(a3, v9, v10) )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v19 = *a1;
    v18[0] = GuessMonitorOverrideForCoordinateConversions(v19, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v19, &v19, a3, v18);
    PhysicalToLogicalDPIPoint(&v19, &v19, a2, v18);
    *a1 = v19;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v9, v10, v11);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v6;
}
