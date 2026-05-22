/*
 * XREFs of std::_Sort_heap_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007CF68
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007D334 (std--_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int128 *a1,
        __int64 a2,
        char a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-68h]
  _OWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  v6 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v6 >> 63;
  if ( (__int64)((v6 >> 63) + v6) >= 2 )
  {
    v8 = a2 - 72;
    do
    {
      v9 = *(_OWORD *)(v8 + 16);
      v15[0] = *(_OWORD *)v8;
      v10 = *(_OWORD *)(v8 + 32);
      LOBYTE(v14) = a3;
      v15[1] = v9;
      v11 = *(_OWORD *)(v8 + 48);
      v15[2] = v10;
      v16 = *(_QWORD *)(v8 + 64);
      v12 = *a1;
      v15[3] = v11;
      *(_OWORD *)v8 = v12;
      *(_OWORD *)(v8 + 16) = a1[1];
      *(_OWORD *)(v8 + 32) = a1[2];
      *(_OWORD *)(v8 + 48) = a1[3];
      *(_QWORD *)(v8 + 64) = *((_QWORD *)a1 + 8);
      std::_Pop_heap_hole_by_index_HidChannelValueInfo_____ptr64_HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
        a1,
        0LL,
        (v8 - (__int64)a1) / 72,
        v15,
        v14);
      v8 -= 72LL;
      v13 = v8 - (_QWORD)a1 + 72;
      result = (unsigned __int64)((unsigned __int128)(v13 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
    }
    while ( v13 / 72 >= 2 );
  }
  return result;
}
