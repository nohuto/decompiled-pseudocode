/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024DE40
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C022CA00 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E6CD0 (GetDPITransformationMonitor.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024D5E0 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0253430 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        int a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // di
  int Device; // eax
  const GUID *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v17; // [rsp+30h] [rbp-59h] BYREF
  int v18; // [rsp+34h] [rbp-55h] BYREF
  int v19; // [rsp+38h] [rbp-51h] BYREF
  struct InteractiveControlDevice *v20; // [rsp+40h] [rbp-49h] BYREF
  struct InteractiveControlInput *v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  const char *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  unsigned int *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]
  int *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]

  v20 = 0LL;
  v21 = 0LL;
  DPITransformationMonitor = 0LL;
  v5 = a3;
  if ( dword_1C031F308 > 4u )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = "InteractiveControlManager::GetReportInfo entry";
    v27 = (unsigned int *)&v19;
    v30 = &v18;
    v25 = 47;
    v19 = a2;
    v28 = 4;
    v18 = a3;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E86D2, 0LL, 0LL, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v20, 0LL);
  v17 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v20, v5, &v21) )
    {
      v12 = v21;
      LOBYTE(v10) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v21 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v15 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), v10, v11);
      if ( v15 )
      {
        if ( PsGetCurrentProcessWin32Process(v14, v13) == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v15);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v17 = -1073741727;
        }
      }
    }
    else
    {
      v17 = -1073741811;
    }
  }
  else if ( dword_1C031F308 > 2u )
  {
    v26 &= (unsigned int)v9;
    v29 &= (unsigned int)v9;
    v18 = Device;
    v27 = (unsigned int *)&v18;
    v24 = "Function failed.";
    v25 = 17;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, v9, 0LL, 4u, &pData);
  }
  if ( dword_1C031F308 > 4u )
  {
    v26 = 0;
    v29 = 0;
    v24 = "InteractiveControlManager::GetReportInfo exit";
    v27 = &v17;
    v25 = 46;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E837A, 0LL, 0LL, 4u, &pData);
  }
  return v17;
}
