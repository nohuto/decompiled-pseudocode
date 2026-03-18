/*
 * XREFs of SmpProcessQueryStoreStats @ 0x140323F7C
 * Callers:
 *     SmQueryStoreCommitUsage @ 0x140323EE0 (SmQueryStoreCommitUsage.c)
 *     SmProcessQueryStoreStats @ 0x1408E8484 (SmProcessQueryStoreStats.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140137760 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(PVOID a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  PVOID v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == qword_14058C158 )
  {
    v3 = dword_14058C1B0;
  }
  else
  {
    v5 = a1;
    v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14058C188, (__int64 *)&v5, 0, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *(unsigned __int16 *)(v1 + 16);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3 & 0x3FF);
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v4);
}
