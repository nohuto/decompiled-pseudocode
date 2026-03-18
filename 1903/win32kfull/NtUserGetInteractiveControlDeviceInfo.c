/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C022CEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C024DD70 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, _OWORD *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  ULONG64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v11; // rax
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v13, 0, sizeof(v13));
  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v11, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)v13) >= 0 )
    {
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (_OWORD *)MmUserProbeAddress;
      *Address = *(_OWORD *)v13;
      Address[1] = *(_OWORD *)&v13[16];
      *((_QWORD *)Address + 4) = *(_QWORD *)&v13[32];
      v8 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v4, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
