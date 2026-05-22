/*
 * XREFs of std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A94A4
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A8918 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A94A4 (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A94A4 (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9694 (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9B50 (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1__.c)
 *     std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9C7C (std--_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a939.c)
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9DE8 (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a43.c)
 */

__int64 __fastcall std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v6; // r9
  __int64 v7; // rsi
  char *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  char *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // rsi
  char *v16; // r15
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  char *v22; // [rsp+38h] [rbp-70h]
  _OWORD v23[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+80h] [rbp-28h]

  v4 = a2;
  v6 = a2 - (_QWORD)a1;
  v7 = a3;
  v8 = a1;
  v9 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v9 >> 63;
  v11 = (v9 >> 63) + v9;
  if ( v11 <= 32 )
    goto LABEL_12;
  do
  {
    if ( v7 <= 0 )
      break;
    LOBYTE(v6) = a4;
    std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      &v21,
      v8,
      v4,
      v6);
    v12 = v22;
    v13 = v21;
    LOBYTE(v14) = a4;
    v7 = (v7 >> 2) + (v7 >> 1);
    if ( (v21 - (__int64)v8) / 72 >= (v4 - (__int64)v22) / 72 )
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v22, v4, v7, v14);
      v4 = v13;
    }
    else
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v8, v21, v7, v14);
      v8 = v12;
    }
    result = 0xE38E38E38E38E39LL * (v4 - (_QWORD)v8);
    v11 = (v4 - (__int64)v8) / 72;
  }
  while ( v11 > 32 );
  if ( v11 <= 32 )
  {
LABEL_12:
    if ( v11 >= 2 )
      return std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v8);
  }
  else
  {
    v15 = ((v4 - (__int64)v8) / 72) >> 1;
    if ( v15 > 0 )
    {
      v16 = &v8[72 * v15];
      do
      {
        v16 -= 72;
        LOBYTE(v20) = a4;
        --v15;
        v17 = *((_OWORD *)v16 + 1);
        v23[0] = *(_OWORD *)v16;
        v18 = *((_OWORD *)v16 + 2);
        v23[1] = v17;
        v19 = *((_OWORD *)v16 + 3);
        v23[2] = v18;
        v24 = *((_QWORD *)v16 + 8);
        v23[3] = v19;
        std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
          v8,
          v15,
          (v4 - (__int64)v8) / 72,
          v23,
          v20);
      }
      while ( v15 > 0 );
    }
    LOBYTE(a3) = a4;
    return std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v8, v4, a3);
  }
  return result;
}
