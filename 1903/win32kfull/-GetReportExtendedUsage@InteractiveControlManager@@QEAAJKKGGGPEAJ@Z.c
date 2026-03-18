/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C024E2C4
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1C0230CA0 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024DD20 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0253B70 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C0258ED0 (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  int *v7; // r14
  unsigned __int16 v8; // bx
  __int64 result; // rax
  const GUID *v12; // r8
  int v13; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-9Dh] BYREF
  unsigned __int16 v15; // [rsp+48h] [rbp-99h] BYREF
  int v16; // [rsp+50h] [rbp-91h] BYREF
  struct InteractiveControlDevice *v17; // [rsp+58h] [rbp-89h] BYREF
  struct InteractiveControlInput *v18; // [rsp+60h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-71h] BYREF
  const char *v20; // [rsp+90h] [rbp-51h]
  __int64 v21; // [rsp+98h] [rbp-49h]
  unsigned int *v22; // [rsp+A0h] [rbp-41h]
  __int64 v23; // [rsp+A8h] [rbp-39h]
  int *v24; // [rsp+B0h] [rbp-31h]
  __int64 v25; // [rsp+B8h] [rbp-29h]
  unsigned __int16 *v26; // [rsp+C0h] [rbp-21h]
  __int64 v27; // [rsp+C8h] [rbp-19h]
  unsigned __int16 *v28; // [rsp+D0h] [rbp-11h]
  __int64 v29; // [rsp+D8h] [rbp-9h]
  unsigned __int16 *v30; // [rsp+E0h] [rbp-1h]
  __int64 v31; // [rsp+E8h] [rbp+7h]

  v7 = a7;
  v8 = a3;
  v15 = a4;
  v17 = 0LL;
  v18 = 0LL;
  if ( dword_1C0321308 > 4u )
  {
    v21 = 56LL;
    v20 = "InteractiveControlManager::GetReportExtendedUsage entry";
    v22 = (unsigned int *)&v16;
    v24 = &v13;
    v26 = &v15;
    v28 = &a5;
    v30 = &a6;
    v16 = a2;
    v23 = 4LL;
    v13 = a3;
    v25 = 4LL;
    v27 = 2LL;
    v29 = 2LL;
    v31 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E90AA, 0LL, 0LL, 8u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, a2, 0LL, &v17, 0LL);
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v17, v8, &v18) )
    {
      result = 3221225485LL;
      v14 = -1073741811;
      goto LABEL_12;
    }
    result = InteractiveControlParser::ExtractCustomUsage(
               *(PHIDP_PREPARSED_DATA *)(*((_QWORD *)v18 + 5) + 256LL),
               *((PCHAR *)v18 + 10),
               *((_DWORD *)v18 + 22),
               v15,
               a5,
               a6,
               v7);
    v14 = result;
    if ( (int)result >= 0 || dword_1C0321308 <= 2u )
      goto LABEL_12;
    v13 = result;
    v20 = "Function failed.";
    v22 = (unsigned int *)&v13;
    v21 = 17LL;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
  }
  else
  {
    if ( dword_1C0321308 <= 2u )
      goto LABEL_12;
    v13 = result;
    v20 = "Function failed.";
    v22 = (unsigned int *)&v13;
    v21 = 17LL;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, v12, 0LL, 4u, &pData);
  }
  result = v14;
LABEL_12:
  if ( dword_1C0321308 > 4u )
  {
    v21 = 55LL;
    v20 = "InteractiveControlManager::GetReportExtendedUsage exit";
    v22 = &v14;
    v13 = *v7;
    v24 = &v13;
    v23 = 4LL;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E906A, 0LL, 0LL, 5u, &pData);
    return v14;
  }
  return result;
}
