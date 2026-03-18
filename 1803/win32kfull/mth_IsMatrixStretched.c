/*
 * XREFs of mth_IsMatrixStretched @ 0x1C02B3860
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C02BDA78 (fsg_InitInterpreterTrans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_IsMatrixStretched(int *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // r10
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  signed int v8; // eax
  signed int v9; // edx

  v1 = 0;
  v3 = 2LL;
  do
  {
    v4 = *a1;
    v5 = *a1;
    v6 = a1[1];
    a1 += 3;
    v7 = -v5;
    if ( v4 >= 0 )
      v7 = v4;
    v8 = abs32(v6);
    v9 = v8;
    if ( v7 >= v8 )
    {
      v9 = v7;
      v7 = v8;
    }
    v1 |= v9 - v7 <= 33;
    --v3;
  }
  while ( v3 );
  return v1;
}
