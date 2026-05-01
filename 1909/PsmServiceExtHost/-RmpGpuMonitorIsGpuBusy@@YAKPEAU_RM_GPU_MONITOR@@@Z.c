/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180070BEC
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180070D30 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CrmStateMonitorGPUUsageQuery @ 0x1800048CC (CrmStateMonitorGPUUsageQuery.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  unsigned __int8 v2; // dl
  BOOL v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  unsigned __int8 v10; // [rsp+38h] [rbp-29h] BYREF
  bool v11; // [rsp+39h] [rbp-28h] BYREF
  NTSTATUS v12; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  NTSTATUS *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  unsigned __int8 *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  bool *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  v12 = CrmStateMonitorGPUUsageQuery(&v14);
  if ( v12 < 0 )
    goto LABEL_2;
  RtlQueryUnbiasedInterruptTime(&v13);
  v4 = v13 - *((_QWORD *)a1 + 3);
  if ( v13 == *((_QWORD *)a1 + 3) )
  {
    v12 = -1071513567;
LABEL_2:
    v2 = 100;
    v3 = 1;
    goto LABEL_8;
  }
  v5 = v14;
  *((_QWORD *)a1 + 3) = v13;
  v6 = v5 - *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = v5;
  v7 = 100 * v6 / v4;
  v2 = 100;
  if ( v7 < 0x64 )
    v2 = v7;
  v3 = v2 > *((_BYTE *)a1 + 48);
  v12 = 0;
LABEL_8:
  v10 = v2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v12;
    v19 = &v10;
    v22 = &v11;
    v17 = 4;
    v20 = 1;
    v11 = v3;
    v23 = 1;
    TlgWrite(v8, &unk_180095A96, 0LL, 0LL, 5u, &pData);
  }
  return v3;
}
