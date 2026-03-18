/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023594C
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C0215240 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01D2240 (GetDPITransformationMonitor.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02350DC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C023AEC4 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
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
  struct InteractiveControlInput *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+34h] [rbp-55h] BYREF
  int v17; // [rsp+38h] [rbp-51h] BYREF
  struct InteractiveControlDevice *v18; // [rsp+40h] [rbp-49h] BYREF
  struct InteractiveControlInput *v19; // [rsp+48h] [rbp-41h] BYREF
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  const char *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  unsigned int *v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  int *v26; // [rsp+A0h] [rbp+17h]
  __int64 v27; // [rsp+A8h] [rbp+1Fh]

  v5 = a3;
  v15 = 0;
  v18 = 0LL;
  v19 = 0LL;
  DPITransformationMonitor = 0LL;
  if ( dword_1C030C400 > 4u )
  {
    v23 = 47LL;
    v22 = "InteractiveControlManager::GetReportInfo entry";
    v24 = (unsigned int *)&v17;
    v26 = &v16;
    v17 = a2;
    v25 = 4LL;
    v16 = a3;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6437, 0LL, 0LL, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v18, 0LL);
  v15 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v18, v5, &v19) )
    {
      v11 = v19;
      LOBYTE(v10) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v19 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v11 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v11 + 19);
      v13 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 2), v10);
      if ( v13 )
      {
        if ( PsGetCurrentProcessWin32Process(v12) == *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v13);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v15 = -1073741727;
        }
      }
    }
    else
    {
      v15 = -1073741811;
    }
  }
  else if ( dword_1C030C400 > 2u )
  {
    v16 = Device;
    v22 = "Function failed.";
    v24 = (unsigned int *)&v16;
    v23 = 17LL;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, v9, 0LL, 4u, &pData);
  }
  if ( dword_1C030C400 > 4u )
  {
    v23 = 46LL;
    v22 = "InteractiveControlManager::GetReportInfo exit";
    v24 = &v15;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
  }
  return v15;
}
