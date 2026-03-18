/*
 * XREFs of NtUserTransformRect @ 0x1C00F78A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int128 v19; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  v17 = 0LL;
  v9 = a2 & 0x7FFFFFFF;
  if ( ((a2 & 0x7FFFFFFF) == 0x6010 || v9 == 34 || v9 == 18 || v9 == 1073766416 || (a2 & 0x7FFE00FF) == 0x11)
    && ((v10 = a3 & 0x7FFFFFFF, (a3 & 0x7FFFFFFF) == 0x22)
     || v10 == 24592
     || v10 == 18
     || v10 == 1073766416
     || (a3 & 0x7FFE00FF) == 0x11) )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v19 = *a1;
    v8 = 1;
    LODWORD(v18) = (DWORD2(v19) + (int)v19) / 2;
    HIDWORD(v18) = (HIDWORD(v19) + DWORD1(v19)) / 2;
    v17 = GuessMonitorOverrideForCoordinateConversions(v18, a3, 0LL);
    LogicalToPhysicalDPIRect(&v19, &v19, a3, &v17);
    PhysicalToLogicalDPIRect(&v19, &v19, a2, &v17);
    *a1 = v19;
  }
  else
  {
    UserSetLastError(87LL, 24592LL, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v8;
}
