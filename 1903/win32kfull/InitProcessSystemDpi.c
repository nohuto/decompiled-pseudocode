/*
 * XREFs of InitProcessSystemDpi @ 0x1C00E3F80
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 v2; // r14
  __int64 ThreadTeb; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v4 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v5 = *(unsigned int *)(v4 + 48);
    ProbeForRead((volatile void *)(unsigned int)v5, 0x480uLL, 4u);
    v2 = *(_QWORD *)(v5 + 480);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1016LL) + 720LL);
  }
  v6 = v2 & 0x40000000000000LL;
  v7 = v2 & 0x20000000000000LL;
  v8 = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_PerProcessSystemDpi__private_propertyCache,
    5101203LL,
    &unk_1C02DB92C,
    1LL,
    3);
  v13 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v13, &v14);
  if ( !v6 )
  {
    if ( v7 )
      goto LABEL_8;
    if ( !v14 )
    {
      if ( v13 )
        goto LABEL_8;
      v8 = 0;
    }
    if ( v8 )
    {
LABEL_8:
      v11 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v10, v9) + 96) + 40LL) + 68LL);
      *(_WORD *)(a1 + 284) = v11;
      return GetDPIServerInfoForDpi(v11);
    }
  }
  result = *(unsigned __int16 *)(gpsi + 6998LL);
  *(_WORD *)(a1 + 284) = result;
  return result;
}
