/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14031FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x1400EE398 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14031FF8C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  struct _EX_RUNDOWN_REF *v8; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  _QWORD SystemInformation[7]; // [rsp+28h] [rbp-60h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL) >= 0 )
  {
    v3 = 128000LL;
    v4 = 0;
    if ( SystemInformation[0] <= 0x51400000uLL )
      v3 = 15360LL;
    v5 = 3 * (SystemInformation[0] / 0x14000uLL);
    if ( v5 >= v3 )
      v5 = v3;
    v9 = v5;
    do
    {
      v6 = SmKmStoreReferenceEx(a1 - 1800, v4, v2);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 6023) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v6, &v9);
        v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1 - 1800, *(_DWORD *)(v7 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v8 + 1);
      }
      ++v4;
    }
    while ( v4 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
}
