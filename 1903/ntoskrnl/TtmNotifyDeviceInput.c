/*
 * XREFs of TtmNotifyDeviceInput @ 0x1408BAE80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1408BBB50 (TtmpFindDeviceByToken.c)
 *     TtmiGetTerminalById @ 0x1408BC5C4 (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BC6C8 (TtmiResetTerminalTimeouts.c)
 *     TtmiAcquireCurrentSession @ 0x1408BDD64 (TtmiAcquireCurrentSession.c)
 *     TtmiLogDeviceInputNotified @ 0x1408C1568 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

void __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char DeviceByToken; // di
  char v7; // r15
  int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v7 = 0;
  if ( (int)TtmiAcquireCurrentSession(&v13) < 0 )
  {
    TtmiLogError("TtmNotifyDeviceInput");
LABEL_3:
    v9 = v13;
    goto LABEL_4;
  }
  v9 = v13;
  if ( (*(_DWORD *)(v13 + 4) & 4) != 0 )
    goto LABEL_8;
  DeviceByToken = TtmpFindDeviceByToken(v13, a1, a2, &v11);
  if ( !DeviceByToken )
    goto LABEL_8;
  v10 = v11;
  *(_QWORD *)(v11 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v10 + 596) == -1 )
    goto LABEL_3;
  v9 = v13;
  if ( (int)TtmiGetTerminalById(v12, v13) < 0 )
LABEL_8:
    TtmiLogError("TtmNotifyDeviceInput");
  else
    v7 = TtmiResetTerminalTimeouts(v9, v12[0], 4, 1414809921, a3 & 1);
LABEL_4:
  LOBYTE(v8) = DeviceByToken;
  TtmiLogDeviceInputNotified(a1, a2, a3, v8, v7);
  if ( v9 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
