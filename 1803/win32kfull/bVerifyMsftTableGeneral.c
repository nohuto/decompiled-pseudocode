/*
 * XREFs of bVerifyMsftTableGeneral @ 0x1C021ABBC
 * Callers:
 *     bComputeIDs @ 0x1C0218070 (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C0217E60 (IsValidFormat4TableSize.c)
 */

_BOOL8 __fastcall bVerifyMsftTableGeneral(
        _WORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  _WORD *v12; // rdx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r11
  _WORD *v15; // r10
  _WORD *v16; // r9
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r8

  v7 = 0;
  if ( (unsigned __int16)(a4 - 2) > 3u )
    return 0LL;
  if ( !(unsigned int)IsValidFormat4TableSize(a1, a7, a6, a5) )
    return 0LL;
  v12 = a1 + 7;
  v13 = __ROR2__(a1[3], 8) >> 1;
  if ( a1[v13 + 6] != 0xFFFF )
    return 0LL;
  v14 = 0;
  *a2 = 6;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 12) = 0;
  v15 = &v12[v13];
  v16 = &v12[v13 + 1];
  if ( v12 < v15 )
  {
    while ( 1 )
    {
      v17 = __ROR2__(*v16, 8);
      v18 = __ROR2__(*v12, 8);
      if ( v18 < v17 || v14 > v17 || v18 == 0xFFFF && v12 < v15 - 1 )
        break;
      ++v16;
      ++v12;
      v7 += v18 - v17 + 1;
      v14 = v18;
      if ( v12 >= v15 )
        return v7 <= 0xFFFF;
    }
    return 0LL;
  }
  return 1LL;
}
