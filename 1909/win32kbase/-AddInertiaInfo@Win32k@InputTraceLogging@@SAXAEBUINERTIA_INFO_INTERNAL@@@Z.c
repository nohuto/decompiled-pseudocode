/*
 * XREFs of ?AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C017B7D4
 * Callers:
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C017B5D8 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z @ 0x1C017BC18 (-InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::AddInertiaInfo(const struct INERTIA_INFO_INTERNAL *a1)
{
  __int64 v1; // r9
  const CHAR *v2; // rax
  __int64 v3; // r9
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  int v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  int *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  int *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  int *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
    {
      v2 = (const CHAR *)InputTraceLogging::InertiaSourceToString(*(unsigned int *)(v1 + 24));
      TlgCreateSz(&pDesc, v2);
      v4 = *(_DWORD *)(v3 + 184);
      v5 = *(_QWORD *)(v3 + 120);
      v14 = &v11;
      v11 = v5;
      v15 = (unsigned int)(v6 + 4);
      v7 = -__CFSHR__(v4, 2);
      v16 = &v7;
      v17 = v6;
      v19 = v6;
      v8 = -__CFSHR__(v4, 5);
      v18 = &v8;
      v21 = v6;
      v23 = v6;
      v9 = -__CFSHR__(v4, 3);
      v20 = &v9;
      v22 = &v10;
      v10 = -__CFSHR__(v4, 4);
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E54D2, 0LL, 0LL, v6 + 4, &pData);
    }
  }
}
