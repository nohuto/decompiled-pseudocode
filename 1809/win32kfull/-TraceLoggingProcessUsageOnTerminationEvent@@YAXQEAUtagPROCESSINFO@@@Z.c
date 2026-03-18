/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C0117830
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C0117800 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0117C10 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edx
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  int v7; // [rsp+40h] [rbp-C8h] BYREF
  int v8; // [rsp+44h] [rbp-C4h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  char *v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  const char *v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  char *v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  char *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  int *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  int *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  int *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  int *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  char *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  char *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  int *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  int *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  int *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = *((unsigned int *)a1 + 70);
      v14 = (char *)a1 + 936;
      v16 = "ATTRI_DEPRECATED";
      v18 = (char *)a1 + 956;
      v20 = (char *)a1 + 976;
      v5 = *((_DWORD *)a1 + 240);
      v22 = &v5;
      v6 = *((_DWORD *)a1 + 241);
      v24 = &v6;
      v7 = *((_DWORD *)a1 + 242);
      v26 = &v7;
      v8 = *((_DWORD *)a1 + 243);
      v28 = &v8;
      v15 = 4LL;
      v17 = 17LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(v2);
      v4 = *((_DWORD *)a1 + 247);
      v9 = v3;
      v30 = &v9;
      v32 = (char *)a1 + 984;
      v34 = (char *)a1 + 980;
      v31 = 4LL;
      v33 = 4LL;
      v10 = -(v4 & 1);
      v36 = &v10;
      v35 = 4LL;
      v37 = 4LL;
      v11 = -__CFSHR__(v4, 2);
      v38 = &v11;
      v40 = &v12;
      v39 = 4LL;
      v12 = -__CFSHR__(v4, 3);
      v41 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D43C2, 0LL, 0LL, 0x10u, &pData);
    }
  }
}
