/*
 * XREFs of InitProcessSystemDpi @ 0x1C005F700
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  bool v10; // r15
  BOOL v11; // eax
  __int16 v12; // ax
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v20; // [rsp+41h] [rbp-A7h] BYREF
  bool v21; // [rsp+42h] [rbp-A6h] BYREF
  int v22; // [rsp+44h] [rbp-A4h] BYREF
  INT v23; // [rsp+48h] [rbp-A0h] BYREF
  int v24; // [rsp+4Ch] [rbp-9Ch] BYREF
  __int64 v25; // [rsp+50h] [rbp-98h]
  __int64 v26; // [rsp+58h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-78h] BYREF
  bool *v28; // [rsp+90h] [rbp-58h]
  int v29; // [rsp+98h] [rbp-50h]
  int v30; // [rsp+9Ch] [rbp-4Ch]
  bool *v31; // [rsp+A0h] [rbp-48h]
  int v32; // [rsp+A8h] [rbp-40h]
  int v33; // [rsp+ACh] [rbp-3Ch]
  INT *v34; // [rsp+B0h] [rbp-38h]
  int v35; // [rsp+B8h] [rbp-30h]
  int v36; // [rsp+BCh] [rbp-2Ch]

  v26 = a1;
  v25 = 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v5 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v6 = *(unsigned int *)(v5 + 48);
    ProbeForRead((volatile void *)(unsigned int)v6, 0x470uLL, 4u);
    v3 = *(_QWORD *)(v6 + 480);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1016LL) + 720LL);
  }
  v25 = v3;
  v7 = v3 & 0x40000000000000LL;
  v8 = (v3 & 0x40000000000000LL) != 0;
  v9 = v3 & 0x20000000000000LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_PerProcessSystemDpi__private_propertyCache,
    5101203LL,
    &unk_1C02D6BEC,
    0LL);
  v22 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v22, &v24);
  v10 = v24 == 0;
  if ( v7 )
    goto LABEL_7;
  if ( v9 )
  {
    v11 = 1;
  }
  else
  {
    if ( v24 )
    {
LABEL_7:
      v11 = 0;
      goto LABEL_8;
    }
    v11 = v22 != 0;
  }
LABEL_8:
  if ( v11 )
  {
    v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
    *(_WORD *)(a1 + 284) = v15;
    LOBYTE(v12) = GetDPIServerInfoForDpi(v15, v16, v17, v18);
  }
  else
  {
    v12 = *(_WORD *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = v12;
  }
  if ( v9 || v7 || v10 )
  {
    v23 = 100;
    v23 = EngMulDiv(100, *(unsigned __int16 *)(a1 + 284), 96);
    v20 = v8;
    LOBYTE(v12) = v9 != 0;
    v21 = v9 != 0;
    if ( hProvider > 5u )
    {
      LOBYTE(v12) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
      if ( (_BYTE)v12 )
      {
        v28 = &v20;
        v29 = 1;
        v30 = 0;
        v31 = &v21;
        v32 = 1;
        v33 = 0;
        v34 = &v23;
        v35 = 4;
        v36 = 0;
        LOBYTE(v12) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E3163, v13, v14, 5u, &pData);
      }
    }
  }
  return v12;
}
