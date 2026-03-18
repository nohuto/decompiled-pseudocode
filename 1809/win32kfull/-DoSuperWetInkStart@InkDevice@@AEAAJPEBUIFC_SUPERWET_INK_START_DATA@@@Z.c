/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0238074
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0239040 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0237DC0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C023851C (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  unsigned int v3; // edx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  const CHAR *v8; // rdx
  int v9; // ecx
  __int64 v10; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+34h] [rbp-CCh] BYREF
  char v14; // [rsp+35h] [rbp-CBh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  char *v18; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  float *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  const char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp-70h] BYREF
  float *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  const char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  char **v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  const struct IFC_SUPERWET_INK_START_DATA *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  char *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  char *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  char *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  char *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  char *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  char *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  char *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  char *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  char *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  char *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  char *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  char *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  char *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  char *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  char *v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  char *v66; // [rsp+200h] [rbp+100h]
  __int64 v67; // [rsp+208h] [rbp+108h]
  int *v68; // [rsp+210h] [rbp+110h]
  __int64 v69; // [rsp+218h] [rbp+118h]
  int *v70; // [rsp+220h] [rbp+120h]
  __int64 v71; // [rsp+228h] [rbp+128h]
  int *v72; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]

  v3 = *(_DWORD *)a2;
  v12 = 0;
  v5 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, v3, (float *)&v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    v6 = v7;
    if ( v7 >= 0 )
    {
      if ( dword_1C030C390 > 4u )
      {
        v8 = (const CHAR *)*((_QWORD *)this + 10);
        v25 = (float *)&v12;
        v12 = 0;
        v27 = "Started super-wet ink";
        v26 = 4LL;
        v28 = 22LL;
        TlgCreateSz(&pDesc, v8);
        v31 = 8LL;
        v30 = &v18;
        v13 = *((_BYTE *)a2 + 4);
        v34 = &v13;
        v36 = (char *)a2 + 8;
        v38 = (char *)a2 + 9;
        v40 = (char *)a2 + 10;
        v42 = (char *)a2 + 11;
        v44 = (char *)a2 + 12;
        v14 = *((_BYTE *)a2 + 16);
        v46 = &v14;
        v48 = (char *)a2 + 20;
        v50 = (char *)a2 + 24;
        v52 = (char *)a2 + 28;
        v54 = (char *)a2 + 32;
        v56 = (char *)a2 + 36;
        v58 = (char *)a2 + 40;
        v60 = (char *)a2 + 44;
        v62 = (char *)a2 + 48;
        v64 = (char *)a2 + 52;
        v66 = (char *)a2 + 56;
        v18 = (char *)this + 32;
        v9 = *((_DWORD *)a2 + 15);
        v32 = a2;
        v33 = v10;
        v15 = -(v9 & 1);
        v68 = &v15;
        v35 = 1LL;
        v37 = 1LL;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 1LL;
        v45 = v10;
        v47 = 1LL;
        v49 = v10;
        v51 = v10;
        v53 = v10;
        v55 = v10;
        v57 = v10;
        v59 = v10;
        v61 = v10;
        v63 = v10;
        v65 = v10;
        v67 = v10;
        v69 = v10;
        v71 = v10;
        v73 = v10;
        v16 = -__CFSHR__(v9, 2);
        v70 = &v16;
        v72 = &v17;
        v17 = -__CFSHR__(v9, 3);
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6873, 0LL, 0LL, 0x1Bu, &v24);
      }
    }
    else if ( dword_1C030C390 > 2u )
    {
      v12 = v7;
      v20 = (float *)&v12;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v12 = v5;
    v21 = 4LL;
    v20 = (float *)&v12;
    v22 = "GetDisplayScalingInfoAndCheckSupported failed";
    v23 = 46LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  return v6;
}
