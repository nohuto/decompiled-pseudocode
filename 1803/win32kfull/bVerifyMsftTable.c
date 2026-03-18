/*
 * XREFs of bVerifyMsftTable @ 0x1C021A9DC
 * Callers:
 *     bComputeIDs @ 0x1C0218070 (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C0217E60 (IsValidFormat4TableSize.c)
 */

__int64 __fastcall bVerifyMsftTable(
        _WORD *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        __int16 a5,
        int *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  int valid; // eax
  int v14; // r10d
  _WORD *v16; // r8
  unsigned __int16 v17; // cx
  int v18; // r9d
  unsigned __int16 v19; // bp
  _WORD *v20; // rdi
  int v21; // r11d
  int v22; // edx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r15
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // r9

  valid = IsValidFormat4TableSize(a1, a9, a8, a7);
  LOBYTE(v14) = 0;
  if ( !valid )
    return 0LL;
  v16 = a1 + 7;
  v17 = __ROR2__(a1[3], 8) >> 1;
  v18 = v17;
  if ( a1[v17 + 6] != 0xFFFF )
    return 0LL;
  *a2 = 3;
  v19 = 0;
  v20 = &v16[v17];
  v21 = (unsigned __int16)__ROR2__(v16[v17 + 1], 8);
  v22 = v21 & 0xFF00;
  *a3 = v21;
  *a6 = v21;
  if ( a5 == 1 )
  {
    v23 = 61440;
    if ( v22 != 61440 )
      v23 = 0;
  }
  else if ( (v21 & 0xFF00) == 0 || v22 == 57344 )
  {
    v23 = 0;
  }
  else
  {
    v23 = 61440;
    if ( v22 != 61440 )
      v23 = v21 - 32;
  }
  *a3 = v23;
  if ( v16[v17 + (unsigned __int64)v17] == 0xFFFF && v17 > 1u )
  {
    --v17;
    --v20;
  }
  v24 = 0;
  a4[1] = v17;
  *a4 = 0;
  a4[3] = 0;
  if ( v16 < v20 )
  {
    v25 = (unsigned int)(v18 + 1);
    while ( 1 )
    {
      v26 = __ROR2__(v16[v25], 8);
      v27 = __ROR2__(*v16, 8);
      if ( v27 < v26 || v19 > v26 || !v26 && v27 == 0xFFFF )
        return 0LL;
      v24 = v27 - v26 + a4[3] + 1;
      a4[3] = v24;
      if ( v19 < 0xB7u && v26 > 0xB7u )
        *a4 |= 2u;
      if ( v26 <= 0x2219u && v27 >= 0x2219u )
        *a4 |= 1u;
      ++v16;
      v19 = v27;
      if ( v16 >= v20 )
      {
        v14 = *a4;
        break;
      }
    }
  }
  if ( (v14 & 3) == 3 )
  {
    a4[1] = v17 + 1;
    a4[3] = v24 + 1;
  }
  return 1LL;
}
