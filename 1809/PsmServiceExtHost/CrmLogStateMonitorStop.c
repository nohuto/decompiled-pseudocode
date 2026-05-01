/*
 * XREFs of CrmLogStateMonitorStop @ 0x1800706C8
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(int *a1)
{
  unsigned __int16 v1; // ax
  int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rbx
  int v5; // r9d
  __int64 v6; // r10
  unsigned __int16 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  _DWORD *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  _DWORD v25[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  _DWORD *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _DWORD v31[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+100h] [rbp+0h] BYREF
  UUID *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  _DWORD *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  __int64 v41; // [rsp+150h] [rbp+50h]
  _DWORD v42[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  _DWORD *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  __int64 v47; // [rsp+180h] [rbp+80h]
  _DWORD v48[2]; // [rsp+188h] [rbp+88h] BYREF
  __int64 *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]

  v1 = CrmStateMonitorStateSizeGet(*a1);
  v4 = MEMORY[0x7FFE0008];
  if ( v2 <= 2 )
  {
    if ( dword_18009B128 > 5u )
    {
      v9 = *(_QWORD *)(v3 + 40);
      v15 = *(_QWORD *)(v3 + 48);
      v35 = &Uuid;
      v37 = &v12;
      v39 = v42;
      v42[0] = v1;
      v48[0] = v1;
      v12 = v2;
      v49 = &v16;
      v16 = MEMORY[0x7FFE0008];
      v36 = 16LL;
      v38 = 4LL;
      v40 = 2LL;
      v41 = v9;
      v42[1] = 0;
      v43 = &v15;
      v44 = 8LL;
      v45 = v48;
      v46 = 2LL;
      v47 = v9;
      v48[1] = 0;
      v50 = 8LL;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D55A, 0LL, 0LL, 0xAu, &v34);
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      v13 = *(_QWORD *)(v6 + 48);
      v18 = &Uuid;
      v20 = &v11;
      v22 = v25;
      v25[0] = v7;
      v31[0] = v7;
      v11 = v5;
      v32 = &v14;
      v14 = v4;
      v19 = 16LL;
      v21 = 4LL;
      v23 = 2LL;
      v24 = v8;
      v25[1] = 0;
      v26 = &v13;
      v27 = 8LL;
      v28 = v31;
      v29 = 2LL;
      v30 = v8;
      v31[1] = 0;
      v33 = 8LL;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D432, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return v1;
}
