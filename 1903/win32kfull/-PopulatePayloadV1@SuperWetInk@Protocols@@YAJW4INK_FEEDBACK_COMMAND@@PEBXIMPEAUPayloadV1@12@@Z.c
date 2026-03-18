/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C02519A8
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0250A40 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@12@@Z @ 0x1C0251978 (-PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@1.c)
 */

__int64 __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, __int64 a2, int a3, float a4, __int64 a5)
{
  unsigned int v8; // esi
  EVENT_DATA_DESCRIPTOR v9; // xmm1
  EVENT_DATA_DESCRIPTOR v10; // xmm0
  EVENT_DATA_DESCRIPTOR v11; // xmm1
  int v12; // r14d
  int v13; // eax
  int v14; // ecx
  char v15; // al
  _DWORD v17[4]; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData[5]; // [rsp+48h] [rbp-31h] BYREF

  v8 = 0;
  memset(pData, 0, 0x48uLL);
  v9 = pData[1];
  *(EVENT_DATA_DESCRIPTOR *)a5 = pData[0];
  v10 = pData[2];
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 16) = v9;
  v11 = pData[3];
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 32) = v10;
  v10.Ptr = pData[4].Ptr;
  *(EVENT_DATA_DESCRIPTOR *)(a5 + 48) = v11;
  *(_QWORD *)(a5 + 64) = v10.Ptr;
  *(_BYTE *)a5 = 1;
  v12 = a1 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      if ( a3 == 4 )
      {
        *(_BYTE *)(a5 + 1) = 2;
      }
      else
      {
        v8 = -1073741811;
        if ( dword_1C0321298 > 2u )
          goto LABEL_18;
      }
    }
    else
    {
      v8 = -1073741811;
      if ( dword_1C0321298 > 2u )
        goto LABEL_18;
    }
    return v8;
  }
  if ( a3 != 64 )
  {
    v8 = -1073741811;
    if ( dword_1C0321298 > 2u )
      goto LABEL_18;
    return v8;
  }
  *(_BYTE *)(a5 + 1) = 1;
  v13 = Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(*(_DWORD *)(a2 + 4), v17);
  v8 = v13;
  if ( v13 < 0 )
  {
    if ( dword_1C0321298 > 2u )
    {
      v17[0] = v13;
      pData[2].Ptr = (ULONGLONG)v17;
      *(_QWORD *)&pData[2].Size = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, pData);
    }
    return v8;
  }
  *(_BYTE *)(a5 + 12) = v17[0];
  *(_BYTE *)(a5 + 13) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a5 + 14) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a5 + 15) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(a5 + 16) = *(_BYTE *)(a2 + 11);
  *(float *)(a5 + 17) = a4 * *(float *)(a2 + 12);
  v14 = *(_DWORD *)(a2 + 16);
  if ( !v14 )
  {
    v15 = 0;
    goto LABEL_21;
  }
  if ( v14 == 1 )
  {
    v15 = 1;
LABEL_21:
    *(_BYTE *)(a5 + 21) = v15;
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
  if ( dword_1C0321298 > 2u )
  {
LABEL_18:
    v17[0] = -1073741811;
    pData[2].Ptr = (ULONGLONG)v17;
    *(_QWORD *)&pData[2].Size = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, pData);
  }
  return v8;
}
