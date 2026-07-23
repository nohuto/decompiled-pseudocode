/*
 * XREFs of HvpDetermineLatestLogFile @ 0x140807E54
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpDetermineLatestLogFile(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  unsigned int v4; // eax

  v1 = *a1;
  v2 = a1[1];
  v3 = *a1 - v2;
  v4 = v2 - v1;
  if ( v1 >= v2 )
    v4 = v3;
  if ( v4 <= 0x7FFFFFFF )
    return v1 < v2;
  else
    return v1 >= v2;
}
