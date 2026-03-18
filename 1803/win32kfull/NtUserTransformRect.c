/*
 * XREFs of NtUserTransformRect @ 0x1C00DD590
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  v15 = 0LL;
  v7 = a2 & 0x7FFFFFFF;
  if ( ((a2 & 0x7FFFFFFF) == 0x6010 || v7 == 34 || v7 == 18 || v7 == 1073766416 || (a2 & 0x7FFE00FF) == 0x11)
    && ((v8 = a3 & 0x7FFFFFFF, (a3 & 0x7FFFFFFF) == 0x22)
     || v8 == 18
     || v8 == 24592
     || v8 == 1073766416
     || (a3 & 0x7FFE00FF) == 0x11) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v17 = *a1;
    v6 = 1;
    LODWORD(v16) = (DWORD2(v17) + (int)v17) / 2;
    HIDWORD(v16) = (HIDWORD(v17) + DWORD1(v17)) / 2;
    v15 = GuessMonitorOverrideForCoordinateConversions(v16, a3, 0LL);
    LogicalToPhysicalDPIRect(&v17, &v17, a3, &v15);
    PhysicalToLogicalDPIRect(&v17, &v17, a2, &v15);
    *a1 = v17;
  }
  else
  {
    UserSetLastError(87LL, 24592LL);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
