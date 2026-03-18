/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0250300
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C02505C4 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C0250924 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0239D70 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0245DB8 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C0251268 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 */

__int64 __fastcall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v9; // rsi
  struct _HIDP_PREPARSED_DATA *v10; // r12
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // ebx
  const CHAR *v14; // rdx
  char v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  CHAR v19[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+D0h] [rbp-30h] BYREF
  int *v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+F8h] [rbp-8h]
  const char *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  char *v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  __int64 *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  CHAR *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    v9 = *(_QWORD *)(v4 + 552);
  else
    v9 = 0LL;
  v10 = *(struct _HIDP_PREPARSED_DATA **)(v9 + 16);
  memset(v19, 0, 0x48uLL);
  v11 = Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v11 = InkDeviceParser::PopulatePayloadReport(
            v10,
            *(const struct UsageValueInfo **)(a1 + 152),
            v19,
            v12,
            *(CHAR **)(a1 + 160),
            *(unsigned __int16 *)(v9 + 46));
    v13 = v11;
    if ( v11 >= 0 )
    {
      v11 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
              (Rim::RimBackedDeviceBase *)a1,
              0xB0195u,
              *(_QWORD *)(a1 + 160),
              *(unsigned __int16 *)(v9 + 46),
              0LL,
              0,
              0LL);
      v13 = v11;
      if ( v11 >= 0 )
      {
        if ( dword_1C031F298 > 4u )
        {
          v14 = *(const CHAR **)(a1 + 80);
          v24 = &v17;
          v17 = 0;
          v26 = "Sent super-wet ink payload";
          v25 = 4LL;
          v27 = 27LL;
          TlgCreateSz(&pDesc, v14);
          v30 = 8LL;
          v29 = &v18;
          v18 = a1 + 32;
          v31 = &v16;
          v33 = &v36;
          v35 = v19;
          v16 = a2;
          v32 = 1LL;
          v34 = 2LL;
          v36 = 72LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8C40, 0LL, 0LL, 9u, &v23);
        }
      }
      else if ( dword_1C031F298 > 2u )
      {
LABEL_12:
        v17 = v11;
        v21 = &v17;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
      }
    }
    else if ( dword_1C031F298 > 2u )
    {
      goto LABEL_12;
    }
  }
  else if ( dword_1C031F298 > 2u )
  {
    goto LABEL_12;
  }
  return v13;
}
