/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00BD030
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C00BD000 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00BFD6C (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+44h] [rbp-C4h] BYREF
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  char *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  const char *v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  char *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  char *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  int *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  int *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  char *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = *((unsigned int *)a1 + 70);
      v16 = (char *)a1 + 928;
      v18 = "ATTRI_DEPRECATED";
      v20 = (char *)a1 + 948;
      v22 = (char *)a1 + 968;
      v7 = *((_DWORD *)a1 + 238);
      v24 = &v7;
      v8 = *((_DWORD *)a1 + 239);
      v26 = &v8;
      v9 = *((_DWORD *)a1 + 240);
      v28 = &v9;
      v10 = *((_DWORD *)a1 + 241);
      v30 = &v10;
      v17 = 4LL;
      v19 = 17LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(v2);
      v4 = *((_DWORD *)a1 + 245);
      v11 = v3;
      v32 = &v11;
      v34 = (char *)a1 + 976;
      v36 = (char *)a1 + 972;
      v33 = 4LL;
      v35 = 4LL;
      v12 = -(v4 & 1);
      v38 = &v12;
      v37 = 4LL;
      v39 = 4LL;
      v13 = -__CFSHR__(v4, 2);
      v40 = &v13;
      v42 = &v14;
      v41 = 4LL;
      v14 = -__CFSHR__(v4, 3);
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2CC8, v5, v6, 0x10u, &pData);
    }
  }
}
