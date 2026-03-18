/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C0144B80
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0141C00 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C0142048 (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01448B0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02660E0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02704CC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C001E530 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0144DA8 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v24; // [rsp+30h] [rbp-49h]
  __int64 v25; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v26[10]; // [rsp+40h] [rbp-39h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v25 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3232), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3448) >= v10 && v8 - *(_QWORD *)(v6 + 3456) < 10000000 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3232));
    KeLeaveCriticalRegion();
    LODWORD(v13) = 1075708985;
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v21[3] = DpiFdoInvalidateChildRelations;
    v21[4] = *(int *)(v6 + 3448);
    v21[5] = v8;
    v21[6] = v3;
    v21[7] = 1075708985LL;
  }
  else
  {
    *(_DWORD *)(v6 + 3448) = v10;
    *(_QWORD *)(v6 + 3456) = v8;
    v24 = 0x10000LL;
    v23[1] = a3;
    v23[0] = (v9 << 28) | 0x2000000u;
    LOBYTE(v24) = (v3 & 4) != 0;
    BYTE1(v24) = (v3 & 2) != 0;
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            *(_QWORD *)(v6 + 40),
            *(_QWORD *)(v6 + 48),
            v23);
    v13 = v11;
    if ( v11 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v22 + 32) = v13;
      WdLogEvent5_WdError(v22);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3232));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3441) = 0;
  }
  memset(v26, 0, 0x48uLL);
  v14 = *(_QWORD *)(v6 + 2600);
  v15 = DxgkDiagCalcDuration1us(&v25);
  memset(&v26[1], 0, 36);
  v26[0] = 0x480000001ELL;
  LODWORD(v26[6]) = 37;
  HIDWORD(v26[6]) = v9 | v5 & 0xFFFF00;
  v26[7] = __PAIR64__(v13, v15);
  v26[8] = v14;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26);
  return (unsigned int)v13;
}
