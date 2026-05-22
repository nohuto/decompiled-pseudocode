/*
 * XREFs of std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DE380
 * Callers:
 *     std::_Make_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DDD60 (std--_Make_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Pop_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DE4A4 (std--_Pop_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800DEAB4 (_lambda_cc7dd983a7a4322fbd155d916a9399c1_--operator().c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // r10
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rax

  v5 = (a3 - 1) >> 1;
  v7 = a1;
  v8 = a2;
  while ( 1 )
  {
    v13 = a2;
    if ( a2 >= v5 )
      break;
    v9 = (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(
                            a1,
                            v7 + 72 * (2 * a2 + 2),
                            v7 + 72 * (2 * a2 + 2) - 72);
    v11 = 9 * v10;
    a2 = v12 + (v9 ^ 1) + 1;
    a1 = 9 * a2;
    *(_OWORD *)(v7 + 8 * v11) = *(_OWORD *)(v7 + 72 * a2);
    *(_OWORD *)(v7 + 8 * v11 + 16) = *(_OWORD *)(v7 + 72 * a2 + 16);
    *(_OWORD *)(v7 + 8 * v11 + 32) = *(_OWORD *)(v7 + 72 * a2 + 32);
    *(_OWORD *)(v7 + 8 * v11 + 48) = *(_OWORD *)(v7 + 72 * a2 + 48);
    *(_QWORD *)(v7 + 8 * v11 + 64) = *(_QWORD *)(v7 + 72 * a2 + 64);
  }
  if ( a2 == v5 && (a3 & 1) == 0 )
  {
    v14 = 9 * a2;
    v13 = a3 - 1;
    *(_OWORD *)(v7 + 8 * v14) = *(_OWORD *)(v7 + 72 * a3 - 72);
    *(_OWORD *)(v7 + 8 * v14 + 16) = *(_OWORD *)(v7 + 72 * a3 - 56);
    *(_OWORD *)(v7 + 8 * v14 + 32) = *(_OWORD *)(v7 + 72 * a3 - 40);
    *(_OWORD *)(v7 + 8 * v14 + 48) = *(_OWORD *)(v7 + 72 * a3 - 24);
    *(_QWORD *)(v7 + 8 * v14 + 64) = *(_QWORD *)(v7 + 72 * a3 - 8);
  }
  return std::_Push_heap_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
           v7,
           v13,
           v8,
           a4);
}
