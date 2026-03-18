/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C015AF90
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C0158078 (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C015ACA0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0163120 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C029D1F0 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02A1D90 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02ACE5C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C001E1E0 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C015B1C0 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v25; // [rsp+30h] [rbp-49h]
  __int64 v26; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v27[10]; // [rsp+40h] [rbp-39h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v26 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3304), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3552) >= v10 && v8 - *(_QWORD *)(v6 + 3560) < 10000000 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    LODWORD(v15) = 1075708985;
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
    v22[3] = DpiFdoInvalidateChildRelations;
    v22[4] = *(int *)(v6 + 3552);
    v22[5] = v8;
    v22[6] = v3;
    v22[7] = 1075708985LL;
  }
  else
  {
    *(_DWORD *)(v6 + 3552) = v10;
    *(_QWORD *)(v6 + 3560) = v8;
    v25 = 0x10000LL;
    v24[1] = a3;
    v24[0] = (v9 << 28) | 0x2000000u;
    LOBYTE(v25) = (v3 & 4) != 0;
    BYTE1(v25) = (v3 & 2) != 0;
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            *(_QWORD *)(v6 + 40),
            *(_QWORD *)(v6 + 48),
            v24);
    v15 = v11;
    if ( v11 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v23 + 32) = v15;
      WdLogEvent5_WdError(v23);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3513) = 0;
  }
  memset(v27, 0, 0x48uLL);
  v16 = *(_QWORD *)(v6 + 2672);
  v17 = DxgkDiagCalcDuration1us(&v26);
  memset(&v27[1], 0, 36);
  HIDWORD(v27[6]) = v9 | v5 & 0xFFFF00;
  v27[0] = 0x480000001ELL;
  LODWORD(v27[6]) = 37;
  v27[7] = __PAIR64__(v15, v17);
  v27[8] = v16;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, *(_QWORD *)(v6 + 5760), v18);
  return (unsigned int)v15;
}
