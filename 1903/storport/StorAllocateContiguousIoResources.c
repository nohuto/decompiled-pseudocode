/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C00064CC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F4C (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C001542C (RaidUnitAllocateResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C00169C8 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaInitializeRaidResources @ 0x1C001A158 (RaInitializeRaidResources.c)
 *     RaInitializePower @ 0x1C001A6B8 (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0035620 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0035AF0 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0049590 (RaAttemptHighWaterMarkIncrease.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C006E888 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0072874 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 result; // rax
  _QWORD *v11; // rcx
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v13 = a2;
  v14 = 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a3 + 4392);
  v6 = *(_QWORD *)(a3 + 696);
  v7 = *(_QWORD *)(a3 + 4400);
  v13 = 1;
  v8 = *(_QWORD *)(a3 + 4384);
  if ( !*(_QWORD *)(a3 + 5632) )
    v3 = a1;
  v12[0] = v4;
  v9 = *(_BYTE *)(a3 + 704) == 0;
  v15 = v7;
  if ( v9 || *(_DWORD *)(a3 + 724) != 3 )
    result = MmAllocateContiguousNodeMemory(v3, v4, v7, v8, 4, 0x80000000);
  else
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, int *, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
               v6,
               v12,
               &v15,
               v3,
               0,
               &v13,
               0x80000000,
               &v14);
  if ( result )
  {
    if ( *(_QWORD *)(a3 + 5632) )
    {
      v11 = (_QWORD *)(result + v3 - 24LL);
      *(_QWORD *)(result + 816) = v11;
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      *(_QWORD *)(result + 816) = 0LL;
    }
    *(_QWORD *)(result + 24) = v14;
    *(_DWORD *)(result + 16) = v3;
  }
  return result;
}
