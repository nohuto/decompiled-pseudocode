/*
 * XREFs of std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9DE8
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A94A4 (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9B50 (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // r11
  __int64 v7; // r11
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax

  v4 = (a3 - 1) >> 1;
  v5 = a2;
  for ( i = a2; i < v4; *(_QWORD *)(a1 + 8 * v10 + 64) = *(_QWORD *)(a1 + 72 * i + 64) )
  {
    v7 = 2 * i;
    v8 = *(_BYTE *)(a1 + 72 * v7 + 146);
    if ( v8 < *(_BYTE *)(a1 + 72 * v7 + 74)
      || v8 == *(_BYTE *)(a1 + 72 * v7 + 74) && *(_WORD *)(a1 + 72 * v7 + 150) < *(_WORD *)(a1 + 72 * v7 + 78) )
    {
      v9 = 1LL;
    }
    else
    {
      v9 = 2LL;
    }
    i = v9 + v7;
    v10 = 9 * a2;
    a2 = i;
    *(_OWORD *)(a1 + 8 * v10) = *(_OWORD *)(a1 + 72 * i);
    *(_OWORD *)(a1 + 8 * v10 + 16) = *(_OWORD *)(a1 + 72 * i + 16);
    *(_OWORD *)(a1 + 8 * v10 + 32) = *(_OWORD *)(a1 + 72 * i + 32);
    *(_OWORD *)(a1 + 8 * v10 + 48) = *(_OWORD *)(a1 + 72 * i + 48);
  }
  if ( i == v4 && (a3 & 1) == 0 )
  {
    v11 = 9 * a2;
    a2 = a3 - 1;
    *(_OWORD *)(a1 + 8 * v11) = *(_OWORD *)(a1 + 72 * a3 - 72);
    *(_OWORD *)(a1 + 8 * v11 + 16) = *(_OWORD *)(a1 + 72 * a3 - 56);
    *(_OWORD *)(a1 + 8 * v11 + 32) = *(_OWORD *)(a1 + 72 * a3 - 40);
    *(_OWORD *)(a1 + 8 * v11 + 48) = *(_OWORD *)(a1 + 72 * a3 - 24);
    *(_QWORD *)(a1 + 8 * v11 + 64) = *(_QWORD *)(a1 + 72 * a3 - 8);
  }
  if ( v5 < a2 )
  {
    do
    {
      v12 = *(_BYTE *)(a4 + 2);
      v13 = (a2 - 1) >> 1;
      if ( *(_BYTE *)(a1 + 72 * v13 + 2) >= v12
        && (*(_BYTE *)(a1 + 72 * v13 + 2) != v12 || *(_WORD *)(a1 + 72 * v13 + 6) >= *(_WORD *)(a4 + 6)) )
      {
        break;
      }
      v14 = 9 * a2;
      a2 = (a2 - 1) >> 1;
      *(_OWORD *)(a1 + 8 * v14) = *(_OWORD *)(a1 + 72 * v13);
      *(_OWORD *)(a1 + 8 * v14 + 16) = *(_OWORD *)(a1 + 72 * v13 + 16);
      *(_OWORD *)(a1 + 8 * v14 + 32) = *(_OWORD *)(a1 + 72 * v13 + 32);
      *(_OWORD *)(a1 + 8 * v14 + 48) = *(_OWORD *)(a1 + 72 * v13 + 48);
      *(_QWORD *)(a1 + 8 * v14 + 64) = *(_QWORD *)(a1 + 72 * v13 + 64);
    }
    while ( v5 < v13 );
  }
  result = 9 * a2;
  *(_OWORD *)(a1 + 8 * result) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 8 * result + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 8 * result + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 8 * result + 48) = *(_OWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 8 * result + 64) = *(_QWORD *)(a4 + 64);
  return result;
}
