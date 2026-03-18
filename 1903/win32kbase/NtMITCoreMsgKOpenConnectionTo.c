/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C009CA70
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C00AA884 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  _BOOL8 v8; // rcx
  ULONG64 v9; // rcx
  unsigned int v10; // ebx
  __int128 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  _BYTE v14[40]; // [rsp+68h] [rbp-40h] BYREF

  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
  v8 = 0LL;
  if ( CurrentProcess )
    v8 = CurrentProcess == g_pepDwm;
  if ( !v8 )
  {
    v10 = -1073741790;
LABEL_9:
    UserSessionSwitchLeaveCrit(v8, v7);
    return v10;
  }
  if ( a1 <= 0x10 )
  {
    memset(v14, 0, sizeof(v14));
    v9 = a2 + 40;
    if ( a2 + 40 < a2 || v9 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)v14 = *(_OWORD *)a2;
    *(_OWORD *)&v14[16] = v12;
    *(_QWORD *)&v14[32] = v13;
    v10 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v9, a1, v14);
    goto LABEL_9;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return 3221225485LL;
}
