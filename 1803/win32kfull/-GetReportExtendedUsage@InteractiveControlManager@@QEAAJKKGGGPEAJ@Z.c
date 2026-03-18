/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C020C2EC
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1C01F1980 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C020BD70 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0211788 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C021656C (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        const GUID *a3,
        const GUID *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  int *v7; // r14
  unsigned __int16 v8; // bx
  __int64 result; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v14; // [rsp+40h] [rbp-A1h] BYREF
  int v15; // [rsp+44h] [rbp-9Dh] BYREF
  unsigned __int16 v16; // [rsp+48h] [rbp-99h] BYREF
  int v17; // [rsp+50h] [rbp-91h] BYREF
  struct InteractiveControlDevice *v18; // [rsp+58h] [rbp-89h] BYREF
  struct InteractiveControlInput *v19; // [rsp+60h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-71h] BYREF
  const char *v21; // [rsp+90h] [rbp-51h]
  __int64 v22; // [rsp+98h] [rbp-49h]
  int *v23; // [rsp+A0h] [rbp-41h]
  __int64 v24; // [rsp+A8h] [rbp-39h]
  int *v25; // [rsp+B0h] [rbp-31h]
  __int64 v26; // [rsp+B8h] [rbp-29h]
  unsigned __int16 *v27; // [rsp+C0h] [rbp-21h]
  __int64 v28; // [rsp+C8h] [rbp-19h]
  unsigned __int16 *v29; // [rsp+D0h] [rbp-11h]
  __int64 v30; // [rsp+D8h] [rbp-9h]
  unsigned __int16 *v31; // [rsp+E0h] [rbp-1h]
  __int64 v32; // [rsp+E8h] [rbp+7h]

  v7 = a7;
  v8 = (unsigned __int16)a3;
  v16 = (unsigned __int16)a4;
  v14 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( dword_1C031C7D0 > 4u )
  {
    v22 = 56LL;
    v21 = "InteractiveControlManager::GetReportExtendedUsage entry";
    v23 = &v17;
    v25 = &v15;
    v27 = &v16;
    v29 = &a5;
    v31 = &a6;
    v17 = a2;
    v24 = 4LL;
    v15 = (int)a3;
    v26 = 4LL;
    v28 = 2LL;
    v30 = 2LL;
    v32 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E39C8, a3, a4, 8u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, a2, 0LL, &v18, 0LL);
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v18, v8, &v19) )
    {
      result = 3221225485LL;
      v14 = -1073741811;
      goto LABEL_11;
    }
    result = InteractiveControlParser::ExtractCustomUsage(
               *(PHIDP_PREPARSED_DATA *)(*((_QWORD *)v19 + 5) + 256LL),
               *((PCHAR *)v19 + 10),
               *((_DWORD *)v19 + 22),
               v16,
               a5,
               a6,
               v7);
    v14 = result;
    if ( (int)result >= 0 || dword_1C031C7D0 <= 2u )
      goto LABEL_11;
  }
  else if ( dword_1C031C7D0 <= 2u )
  {
    goto LABEL_11;
  }
  v15 = result;
  v21 = "Function failed.";
  v23 = &v15;
  v22 = 17LL;
  v24 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v12, v13, 4u, &pData);
  result = v14;
LABEL_11:
  if ( dword_1C031C7D0 > 4u )
  {
    v22 = 55LL;
    v21 = "InteractiveControlManager::GetReportExtendedUsage exit";
    v23 = (int *)&v14;
    v15 = *v7;
    v25 = &v15;
    v24 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3950, v12, v13, 5u, &pData);
    return v14;
  }
  return result;
}
