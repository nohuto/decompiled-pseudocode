/*
 * XREFs of std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Partition_by_median_guess_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007CB3C (std--_Partition_by_median_guess_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e682013.c)
 *     std::_Sort_heap_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007CF68 (std--_Sort_heap_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9.c)
 *     std::_Insertion_sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007D094 (std--_Insertion_sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4.c)
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007D334 (std--_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07.c)
 */

__int64 __fastcall std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r15
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  _OWORD v23[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+80h] [rbp-28h]

  v4 = a2;
  v6 = a2 - a1;
  v7 = a3;
  v8 = a1;
  v9 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v9 >> 63;
  v11 = (v9 >> 63) + v9;
  if ( v11 <= 32 )
    goto LABEL_12;
  do
  {
    if ( v7 <= 0 )
      break;
    LOBYTE(v6) = a4;
    std::_Partition_by_median_guess_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
      &v21,
      v8,
      v4,
      v6);
    v12 = v22;
    v13 = v21;
    LOBYTE(v14) = a4;
    v7 = (v7 >> 2) + (v7 >> 1);
    if ( (v21 - v8) / 72 >= (v4 - v22) / 72 )
    {
      std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(v22, v4, v7, v14);
      v4 = v13;
    }
    else
    {
      std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(v8, v21, v7, v14);
      v8 = v12;
    }
    result = 0xE38E38E38E38E39LL * (v4 - v8);
    v11 = (v4 - v8) / 72;
  }
  while ( v11 > 32 );
  if ( v11 <= 32 )
  {
LABEL_12:
    if ( v11 >= 2 )
      return std::_Insertion_sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
               v8,
               v4);
  }
  else
  {
    v15 = ((v4 - v8) / 72) >> 1;
    if ( v15 > 0 )
    {
      v16 = v8 + 72 * v15;
      do
      {
        v16 -= 72LL;
        LOBYTE(v20) = a4;
        --v15;
        v17 = *(_OWORD *)(v16 + 16);
        v23[0] = *(_OWORD *)v16;
        v18 = *(_OWORD *)(v16 + 32);
        v23[1] = v17;
        v19 = *(_OWORD *)(v16 + 48);
        v23[2] = v18;
        v24 = *(_QWORD *)(v16 + 64);
        v23[3] = v19;
        std::_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
          v8,
          v15,
          (v4 - v8) / 72,
          v23,
          v20);
      }
      while ( v15 > 0 );
    }
    LOBYTE(a3) = a4;
    return std::_Sort_heap_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
             v8,
             v4,
             a3);
  }
  return result;
}
