/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18006ECFC
 * Callers:
 *     RmpTracingControlCallback @ 0x180047410 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r9
  char v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  char *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  int *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]

  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v2 = *(_QWORD *)(v1 + 1320);
      v7 = *(_QWORD *)(v1 + 1752);
      v11 = 8LL;
      v10 = &v7;
      v4 = *(_BYTE *)(v1 + 1280);
      v12 = &v4;
      v13 = 1LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(v2 + 88));
      v8 = *(_QWORD *)(*(_QWORD *)(v3 + 1320) + 32LL);
      v15 = &v8;
      v5 = *(_DWORD *)(v3 + 1288);
      v17 = &v5;
      v6 = *(_DWORD *)(v3 + 1336);
      v19 = &v6;
      v21 = v3 + 1376;
      v23 = v3 + 104;
      v25 = v3 + 128;
      v16 = 8LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 2LL;
      v24 = 8LL;
      v26 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095130, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
