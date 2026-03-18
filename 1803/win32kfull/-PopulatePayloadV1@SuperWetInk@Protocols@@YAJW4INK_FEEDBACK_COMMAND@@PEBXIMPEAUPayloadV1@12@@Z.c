/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C020F74C
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C020E890 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@12@@Z @ 0x1C020F71C (-PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@1.c)
 */

__int64 __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, __int64 a2, int a3, float a4, __int64 a5)
{
  unsigned int v8; // esi
  const GUID *v9; // r8
  const GUID *v10; // r9
  EVENT_DATA_DESCRIPTOR v11; // xmm1
  EVENT_DATA_DESCRIPTOR v12; // xmm0
  EVENT_DATA_DESCRIPTOR v13; // xmm1
  int v14; // r14d
  int v15; // eax
  int v16; // ecx
  char v17; // al
  _DWORD v19[4]; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData[5]; // [rsp+48h] [rbp-31h] BYREF

  v8 = 0;
  memset(pData, 0, 0x48uLL);
  v11 = pData[1];
  *(EVENT_DATA_DESCRIPTOR *)a5 = pData[0];
  v12 = pData[2];
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 16) = v11;
  v13 = pData[3];
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 32) = v12;
  v12.Ptr = pData[4].Ptr;
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 48) = v13;
  *(_QWORD *)(a5 + 64) = v12.Ptr;
  *(_BYTE *)a5 = 1;
  v14 = a1 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( a3 == 4 )
      {
        *(_BYTE *)(a5 + 1) = 2;
      }
      else
      {
        v8 = -1073741811;
        if ( (unsigned int)pRelatedActivityId > 2 )
          goto LABEL_18;
      }
    }
    else
    {
      v8 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
        goto LABEL_18;
    }
    return v8;
  }
  if ( a3 != 64 )
  {
    v8 = -1073741811;
    if ( (unsigned int)pRelatedActivityId > 2 )
      goto LABEL_18;
    return v8;
  }
  *(_BYTE *)(a5 + 1) = 1;
  v15 = Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(*(_DWORD *)(a2 + 4), v19);
  v8 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v19[0] = v15;
      pData[2].Ptr = (ULONGLONG)v19;
      *(_QWORD *)&pData[2].Size = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v9, v10, 3u, pData);
    }
    return v8;
  }
  *(_BYTE *)(a5 + 12) = v19[0];
  *(_BYTE *)(a5 + 13) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a5 + 14) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a5 + 15) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(a5 + 16) = *(_BYTE *)(a2 + 11);
  *(float *)(a5 + 17) = a4 * *(float *)(a2 + 12);
  v16 = *(_DWORD *)(a2 + 16);
  if ( !v16 )
  {
    v17 = 0;
    goto LABEL_21;
  }
  if ( v16 == 1 )
  {
    v17 = 1;
LABEL_21:
    *(_BYTE *)(a5 + 21) = v17;
    *(_DWORD *)(a5 + 22) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a5 + 26) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a5 + 30) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a5 + 34) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a5 + 38) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a5 + 42) = *(_DWORD *)(a2 + 40);
    *(_BYTE *)(a5 + 62) = *(_DWORD *)(a2 + 60) & 1;
    *(_BYTE *)(a5 + 63) = (*(_DWORD *)(a2 + 60) & 4u) >> 2;
    return 0;
  }
  v8 = -1073741811;
  if ( (unsigned int)pRelatedActivityId > 2 )
  {
LABEL_18:
    v19[0] = -1073741811;
    pData[2].Ptr = (ULONGLONG)v19;
    *(_QWORD *)&pData[2].Size = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v9, v10, 3u, pData);
  }
  return v8;
}
