/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C010E870
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C010E840 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C010F220 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edx
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  char *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  const char *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  char *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  char *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = *((unsigned int *)a1 + 70);
      v15 = &v13;
      v17 = (char *)a1 + 928;
      v19 = "ATTRI_DEPRECATED";
      v21 = (char *)a1 + 948;
      v23 = (char *)a1 + 968;
      v5 = *((_DWORD *)a1 + 238);
      v25 = &v5;
      v6 = *((_DWORD *)a1 + 239);
      v27 = &v6;
      v7 = *((_DWORD *)a1 + 240);
      v29 = &v7;
      v8 = *((_DWORD *)a1 + 241);
      v31 = &v8;
      v13 = 0x1000000LL;
      v16 = 8LL;
      v18 = 4LL;
      v20 = 17LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(v2);
      v4 = *((_DWORD *)a1 + 245);
      v9 = v3;
      v33 = &v9;
      v35 = (char *)a1 + 976;
      v37 = (char *)a1 + 972;
      v34 = 4LL;
      v36 = 4LL;
      v10 = -(v4 & 1);
      v39 = &v10;
      v38 = 4LL;
      v40 = 4LL;
      v11 = -__CFSHR__(v4, 2);
      v41 = &v11;
      v43 = &v12;
      v42 = 4LL;
      v12 = -__CFSHR__(v4, 3);
      v44 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6889, 0LL, 0LL, 0x11u, &pData);
    }
  }
}
