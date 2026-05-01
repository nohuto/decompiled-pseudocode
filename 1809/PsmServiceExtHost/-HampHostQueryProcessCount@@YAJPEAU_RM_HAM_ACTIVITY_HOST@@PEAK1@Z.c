/*
 * XREFs of ?HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003B718
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryProcessCount(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  int v8; // edx
  unsigned int v9; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  unsigned int *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  int *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  v12 = 0LL;
  result = RmHamHostActOnProcesses(
             (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
             4096,
             0,
             HampHostQueryProcessCountCallback,
             &v12);
  v7 = v12;
  v8 = HIDWORD(v12);
  v9 = result;
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *a3 = HIDWORD(v12);
    v9 = 0;
    *a2 = v7;
  }
  if ( hProvider > 5u )
  {
    v16 = 4LL;
    v15 = &v9;
    v13 = *((_QWORD *)a1 - 4);
    v17 = &v13;
    v19 = &v10;
    v21 = &v11;
    v18 = 8LL;
    v10 = v7;
    v20 = 4LL;
    v11 = v8;
    v22 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B53B, 0LL, 0LL, 6u, &pData);
    return v9;
  }
  return result;
}
