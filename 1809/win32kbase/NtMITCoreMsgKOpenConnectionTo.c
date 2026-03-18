/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C008B770
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0084AC4 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  BOOL v6; // ecx
  ULONG64 v7; // rcx
  __int128 v8; // xmm3
  __int64 v9; // xmm0_8
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-58h]
  _OWORD v14[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h]

  v13 = a1;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v12);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v4);
  v6 = 0;
  if ( CurrentProcess )
    v6 = CurrentProcess == g_pepDwm;
  if ( !v6 )
  {
    v10 = -1073741790;
LABEL_9:
    UserSessionSwitchLeaveCrit();
    return v10;
  }
  if ( a1 <= 0xA )
  {
    v7 = a2 + 40;
    if ( a2 + 40 < a2 || v7 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v8 = *(_OWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 32);
    v14[0] = *(_OWORD *)a2;
    v14[1] = v8;
    v15 = v9;
    v10 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v7, a1, (__int64)v14);
    goto LABEL_9;
  }
  UserSessionSwitchLeaveCrit();
  return 3221225485LL;
}
