/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C01370C8
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0132F5C (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     RIMEndAllActiveContacts @ 0x1C013C730 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8

  v4 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 || (*(_DWORD *)(a1 + 288) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v5 + 568);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v5 + 80) && !*(_BYTE *)(v5 + 81) )
    RIMEndAllActiveContacts(v5, *(_QWORD *)(a1 + 568), 0LL);
  v7 = *(unsigned int *)(a1 + 272);
  v8 = &WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids;
  if ( (v7 & 0x20) == 0
    && *(_BYTE *)(a1 + 136) != 3
    && ((v7 & 0x40000000) != 0 || *(_QWORD *)(a1 + 280) || (*(_DWORD *)(a1 + 276) & 1) != 0) )
  {
    if ( (int)v7 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, &WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v6);
      v8 = &WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids;
    }
    *(_DWORD *)(a1 + 288) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        (_DWORD)v8,
        1,
        51,
        (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
        a1 + 88);
    }
    v4 = 0;
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)(v5 + 568));
  if ( v4 )
  {
    if ( (*(_QWORD *)(v5 + 640) || *(_DWORD *)(v5 + 864)) && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v10, v9)
      || *(_BYTE *)(v5 + 82) )
    {
      *(_DWORD *)(a1 + 272) |= 0x40000u;
      RIMLockExclusive((__int64)&gObListLock);
      *(_DWORD *)(a1 + 288) |= 4u;
      CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
      *(_DWORD *)(a1 + 272) |= 0x200000u;
      ZwSetEvent(*(HANDLE *)(v5 + 384), 0LL);
    }
    else
    {
      rimDoRimDevChange(v5, a1 + 88, 3LL);
      if ( *(_BYTE *)(v5 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 52, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
        RIMFreeSpecificDev(v5, a1 + 88, v12);
      }
      else if ( !*(_BYTE *)(v5 + 82) )
      {
        RIMFreeDev(v5, a1 + 88);
      }
    }
  }
}
