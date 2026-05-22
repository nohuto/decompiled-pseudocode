/*
 * XREFs of std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800A5ED8 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 * Callees:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7AA8 (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____.c)
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7DDC (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64_Spatial.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  char *v4; // r14
  signed __int64 v6; // r9
  char *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  char *v12; // r15
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r15
  char *v16; // r13
  int v17; // eax
  char *v18; // r14
  char *v19; // xmm0_8
  __int64 v20; // rcx
  char *i; // rbx
  char *v22; // xmm0_8
  char *v23; // rdx
  int v24; // r15d
  unsigned __int16 v25; // r9
  char *j; // rcx
  int v27; // [rsp+20h] [rbp-20h]
  char *v28; // [rsp+30h] [rbp-10h] BYREF
  char *v29; // [rsp+38h] [rbp-8h]

  v4 = a2;
  v6 = a2 - a1;
  v8 = a1;
  v9 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = v9 >> 63;
  v11 = (v9 >> 63) + v9;
  if ( v11 <= 32 )
    goto LABEL_33;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(v6) = a4;
    std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      &v28,
      v8,
      v4,
      v6);
    v12 = v29;
    LOBYTE(v13) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (v28 - v8) / 12 >= (v4 - v29) / 12 )
    {
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v29,
        v4,
        a3,
        v13);
      v4 = v28;
    }
    else
    {
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v8,
        v28,
        a3,
        v13);
      v8 = v12;
    }
    result = (unsigned __int64)((unsigned __int128)((v4 - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    v11 = (v4 - v8) / 12;
  }
  while ( v11 > 32 );
  if ( v11 <= 32 )
  {
LABEL_33:
    if ( v11 >= 2 && v8 != v4 )
    {
      for ( i = v8 + 12; i != v4; i += 12 )
      {
        v22 = *(char **)i;
        v23 = i;
        v24 = *((_DWORD *)i + 2);
        v28 = v22;
        if ( (unsigned __int16)v22 < *(_WORD *)v8
          || (_WORD)v22 == *(_WORD *)v8 && (result = (unsigned __int64)v28 >> 32, WORD2(v28) < *((_WORD *)v8 + 2)) )
        {
          result = (__int64)memmove_0(v8 + 12, v8, i - v8);
          *(_QWORD *)v8 = v22;
          *((_DWORD *)v8 + 2) = v24;
        }
        else
        {
          v25 = WORD2(v28);
          for ( j = i; ; v23 = j )
          {
            j -= 12;
            if ( (unsigned __int16)v22 >= *(_WORD *)j && ((_WORD)v22 != *(_WORD *)j || v25 >= *((_WORD *)j + 2)) )
              break;
            *(_QWORD *)v23 = *(_QWORD *)j;
            result = *((unsigned int *)j + 2);
            *((_DWORD *)v23 + 2) = result;
          }
          *(_QWORD *)v23 = v22;
          *((_DWORD *)v23 + 2) = v24;
        }
      }
    }
  }
  else
  {
    result = (unsigned __int64)((unsigned __int128)((v4 - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    v14 = (v4 - v8) / 12;
    v15 = v14 >> 1;
    if ( v14 >> 1 > 0 )
    {
      v16 = &v8[12 * v15];
      do
      {
        v16 -= 12;
        LOBYTE(v27) = a4;
        v17 = *((_DWORD *)v16 + 2);
        --v15;
        v28 = *(char **)v16;
        LODWORD(v29) = v17;
        result = std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
                   v8,
                   v15,
                   v14,
                   &v28,
                   v27);
      }
      while ( v15 > 0 );
    }
    if ( v14 >= 2 )
    {
      v18 = v4 - 12;
      do
      {
        if ( v14 >= 2 )
        {
          v19 = *(char **)v18;
          LODWORD(v29) = *((_DWORD *)v18 + 2);
          v28 = v19;
          *(_QWORD *)v18 = *(_QWORD *)v8;
          *((_DWORD *)v18 + 2) = *((_DWORD *)v8 + 2);
          LOBYTE(v27) = a4;
          std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
            v8,
            0LL,
            (v18 - v8) / 12,
            &v28,
            v27);
        }
        v18 -= 12;
        v20 = v18 - v8 + 12;
        result = (unsigned __int64)((unsigned __int128)(v20 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
        v14 = v20 / 12;
      }
      while ( v20 / 12 >= 2 );
    }
  }
  return result;
}
