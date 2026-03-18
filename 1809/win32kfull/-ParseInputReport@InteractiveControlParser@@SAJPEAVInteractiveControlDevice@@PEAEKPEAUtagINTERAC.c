/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024060C
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C023C738 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024025C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0240520 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  int v6; // r14d
  int v7; // r13d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v10; // rax
  struct InteractiveControlDevice *v11; // rbx
  struct InteractiveControlDevice *v12; // r15
  int v13; // ecx
  NTSTATUS v14; // eax
  ULONG v15; // ecx
  NTSTATUS Usages; // eax
  __int64 v17; // rcx
  NTSTATUS ScaledUsageValue; // eax
  ULONG v19; // eax
  __int16 v20; // cx
  int ScaledComponentValue; // eax
  int v22; // r8d
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  __int16 v29; // ax
  int v30; // eax
  bool v31; // bl
  __int64 v32; // rcx
  ULONG v34; // [rsp+40h] [rbp-C0h]
  ULONG UsageValue; // [rsp+44h] [rbp-BCh] BYREF
  CHAR *v36; // [rsp+48h] [rbp-B8h]
  struct _HIDP_PREPARSED_DATA *v37; // [rsp+50h] [rbp-B0h]
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  const char *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  int *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  int *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  int *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  int *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  int *v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR v64; // [rsp+100h] [rbp+0h] BYREF
  const char *v65; // [rsp+120h] [rbp+20h]
  int v66; // [rsp+128h] [rbp+28h]
  int v67; // [rsp+12Ch] [rbp+2Ch]
  USHORT UsageList[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v69; // [rsp+138h] [rbp+38h]

  v34 = ReportLength;
  v36 = Report;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  v6 = 0;
  v37 = PreparsedData;
  v7 = 0;
  UsageLength = 5;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v69 = 0;
  v44 = 0LL;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)v6;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    UsageValue = 0;
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
                           (PLONG)&UsageValue,
                           PreparsedData,
                           Report,
                           ReportLength);
      v15 = UsageValue;
      v6 = ScaledUsageValue;
    }
    else if ( v13 == 1 )
    {
      v14 = HidP_GetUsageValue(
              HidP_Input,
              *((_WORD *)v12 + 12),
              *((_WORD *)v12 + 15),
              *((_WORD *)v11 + 40),
              &UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      v15 = UsageValue;
      v6 = v14;
      if ( (signed int)UsageValue < *((_DWORD *)v11 + 16) || (signed int)UsageValue > *((_DWORD *)v11 + 17) )
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
                 PreparsedData,
                 Report,
                 ReportLength);
      v17 = 0LL;
      v6 = Usages;
      if ( UsageLength )
      {
        while ( UsageList[v17] != *((_WORD *)v12 + 40) )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= UsageLength )
            goto LABEL_13;
        }
        v15 = 1;
        UsageValue = 1;
      }
      else
      {
LABEL_13:
        v15 = UsageValue;
      }
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2146369535 && dword_1C030C400 > 2u )
      {
        v48 = 0;
        v51 = 0;
        v54 = 0;
        v57 = 0;
        v60 = 0;
        v46 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v47 = 73;
        v49 = &v39;
        v40 = *((_DWORD *)v11 + 4);
        v52 = &v40;
        v41 = v34;
        v55 = &v41;
        v42 = *((unsigned __int16 *)a1 + 40);
        v58 = &v42;
        v39 = v6;
        v50 = 4;
        v53 = 4;
        v56 = 4;
        v59 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6DE7, 0LL, 0LL, 7u, &pData);
      }
      v6 = 0;
      goto LABEL_52;
    }
    switch ( *((_DWORD *)v11 + 4) )
    {
      case 1:
        if ( *((_WORD *)v11 + 12) == 1 )
        {
          v29 = *((_WORD *)v11 + 40);
          if ( v29 == 48 )
          {
            LODWORD(v44) = v15;
LABEL_50:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
            goto LABEL_51;
          }
          if ( v29 == 49 )
          {
            HIDWORD(v44) = v15;
            goto LABEL_50;
          }
        }
LABEL_51:
        v7 = 1;
        goto LABEL_52;
      case 3:
        if ( v15 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v15);
            v22 = *((_DWORD *)v11 + 26);
            v23 = v22 + ScaledComponentValue;
            v24 = *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) = v23;
            v25 = v23 / v24;
            v26 = v24 * (v23 / v24);
            *((_DWORD *)a4 + 6) = v26;
            v27 = *((_DWORD *)v11 + 26);
            if ( (v27 ^ v22) < 0 )
            {
              v28 = *((_DWORD *)v12 + 27);
              if ( v27 <= 0 )
                *((_DWORD *)a4 + 6) = v26 - v28;
              else
                *((_DWORD *)a4 + 6) = v28 + v26;
            }
            *((_DWORD *)a4 + 6) = v25 * *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) -= v25 * *((_DWORD *)v11 + 27);
          }
          else if ( dword_1C030C400 > 2u )
          {
            v48 = 0;
            v51 = 0;
            v54 = 0;
            v57 = 0;
            v39 = 0;
            v60 = 0;
            v63 = 0;
            v46 = "InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v49 = &v42;
            v52 = &v41;
            v40 = *((_DWORD *)v11 + 26);
            v55 = &v40;
            v58 = &v39;
            v43 = *((_DWORD *)v11 + 27);
            v61 = &v43;
            v47 = 78;
            v42 = v6;
            v50 = 4;
            v41 = 3;
            v53 = 4;
            v56 = 4;
            v59 = 4;
            v62 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6D6B, 0LL, 0LL, 8u, &pData);
          }
        }
        goto LABEL_52;
      case 5:
      case 7:
        if ( v15 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_52;
    }
    if ( *((_DWORD *)v11 + 4) == 8 && v15 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
      v19 = InteractiveControlParser::GetScaledComponentValue(v11, v15);
      UsageValue = v19;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v19;
      }
      else
      {
        v20 = *((_WORD *)v11 + 40);
        if ( v20 == 72 )
        {
          *((_DWORD *)a1 + 55) = v19;
          goto LABEL_52;
        }
        if ( v20 != 73 )
          goto LABEL_52;
      }
      *((_DWORD *)a1 + 56) = v19;
    }
LABEL_52:
    PreparsedData = v37;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v36;
    ReportLength = v34;
  }
  while ( v9 != v10 );
  if ( v7 )
  {
    if ( !*((_QWORD *)a1 + 30) )
    {
      v30 = *((_DWORD *)a1 + 62);
      v31 = 0;
      if ( v30 == 100 )
      {
        if ( dword_1C030C400 > 3u )
        {
          v67 = 0;
          v65 = "No mapped digitizer found for positional data. Attempting to rematch...";
          v66 = 72;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6D3B, 0LL, 0LL, 3u, &v64);
        }
        v31 = (int)InteractiveControlParser::FindDigitizerForDevice(a1) >= 0;
        *((_DWORD *)a1 + 62) = 0;
        v30 = 0;
      }
      if ( !v31 )
      {
        *((_DWORD *)a4 + 5) &= ~2u;
        v30 = *((_DWORD *)a1 + 62);
        v7 = 0;
      }
      *((_DWORD *)a1 + 62) = v30 + 1;
    }
    if ( v7 )
    {
      v32 = *((_QWORD *)a1 + 30);
      if ( v32 )
        RIMTransformCoordinatesFromDigitizer(v32, &v44, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)v6;
}
