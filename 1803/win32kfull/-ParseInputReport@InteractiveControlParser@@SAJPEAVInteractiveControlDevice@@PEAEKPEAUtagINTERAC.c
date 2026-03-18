/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0216A58
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0212F2C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C021663C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0216970 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        const GUID *ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  GUID *PreparsedData; // r9
  int v6; // r14d
  int v7; // r13d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v10; // rax
  struct InteractiveControlDevice *v11; // rbx
  struct InteractiveControlDevice *v12; // r15
  int v13; // ecx
  NTSTATUS UsageValue; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // ecx
  NTSTATUS Usages; // eax
  __int64 v19; // rcx
  NTSTATUS ScaledUsageValue; // eax
  signed int v21; // eax
  __int16 v22; // cx
  int ScaledComponentValue; // eax
  int v24; // r8d
  int v25; // eax
  int v26; // r9d
  int v27; // eax
  int v28; // r9d
  int v29; // ecx
  __int16 v30; // ax
  int v31; // eax
  bool v32; // bl
  __int64 v33; // rcx
  unsigned int pActivityId; // [rsp+40h] [rbp-C0h]
  signed int pActivityId_4; // [rsp+44h] [rbp-BCh] BYREF
  CHAR *v37; // [rsp+48h] [rbp-B8h]
  LPCGUID pRelatedActivityId; // [rsp+50h] [rbp-B0h]
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  int v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  const char *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  int *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  int *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  int *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+100h] [rbp+0h] BYREF
  const char *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  USHORT UsageList[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v70; // [rsp+138h] [rbp+38h]

  pActivityId = (unsigned int)ReportLength;
  v37 = Report;
  PreparsedData = (GUID *)*((_QWORD *)a1 + 32);
  v6 = 0;
  pRelatedActivityId = PreparsedData;
  v7 = 0;
  UsageLength = 5;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v70 = 0;
  v45 = 0LL;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)v6;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    pActivityId_4 = 0;
    v11 = v9;
    v12 = v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v13 = *((_DWORD *)v11 + 4);
    if ( ((v13 - 1) & 0xFFFFFFF9) != 0 || v13 == 3 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v11 + 12),
                           *((_WORD *)v11 + 15),
                           *((_WORD *)v11 + 40),
                           &pActivityId_4,
                           (PHIDP_PREPARSED_DATA)PreparsedData,
                           Report,
                           (ULONG)ReportLength);
      v17 = pActivityId_4;
      v6 = ScaledUsageValue;
    }
    else if ( v13 == 1 )
    {
      UsageValue = HidP_GetUsageValue(
                     HidP_Input,
                     *((_WORD *)v12 + 12),
                     *((_WORD *)v12 + 15),
                     *((_WORD *)v11 + 40),
                     (PULONG)&pActivityId_4,
                     (PHIDP_PREPARSED_DATA)PreparsedData,
                     Report,
                     (ULONG)ReportLength);
      v17 = pActivityId_4;
      v6 = UsageValue;
      if ( pActivityId_4 < *((_DWORD *)v11 + 16) || pActivityId_4 > *((_DWORD *)v11 + 17) )
        v6 = -2146369535;
    }
    else
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 *((_WORD *)v12 + 12),
                 *((_WORD *)v12 + 15),
                 UsageList,
                 &UsageLength,
                 (PHIDP_PREPARSED_DATA)PreparsedData,
                 Report,
                 (ULONG)ReportLength);
      v19 = 0LL;
      v6 = Usages;
      if ( UsageLength )
      {
        v15 = (const GUID *)*((unsigned __int16 *)v12 + 40);
        while ( UsageList[v19] != (_WORD)v15 )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= UsageLength )
            goto LABEL_14;
        }
        v17 = 1;
        pActivityId_4 = 1;
      }
      else
      {
LABEL_14:
        v17 = pActivityId_4;
      }
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2146369535 && dword_1C031C7D0 > 2u )
      {
        v49 = 0;
        v52 = 0;
        v55 = 0;
        v58 = 0;
        v61 = 0;
        v47 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v48 = 73;
        v50 = &v40;
        v41 = *((_DWORD *)v11 + 4);
        v53 = &v41;
        v42 = pActivityId;
        v56 = &v42;
        v43 = *((unsigned __int16 *)a1 + 40);
        v59 = &v43;
        v40 = v6;
        v51 = 4;
        v54 = 4;
        v57 = 4;
        v60 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E4412, v15, v16, 7u, &pData);
      }
      v6 = 0;
      goto LABEL_53;
    }
    switch ( *((_DWORD *)v11 + 4) )
    {
      case 1:
        if ( *((_WORD *)v11 + 12) == 1 )
        {
          v30 = *((_WORD *)v11 + 40);
          if ( v30 == 48 )
          {
            LODWORD(v45) = v17;
LABEL_51:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
            goto LABEL_52;
          }
          if ( v30 == 49 )
          {
            HIDWORD(v45) = v17;
            goto LABEL_51;
          }
        }
LABEL_52:
        v7 = 1;
        goto LABEL_53;
      case 3:
        if ( v17 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v17);
            v24 = *((_DWORD *)v11 + 26);
            v25 = v24 + ScaledComponentValue;
            v26 = *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) = v25;
            v27 = v25 / v26;
            v28 = v27 * v26;
            *((_DWORD *)a4 + 6) = v28;
            if ( (v24 ^ *((_DWORD *)v11 + 26)) < 0 )
            {
              v29 = *((_DWORD *)v12 + 27);
              if ( *((int *)v11 + 26) <= 0 )
                *((_DWORD *)a4 + 6) = v28 - v29;
              else
                *((_DWORD *)a4 + 6) = v28 + v29;
            }
            *((_DWORD *)a4 + 6) = v27 * *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) -= v27 * *((_DWORD *)v11 + 27);
          }
          else if ( dword_1C031C7D0 > 2u )
          {
            v49 = 0;
            v52 = 0;
            v55 = 0;
            v58 = 0;
            v40 = 0;
            v61 = 0;
            v64 = 0;
            v47 = "InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v50 = &v43;
            v53 = &v42;
            v41 = *((_DWORD *)v11 + 26);
            v56 = &v41;
            v59 = &v40;
            v44 = *((_DWORD *)v11 + 27);
            v62 = &v44;
            v48 = 78;
            v43 = v6;
            v51 = 4;
            v42 = 3;
            v54 = 4;
            v57 = 4;
            v60 = 4;
            v63 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E4396, v15, v16, 8u, &pData);
          }
        }
        goto LABEL_53;
      case 5:
      case 7:
        if ( v17 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_53;
    }
    if ( *((_DWORD *)v11 + 4) == 8 && v17 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
      v21 = InteractiveControlParser::GetScaledComponentValue(v11, v17);
      pActivityId_4 = v21;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v21;
      }
      else
      {
        v22 = *((_WORD *)v11 + 40);
        if ( v22 == 72 )
        {
          *((_DWORD *)a1 + 55) = v21;
          goto LABEL_53;
        }
        if ( v22 != 73 )
          goto LABEL_53;
      }
      *((_DWORD *)a1 + 56) = v21;
    }
LABEL_53:
    PreparsedData = (GUID *)pRelatedActivityId;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v37;
    ReportLength = (const GUID *)pActivityId;
  }
  while ( v9 != v10 );
  if ( v7 )
  {
    if ( !*((_QWORD *)a1 + 30) )
    {
      v31 = *((_DWORD *)a1 + 62);
      v32 = 0;
      if ( v31 == 100 )
      {
        if ( dword_1C031C7D0 > 3u )
        {
          v68 = 0;
          v66 = "No mapped digitizer found for positional data. Attempting to rematch...";
          v67 = 72;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E4366, ReportLength, PreparsedData, 3u, &v65);
        }
        v32 = (int)InteractiveControlParser::FindDigitizerForDevice(a1) >= 0;
        *((_DWORD *)a1 + 62) = 0;
        v31 = 0;
      }
      if ( !v32 )
      {
        *((_DWORD *)a4 + 5) &= ~2u;
        v31 = *((_DWORD *)a1 + 62);
        v7 = 0;
      }
      *((_DWORD *)a1 + 62) = v31 + 1;
    }
    if ( v7 )
    {
      v33 = *((_QWORD *)a1 + 30);
      if ( v33 )
        RIMTransformCoordinatesFromDigitizer(v33, &v45, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)v6;
}
