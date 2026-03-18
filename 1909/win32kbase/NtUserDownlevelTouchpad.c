/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C0114950
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A704 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  LPCWSTR *v12; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v12, L"DownlevelTouchpad", 0LL);
  EnterCrit(0, 1);
  v5 = 0;
  v11 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_11;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v11 = *a2;
  if ( (unsigned int)v11 > 2 )
  {
LABEL_11:
    v9 = 87LL;
    goto LABEL_12;
  }
  v6 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v11);
  if ( v6 < 0 )
  {
    v9 = RtlNtStatusToDosError(v6);
LABEL_12:
    UserSetLastError(v9, v4);
    goto LABEL_13;
  }
  v5 = 1;
LABEL_13:
  UserSessionSwitchLeaveCrit(v8, v7);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v12);
  return v5;
}
