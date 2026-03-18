/*
 * XREFs of ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@_N@Z @ 0x1C0034310
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::GetMessageW(const struct tagMSG *a1)
{
  int v1; // r9d
  __int16 v2; // bx
  int v3; // r9d
  __int64 *v4; // r10
  unsigned __int8 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // r9d
  __int64 *v10; // r10
  unsigned __int8 v11; // r11
  __int64 v12; // rdx
  int v13; // r9d
  __int64 *v14; // r10
  unsigned __int8 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]

  v1 = *((_DWORD *)a1 + 2);
  if ( (unsigned int)(v1 - 577) > 3 && ((unsigned int)(v1 - 581) > 0x12 || v1 == 589) )
  {
    if ( ((unsigned int)(v1 - 512) <= 0xE || (unsigned int)(v1 - 160) <= 0xD) && dword_1C030D340 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
      {
        v12 = *v10;
        v28 = &v18;
        v30 = &v19;
        v32 = &v23;
        v22 = v10[2];
        v34 = &v22;
        v36 = v10 + 3;
        v20 = *((_DWORD *)v10 + 8);
        v38 = &v20;
        v21 = v11;
        v40 = &v21;
        v42 = &v24;
        v18 = v9;
        v29 = 4LL;
        v19 = v9;
        v31 = 4LL;
        v23 = v12;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 4LL;
        v41 = 4LL;
        v24 = v12;
        v43 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5267, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  else
  {
    v2 = *((_WORD *)a1 + 8);
    if ( v2 == 1 )
    {
      if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
      {
        v6 = v4[2];
        v7 = *v4;
        v28 = &v21;
        v30 = &v20;
        v32 = &v24;
        v34 = &v23;
        v36 = v4 + 3;
        v19 = *((_DWORD *)v4 + 8);
        v38 = &v19;
        v23 = v6;
        v18 = WORD1(v6);
        v40 = &v18;
        LODWORD(v22) = v5;
        v42 = &v22;
        v44 = &v25;
        v21 = v3;
        v29 = 4LL;
        v20 = v3;
        v31 = 4LL;
        v24 = v7;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v25 = v7;
        v45 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D511E, 0LL, 0LL, 0xBu, &pData);
      }
    }
    else if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v16 = v14[2];
      v17 = *v14;
      v28 = &v18;
      v30 = (int *)&v22;
      v32 = (__int64 *)&v21;
      v34 = &v25;
      v36 = &v24;
      v38 = (int *)(v14 + 3);
      v20 = *((_DWORD *)v14 + 8);
      v40 = &v20;
      v24 = v16;
      v19 = WORD1(v16);
      v42 = (__int64 *)&v19;
      LODWORD(v23) = v15;
      v44 = &v23;
      v46 = &v26;
      LOWORD(v18) = v2;
      v29 = 2LL;
      LODWORD(v22) = v13;
      v31 = 4LL;
      v21 = v13;
      v33 = 4LL;
      v25 = v17;
      v35 = 8LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v26 = v17;
      v47 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D51BB, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
