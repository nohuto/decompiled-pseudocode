/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180038630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  BOOL v6; // ebx
  NTSTATUS result; // eax
  NTSTATUS v8; // [rsp+38h] [rbp-49h] BYREF
  BOOL ProcessInformation; // [rsp+3Ch] [rbp-45h] BYREF
  int v10; // [rsp+40h] [rbp-41h] BYREF
  BOOL v11; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  NTSTATUS *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  __int64 *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  int *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  BOOL *v27; // [rsp+B8h] [rbp+37h]
  int v28; // [rsp+C0h] [rbp+3Fh]
  int v29; // [rsp+C4h] [rbp+43h]

  v6 = (_DWORD)a4 != 0;
  ProcessInformation = v6;
  result = NtSetInformationProcess(a2, ProcessImageFileName|0x40, &ProcessInformation, 4u);
  v8 = result;
  if ( hProvider > 4u )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v8;
    v12 = *((_QWORD *)a1 + 4);
    v21 = &v12;
    v24 = &v10;
    v27 = &v11;
    v19 = 4;
    v22 = 8;
    v10 = a3;
    v25 = 4;
    v11 = v6;
    v28 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180088B17 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v15 = &unk_180088B22;
    UserData.Reserved = 2;
    v16 = 58;
    v17 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    return v8;
  }
  return result;
}
