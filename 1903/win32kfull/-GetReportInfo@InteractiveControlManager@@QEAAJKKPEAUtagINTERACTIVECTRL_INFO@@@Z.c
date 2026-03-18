/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024E580
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C022D020 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E6E50 (GetDPITransformationMonitor.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024DD20 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0253B70 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
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
  __int64 v12; // r9
  struct InteractiveControlInput *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  int v19; // [rsp+34h] [rbp-55h] BYREF
  int v20; // [rsp+38h] [rbp-51h] BYREF
  struct InteractiveControlDevice *v21; // [rsp+40h] [rbp-49h] BYREF
  struct InteractiveControlInput *v22; // [rsp+48h] [rbp-41h] BYREF
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  const char *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  unsigned int *v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+9Ch] [rbp+13h]
  int *v31; // [rsp+A0h] [rbp+17h]
  int v32; // [rsp+A8h] [rbp+1Fh]
  int v33; // [rsp+ACh] [rbp+23h]

  v21 = 0LL;
  v22 = 0LL;
  DPITransformationMonitor = 0LL;
  v5 = a3;
  if ( dword_1C0321308 > 4u )
  {
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v25 = "InteractiveControlManager::GetReportInfo entry";
    v28 = (unsigned int *)&v20;
    v31 = &v19;
    v26 = 47;
    v20 = a2;
    v29 = 4;
    v19 = a3;
    v32 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E9112, 0LL, 0LL, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v21, 0LL);
  v18 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v21, v5, &v22) )
    {
      v13 = v22;
      LOBYTE(v10) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v22 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v13 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v13 + 19);
      v16 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 2), v10, v11, v12);
      if ( v16 )
      {
        if ( PsGetCurrentProcessWin32Process(v15, v14) == *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v16);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v18 = -1073741727;
        }
      }
    }
    else
    {
      v18 = -1073741811;
    }
  }
  else if ( dword_1C0321308 > 2u )
  {
    v27 &= (unsigned int)v9;
    v30 &= (unsigned int)v9;
    v19 = Device;
    v28 = (unsigned int *)&v19;
    v25 = "Function failed.";
    v26 = 17;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, v9, 0LL, 4u, &pData);
  }
  if ( dword_1C0321308 > 4u )
  {
    v27 = 0;
    v30 = 0;
    v25 = "InteractiveControlManager::GetReportInfo exit";
    v28 = &v18;
    v26 = 46;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
  }
  return v18;
}
