/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1406CF7D4
 * Callers:
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1405A60DC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A62AC (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8940 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned __int64 v8; // r10
  unsigned int v9; // edx

  HvGetEffectiveLogSizeCapForHive(a1);
  if ( a1[41] == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1);
    if ( *(_QWORD *)&a1[2 * (unsigned int)result + 450] <= v8 )
      return result;
    v9 = v7;
    return CmpDoFileSetSizeEx((__int64)a1, v9, 0LL, 0);
  }
  v2 = HvpLogTypeToLogArrayIndex(4);
  if ( *(_QWORD *)&a1[2 * v2 + 450] > v4 )
    CmpDoFileSetSizeEx((__int64)a1, v3, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v6 + 450] > (unsigned __int64)(unsigned int)result )
  {
    v9 = 5;
    return CmpDoFileSetSizeEx((__int64)a1, v9, 0LL, 0);
  }
  return result;
}
