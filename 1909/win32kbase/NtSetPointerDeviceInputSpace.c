/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C0113B00
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0144270 (RIMSetPointerDeviceInputSpace.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // ebx
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int128 *v17; // rdx
  NTSTATUS v18; // eax
  PVOID v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+50h] [rbp-48h]
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v24 = 0uLL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
  v11 = 0LL;
  if ( CurrentProcess )
    v11 = CurrentProcess == g_pepDwm;
  if ( !v11 )
  {
    v6 = 0;
    v12 = 5LL;
LABEL_5:
    UserSetLastError(v12, v11);
    goto LABEL_20;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v20) >= 0 )
  {
    if ( a2 )
    {
      v16 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v16 = (__int64 *)MmUserProbeAddress;
      v22 = *v16;
      v21 = v22;
    }
    if ( a3 )
    {
      v17 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v17 = (__int128 *)MmUserProbeAddress;
      v23 = *v17;
      v24 = v23;
    }
    v7 = v20;
    v18 = RIMSetPointerDeviceInputSpace(
            v20,
            (unsigned __int64)&v21 & -(__int64)(a2 != 0),
            (unsigned __int64)&v24 & -(__int64)(a3 != 0));
    if ( v18 < 0 )
    {
      v6 = 0;
      v12 = RtlNtStatusToDosError(v18);
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v15);
    v7 = v20;
  }
LABEL_20:
  if ( v7 )
    ObfDereferenceObject(v7);
  UserSessionSwitchLeaveCrit(v14, v13);
  return v6;
}
