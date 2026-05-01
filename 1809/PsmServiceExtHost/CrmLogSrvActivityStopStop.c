/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x180033860
 * Callers:
 *     CrmSrvActivityStop @ 0x180033718 (CrmSrvActivityStop.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall CrmLogSrvActivityStopStop(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  int v13; // r8d
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  int *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  int *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  int *v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  int *v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ch] [rbp+1Ch]

  if ( dword_18009B128 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL) )
    {
      v12 = *(_DWORD *)(v10 + 24);
      v25 = 0;
      v28 = 0;
      v14 = v12;
      v21 = a5;
      v16 = a6;
      v17 = a7;
      v18 = a8;
      v23 = &Uuid;
      v26 = &v14;
      v15 = a2;
      v19 = v11;
      v20 = v9;
      v24 = 16;
      v27 = 4;
      TlgCreateSid(&pDesc, (const SID *)(v10 + 72));
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v33 = &v19;
      v36 = &v20;
      v39 = &v21;
      v42 = &v16;
      v45 = &v17;
      v30 = &v15;
      v48 = &v18;
      v31 = v13;
      v34 = v13 + 4;
      v37 = v13 + 4;
      v40 = v13 + 4;
      v43 = v13;
      v46 = v13;
      v49 = v13;
      TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C581, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
