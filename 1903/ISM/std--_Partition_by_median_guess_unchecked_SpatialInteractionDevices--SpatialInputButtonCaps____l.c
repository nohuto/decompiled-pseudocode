/*
 * XREFs of std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800DBB50
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800DBFB0 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 * Callees:
 *     std::_Guess_median_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800DB48C (std--_Guess_median_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca.c)
 *     _lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator() @ 0x1800DC1B4 (_lambda_7cb88ca86370cec64ac2ea824bd2a3de_--operator().c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // xmm1_8
  bool v14; // zf
  unsigned __int64 v15; // rdi
  __int64 v16; // xmm1_8
  __int64 v17; // xmm1_8
  int v18; // ecx
  __int64 v19; // xmm1_8
  __int64 v20; // xmm1_8
  int v21; // ecx
  __int64 v22; // xmm1_8
  __int64 v23; // xmm1_8
  unsigned __int64 *result; // rax

  v7 = (unsigned __int128)((__int64)(a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = a2 + 12 * ((__int64)(((unsigned __int64)v7 >> 63) + (v7 >> 1)) >> 1);
  std::_Guess_median_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
    a2,
    v8,
    a3 - 12,
    a4);
  v10 = v8 + 12;
  if ( a2 < v8 )
  {
    v9 = v8;
    do
    {
      if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9 - 12, v9 - 12, v8) )
        break;
      if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v8, v9) )
        break;
      v8 = v9;
    }
    while ( a2 < v9 );
  }
  while ( v10 < a3
       && !(unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v10, v8)
       && !(unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v8, v10) )
    v10 += 12LL;
  v11 = v10;
  v12 = v8;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v8, v11) )
        goto LABEL_17;
      if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v11, v8) )
        break;
      if ( v10 != v11 )
      {
        v13 = *(_QWORD *)v10;
        v9 = *(unsigned int *)(v10 + 8);
        *(_QWORD *)v10 = *(_QWORD *)v11;
        *(_DWORD *)(v10 + 8) = *(_DWORD *)(v11 + 8);
        *(_QWORD *)v11 = v13;
        *(_DWORD *)(v11 + 8) = v9;
      }
      v10 += 12LL;
LABEL_17:
      v11 += 12LL;
    }
    v14 = v12 == a2;
    if ( v12 > a2 )
    {
      v15 = v12 - 12;
      do
      {
        if ( !(unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v15, v8) )
        {
          if ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v9, v8, v15) )
            break;
          v8 -= 12LL;
          if ( v8 != v15 )
          {
            v16 = *(_QWORD *)v8;
            v9 = *(unsigned int *)(v8 + 8);
            *(_QWORD *)v8 = *(_QWORD *)v15;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v15 + 8);
            *(_QWORD *)v15 = v16;
            *(_DWORD *)(v15 + 8) = v9;
          }
        }
        v12 -= 12LL;
        v15 -= 12LL;
      }
      while ( a2 < v12 );
      v14 = v12 == a2;
    }
    if ( v14 )
      break;
    v12 -= 12LL;
    if ( v11 != a3 )
    {
      v23 = *(_QWORD *)v11;
      v9 = *(unsigned int *)(v11 + 8);
      *(_QWORD *)v11 = *(_QWORD *)v12;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + 8);
      *(_QWORD *)v12 = v23;
      *(_DWORD *)(v12 + 8) = v9;
      goto LABEL_17;
    }
    v8 -= 12LL;
    if ( v12 != v8 )
    {
      v20 = *(_QWORD *)v12;
      v21 = *(_DWORD *)(v12 + 8);
      *(_QWORD *)v12 = *(_QWORD *)v8;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v8 + 8);
      *(_QWORD *)v8 = v20;
      *(_DWORD *)(v8 + 8) = v21;
    }
    v22 = *(_QWORD *)v8;
    v10 -= 12LL;
    v9 = *(unsigned int *)(v8 + 8);
    *(_QWORD *)v8 = *(_QWORD *)v10;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v10 + 8);
    *(_QWORD *)v10 = v22;
    *(_DWORD *)(v10 + 8) = v9;
  }
  if ( v11 != a3 )
  {
    if ( v10 != v11 )
    {
      v17 = *(_QWORD *)v8;
      v18 = *(_DWORD *)(v8 + 8);
      *(_QWORD *)v8 = *(_QWORD *)v10;
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v10 + 8);
      *(_QWORD *)v10 = v17;
      *(_DWORD *)(v10 + 8) = v18;
    }
    v19 = *(_QWORD *)v8;
    v10 += 12LL;
    v9 = *(unsigned int *)(v8 + 8);
    *(_QWORD *)v8 = *(_QWORD *)v11;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v11 + 8);
    v8 += 12LL;
    *(_QWORD *)v11 = v19;
    *(_DWORD *)(v11 + 8) = v9;
    goto LABEL_17;
  }
  *a1 = v8;
  result = a1;
  a1[1] = v10;
  return result;
}
