/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1406EFFD4
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x14068C5C0 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14068FAD0 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14068FCBC (HvpLogTypeToLogArrayIndex.c)
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
