/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0237DC0
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0238074 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C02383D4 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0221C50 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C022DD40 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C0238D18 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 */

__int64 __fastcall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  char v5; // r14
  __int64 v7; // rsi
  struct _HIDP_PREPARSED_DATA *v8; // r15
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  const CHAR *v12; // rdx
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  CHAR v17[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v21; // [rsp+D0h] [rbp-30h] BYREF
  int *v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+F8h] [rbp-8h]
  const char *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  char *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  __int64 *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  CHAR *v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  if ( v4 )
    v7 = *(_QWORD *)(v4 + 552);
  else
    v7 = 0LL;
  v8 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 16);
  v9 = Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v9 = InkDeviceParser::PopulatePayloadReport(
           v8,
           *(const struct UsageValueInfo **)(a1 + 152),
           v17,
           v10,
           *(CHAR **)(a1 + 160),
           *(unsigned __int16 *)(v7 + 46));
    v11 = v9;
    if ( v9 >= 0 )
    {
      v9 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
             (Rim::RimBackedDeviceBase *)a1,
             0xB0195u,
             *(_QWORD *)(a1 + 160),
             *(unsigned __int16 *)(v7 + 46),
             0LL,
             0,
             0LL);
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( dword_1C030C390 > 4u )
        {
          v12 = *(const CHAR **)(a1 + 80);
          v22 = &v15;
          v15 = 0;
          v24 = "Sent super-wet ink payload";
          v23 = 4LL;
          v25 = 27LL;
          TlgCreateSz(&pDesc, v12);
          v28 = 8LL;
          v27 = &v16;
          v16 = a1 + 32;
          v29 = &v14;
          v31 = &v34;
          v33 = v17;
          v14 = v5;
          v30 = 1LL;
          v32 = 2LL;
          v34 = 72LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D69A5, 0LL, 0LL, 9u, &v21);
        }
      }
      else if ( dword_1C030C390 > 2u )
      {
LABEL_12:
        v15 = v9;
        v19 = &v15;
        v20 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
      }
    }
    else if ( dword_1C030C390 > 2u )
    {
      goto LABEL_12;
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    goto LABEL_12;
  }
  return v11;
}
