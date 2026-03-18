/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C00B3A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0120954 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(int a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v7; // rcx
  unsigned int v8; // ebx
  ULONG64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-88h] BYREF
  int v12; // [rsp+30h] [rbp-78h]
  __int128 v13; // [rsp+48h] [rbp-60h]
  __int128 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  _OWORD v16[2]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+90h] [rbp-18h]

  v3 = a2;
  v12 = a1;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v11, a2, a3);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5);
  v7 = 0LL;
  if ( CurrentProcess )
    v7 = CurrentProcess == g_pepDwm;
  if ( v7 )
  {
    if ( a1 < 10 )
    {
      v9 = v3 + 40;
      if ( v3 + 40 < v3 || v9 > MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      v13 = *(_OWORD *)v3;
      v14 = *(_OWORD *)(v3 + 16);
      v15 = *(_QWORD *)(v3 + 32);
      v16[0] = v13;
      v16[1] = v14;
      v17 = v15;
      v8 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v9, (unsigned int)a1, v16);
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
