/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x1405A70DC
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1405A6D78 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A705C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1405B1ED8 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpDoReconcileNextHive @ 0x1405B1F90 (CmpDoReconcileNextHive.c)
 *     CmpAdjustRequestedFileSize @ 0x1406B9D18 (CmpAdjustRequestedFileSize.c)
 *     HvSwapLogFiles @ 0x1406CA8DC (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406D0A74 (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // r9
  int v3; // ecx
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( (a1[1038] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[68];
  v2 = a1[46];
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 >= v2 )
    LODWORD(v4) = v2;
  result = (unsigned int)v4;
  if ( (unsigned int)CmpLogFileSizeCap >= 0x80000 && CmpLogFileSizeCap < (unsigned int)v4 )
    result = (unsigned int)CmpLogFileSizeCap;
  if ( (unsigned int)result < 0x8000 )
    return 0x8000LL;
  return result;
}
