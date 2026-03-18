/*
 * XREFs of InitProcessSystemDpi @ 0x1C0104840
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 v3; // rbx
  __int64 ThreadTeb; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r12
  bool v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // r15
  BOOL v13; // eax
  __int16 v14; // ax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  bool v19; // [rsp+41h] [rbp-A7h] BYREF
  bool v20; // [rsp+42h] [rbp-A6h] BYREF
  int v21; // [rsp+44h] [rbp-A4h] BYREF
  INT v22; // [rsp+48h] [rbp-A0h] BYREF
  int v23; // [rsp+4Ch] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+50h] [rbp-98h]
  __int64 v25; // [rsp+58h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-78h] BYREF
  bool *v27; // [rsp+90h] [rbp-58h]
  int v28; // [rsp+98h] [rbp-50h]
  int v29; // [rsp+9Ch] [rbp-4Ch]
  bool *v30; // [rsp+A0h] [rbp-48h]
  int v31; // [rsp+A8h] [rbp-40h]
  int v32; // [rsp+ACh] [rbp-3Ch]
  INT *v33; // [rsp+B0h] [rbp-38h]
  int v34; // [rsp+B8h] [rbp-30h]
  int v35; // [rsp+BCh] [rbp-2Ch]

  v25 = a1;
  v24 = 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v5 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v6 = *(unsigned int *)(v5 + 48);
    ProbeForRead((volatile void *)(unsigned int)v6, 0x480uLL, 4u);
    v3 = *(_QWORD *)(v6 + 480);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1016LL) + 720LL);
  }
  v24 = v3;
  v7 = v3 & 0x40000000000000LL;
  v8 = (v3 & 0x40000000000000LL) != 0;
  v9 = v3 & 0x20000000000000LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_PerProcessSystemDpi__private_propertyCache,
    5101203,
    (unsigned int)&unk_1C02C8CCC,
    0);
  v21 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v21, &v23);
  v12 = v23 == 0;
  if ( v7 )
    goto LABEL_7;
  if ( v9 )
  {
    v13 = 1;
  }
  else
  {
    if ( v23 )
    {
LABEL_7:
      v13 = 0;
      goto LABEL_8;
    }
    v13 = v21 != 0;
  }
LABEL_8:
  if ( v13 )
  {
    v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v11, v10) + 96) + 40LL) + 64LL);
    *(_WORD *)(a1 + 284) = v15;
    LOBYTE(v14) = GetDPIServerInfoForDpi(v15, v16, v17);
  }
  else
  {
    v14 = *(_WORD *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = v14;
  }
  if ( v9 || v7 || v12 )
  {
    v22 = 100;
    v22 = EngMulDiv(100, *(unsigned __int16 *)(a1 + 284), 96);
    v19 = v8;
    LOBYTE(v14) = v9 != 0;
    v20 = v9 != 0;
    if ( hProvider > 5u )
    {
      LOBYTE(v14) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
      if ( (_BYTE)v14 )
      {
        v27 = &v19;
        v28 = 1;
        v29 = 0;
        v30 = &v20;
        v31 = 1;
        v32 = 0;
        v33 = &v22;
        v34 = 4;
        v35 = 0;
        LOBYTE(v14) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D48C3, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  return v14;
}
