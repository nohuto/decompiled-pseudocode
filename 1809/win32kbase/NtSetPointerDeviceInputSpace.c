/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C00EE140
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0113408 (RIMSetPointerDeviceInputSpace.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  PVOID v6; // rdi
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  BOOL v9; // edx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int128 *v13; // rdx
  NTSTATUS v14; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  PVOID v17; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v16, a2, a3);
  v6 = 0LL;
  v17 = 0LL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
  v9 = 0;
  v10 = 1;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( !v9 )
  {
    v10 = 0;
    v11 = 5LL;
LABEL_5:
    UserSetLastError(v11);
    goto LABEL_20;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v17) >= 0 )
  {
    if ( a2 )
    {
      v12 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v12 = (__int64 *)MmUserProbeAddress;
      v18 = *v12;
    }
    if ( a3 )
    {
      v13 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v13 = (__int128 *)MmUserProbeAddress;
      v19 = *v13;
    }
    v6 = v17;
    v14 = RIMSetPointerDeviceInputSpace(
            v17,
            (unsigned __int64)&v18 & -(__int64)(a2 != 0),
            (unsigned __int64)&v19 & -(__int64)(a3 != 0));
    if ( v14 < 0 )
    {
      v10 = 0;
      v11 = RtlNtStatusToDosError(v14);
      goto LABEL_5;
    }
  }
  else
  {
    v10 = 0;
    UserSetLastError(87LL);
    v6 = v17;
  }
LABEL_20:
  if ( v6 )
    ObfDereferenceObject(v6);
  UserSessionSwitchLeaveCrit();
  return v10;
}
