/*
 * XREFs of PopPowerAggregatorHandleModernStandbySuspendResumeIntent @ 0x1408B2DF0
 * Callers:
 *     PopPowerAggregatorHandleIntent @ 0x1408B2C6C (PopPowerAggregatorHandleIntent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbySuspendResumeIntent(
        int *a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5)
{
  int v5; // r9d
  unsigned int v6; // r10d
  int v8; // r9d
  int v9; // r9d
  int v10; // eax
  int v11; // r8d

  v5 = *a1;
  v6 = 0;
  if ( a3 != 5 )
  {
    if ( v5 != 3 )
      return (unsigned int)-1073700861;
    v10 = 1;
LABEL_11:
    v11 = a1[3];
    *a2 = v10;
    a2[3] = v11;
    a2[1] = a5;
    a2[2] = a3;
    return v6;
  }
  if ( !v5 )
  {
LABEL_8:
    *(_OWORD *)a2 = *(_OWORD *)a1;
    return v6;
  }
  v8 = v5 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    v10 = 3;
    goto LABEL_11;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  return (unsigned int)-1073700861;
}
