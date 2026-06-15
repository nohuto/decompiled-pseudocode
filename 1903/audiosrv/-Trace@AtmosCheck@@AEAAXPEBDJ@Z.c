/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180051388
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180046754 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180050EF0 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x1800510A0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800510D8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006A0F0 (_lambda_07ea8ee8549f00f16399909de546051c_--operator().c)
 *     _lambda_54bc6dde1f28aafe8f150296654e3c03_::operator() @ 0x18006A310 (_lambda_54bc6dde1f28aafe8f150296654e3c03_--operator().c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::operator() @ 0x18006A5A0 (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--operator().c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18013F2EC (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1801406E8 (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  if ( a3 )
  {
    if ( (unsigned int)dword_1801B64F0 > 2 )
    {
      TlgCreateSz(&pDesc, a2);
      v11 = 0;
      v9 = &v12;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D09B, v5, v6, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801B64F0 > 5 )
  {
    TlgCreateSz(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D0CB, v3, v4, 3u, &pData);
  }
}
