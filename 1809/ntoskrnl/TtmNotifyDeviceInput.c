/*
 * XREFs of TtmNotifyDeviceInput @ 0x14087E5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14087F2B0 (TtmpFindDeviceByToken.c)
 *     TtmiGetTerminalById @ 0x14087FD00 (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x14087FE04 (TtmiResetTerminalTimeouts.c)
 *     TtmiAcquireCurrentSession @ 0x140881424 (TtmiAcquireCurrentSession.c)
 *     TtmiLogDeviceInputNotified @ 0x140884A18 (TtmiLogDeviceInputNotified.c)
 */

void __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char DeviceByToken; // di
  char v7; // r15
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rcx
  int TerminalById; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v7 = 0;
  v8 = TtmiAcquireCurrentSession(&v17);
  if ( v8 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceInput", 754, v8, -1);
LABEL_3:
    v10 = v17;
    goto LABEL_4;
  }
  v10 = v17;
  if ( (*(_DWORD *)(v17 + 4) & 4) != 0 )
  {
    v11 = 762;
    v12 = -1073740715;
LABEL_9:
    TtmiLogError("TtmNotifyDeviceInput", v11, v12, -1);
    goto LABEL_4;
  }
  DeviceByToken = TtmpFindDeviceByToken(v17, a1, a2, &v15);
  if ( !DeviceByToken )
  {
    v11 = 779;
    v12 = -1073741275;
    goto LABEL_9;
  }
  v13 = v15;
  *(_QWORD *)(v15 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v13 + 596) == -1 )
    goto LABEL_3;
  v10 = v17;
  TerminalById = TtmiGetTerminalById(v16, v17);
  if ( TerminalById < 0 )
  {
    v12 = TerminalById;
    v11 = 798;
    goto LABEL_9;
  }
  v7 = TtmiResetTerminalTimeouts(v10, v16[0], 4, 1414809921, a3 & 1);
LABEL_4:
  LOBYTE(v9) = DeviceByToken;
  TtmiLogDeviceInputNotified(a1, a2, a3, v9, v7);
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
