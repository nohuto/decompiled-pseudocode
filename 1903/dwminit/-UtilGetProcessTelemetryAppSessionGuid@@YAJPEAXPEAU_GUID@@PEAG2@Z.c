/*
 * XREFs of ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x1800011F8
 * Callers:
 *     DllMain @ 0x18000158C (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 */

__int64 __fastcall UtilGetProcessTelemetryAppSessionGuid(
        void *a1,
        struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  NTSTATUS InformationProcess; // ecx
  unsigned int v5; // ecx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE ProcessInformation[4]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-74h]
  __int64 v10; // [rsp+50h] [rbp-68h]
  int v11; // [rsp+78h] [rbp-40h]
  int v12; // [rsp+7Ch] [rbp-3Ch]

  ReturnLength[0] = 0;
  *(_QWORD *)&gDwmInitTargetAppSessionGuid.Data1 = 0LL;
  *(_QWORD *)gDwmInitTargetAppSessionGuid.Data4 = 0LL;
  InformationProcess = NtQueryInformationProcess(a1, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, ReturnLength);
  if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
  {
    v5 = 0;
    gDwmInitTargetAppSessionGuid.Data1 = v9;
    gDwmInitTargetAppSessionGuid.Data2 = v11;
    gSessionId = v11;
    gDwmInitTargetAppSessionGuid.Data3 = v12;
    gBootId = v12;
    *(_QWORD *)gDwmInitTargetAppSessionGuid.Data4 = v10;
  }
  else
  {
    return InformationProcess | 0x10000000u;
  }
  return v5;
}
