/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180061D1C
 * Callers:
 *     RmpTracingControlCallback @ 0x18003DC40 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  int v1; // edx
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // r11d
  const WCHAR *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  int v8; // r11d
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  char *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+ACh] [rbp-54h]
  int *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  int *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+DCh] [rbp-24h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]

  if ( dword_18009B0B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
    {
      v3 = *(_QWORD *)(v2 + 1872);
      v4 = v1 - 1;
      v5 = *(const WCHAR **)(v2 + 32);
      v17 = 0;
      v20 = 0;
      v12 = v3;
      v15 = &v12;
      v9 = *(_BYTE *)(v2 + 1400);
      v18 = &v9;
      v16 = v4;
      v19 = 1;
      TlgCreateWsz(&pDesc, v5);
      v7 = *(_QWORD *)(v6 + 144);
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v22 = &v13;
      v10 = *(_DWORD *)(v6 + 1408);
      v25 = &v10;
      v11 = *(_DWORD *)(v6 + 1456);
      v28 = &v11;
      v31 = v6 + 1496;
      v34 = v6 + 224;
      v37 = v6 + 248;
      v13 = v7;
      v23 = v8;
      v26 = 4;
      v29 = 4;
      v32 = 2;
      v35 = v8;
      v38 = v8;
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087397, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
