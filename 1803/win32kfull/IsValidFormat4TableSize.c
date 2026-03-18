/*
 * XREFs of IsValidFormat4TableSize @ 0x1C0217E60
 * Callers:
 *     bVerifyMsftTable @ 0x1C021A9DC (bVerifyMsftTable.c)
 *     bVerifyMsftTableGeneral @ 0x1C021ABBC (bVerifyMsftTableGeneral.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFormat4TableSize(_WORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r10
  unsigned int v6; // ebp
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r8
  __int64 v10; // r11
  int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // r11
  __int64 v14; // rcx
  _WORD *v15; // r9
  unsigned __int16 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned __int16 v21; // cx
  unsigned int v22; // eax

  v5 = a3;
  v6 = 0;
  if ( __ROR2__(*a1, 8) != 4 )
    return 0LL;
  if ( a4 - a3 < 8 )
    return 0LL;
  v8 = __ROR2__(a1[3], 8);
  if ( !v8 )
    return 0LL;
  if ( (v8 & 1) != 0 )
    return 0LL;
  v9 = v8 >> 1;
  if ( (unsigned int)v5 > -17 - 8 * (unsigned int)v9 )
    return 0LL;
  v10 = 6 * (unsigned int)v9;
  v11 = v10 + v5 + 16;
  if ( 2 * (unsigned int)v9 + v11 > a4 )
    return 0LL;
  v12 = a2 + v5 + 2 * (unsigned int)v9;
  v13 = a2 + v5 + v10;
  v14 = v5;
  v15 = (_WORD *)(v12 + 16);
  if ( *(_WORD *)(v12 + 2LL * v9 + 14) == 0xFFFF && v9 > 1u )
    --v9;
  v16 = 0;
  if ( v9 )
  {
    v17 = v13 - v12;
    v18 = v14 - (_QWORD)v15 + a2;
    while ( 1 )
    {
      v19 = v6;
      v20 = (unsigned __int16)__ROR2__(*v15, 8);
      v21 = __ROR2__(*(_WORD *)((char *)v15 + v17), 8);
      v6 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v15 + v18 + 14), 8);
      if ( v21 )
      {
        v22 = v19 + 1;
        if ( v20 >= v19 )
          v22 = v20;
        if ( v11 + v21 + 2 + 2 * (v6 + v16 - v22) > a4 )
          break;
      }
      ++v16;
      ++v15;
      if ( v16 >= v9 )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
