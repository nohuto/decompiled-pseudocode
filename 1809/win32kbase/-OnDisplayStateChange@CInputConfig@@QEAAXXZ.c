/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0041284 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this, struct CEResource *a2)
{
  CInputConfig *v2; // rbx
  CInputConfig *v3; // rcx
  CInputConfig *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = gpInputConfig;
  CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v4, a2);
  if ( *((_BYTE *)v2 + 1248) )
    CInputConfig::_CreateLegacyInputSpace(v2);
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)&v4);
  CInputConfig::_NotifyExternalComponents(v3);
}
