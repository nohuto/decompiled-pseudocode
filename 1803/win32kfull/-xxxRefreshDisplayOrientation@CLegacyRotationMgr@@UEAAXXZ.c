/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BDD50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BDB94 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C00BDE48 (-xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C00BDF1C (-xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v7 = 0;
    v5 = &dword_1C03227AC;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E3031, v2, v3, 3u, &pData);
  }
  CLegacyRotationMgr::xxxSetAutoRotationConvertible(this, (*(_DWORD *)(gpsi + 2236LL) >> 3) & 1);
  CLegacyRotationMgr::xxxSetAutoRotationDocked(this, (*(_DWORD *)(gpsi + 2236LL) >> 4) & 1);
  if ( dword_1C03227B4 || dword_1C03227B0 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
