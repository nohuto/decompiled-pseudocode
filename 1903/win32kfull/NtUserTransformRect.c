/*
 * XREFs of NtUserTransformRect @ 0x1C00FFD80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+58h] [rbp-50h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1LL);
  v18 = 0uLL;
  v17 = 0LL;
  v16[0] = 0LL;
  v11 = a2 & 0x5FFFFFFF;
  if ( ((a2 & 0x5FFFFFFF) == 0x6010 || v11 == 34 || v11 == 18 || v11 == 1073766416 || (a2 & 0x5FFE00FF) == 0x11)
    && ((v12 = a3 & 0x5FFFFFFF, (a3 & 0x5FFFFFFF) == 0x22)
     || v12 == 24592
     || v12 == 18
     || v12 == 1073766416
     || (a3 & 0x5FFE00FF) == 0x11) )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v18 = *a1;
    if ( a4 && (a2 & 0xF) == 2 )
      v16[0] = ValidateHmonitor(a4);
    if ( !v16[0] )
    {
      LODWORD(v17) = (DWORD2(v18) + (int)v18) / 2;
      HIDWORD(v17) = (HIDWORD(v18) + DWORD1(v18)) / 2;
      v16[0] = GuessMonitorOverrideForCoordinateConversions(v17, a3, 0LL);
    }
    LogicalToPhysicalDPIRect(&v18, &v18, a3, v16);
    PhysicalToLogicalDPIRect(&v18, &v18, a2, v16);
    *a1 = v18;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, 24592LL, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
