/*
 * XREFs of std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7AA8
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 * Callees:
 *     std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A8170 (std--_Med3_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 */

unsigned __int16 **__fastcall std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        unsigned __int16 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r15
  unsigned __int16 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // r8
  __int64 *v22; // r9
  unsigned __int16 v23; // cx
  __int64 v24; // xmm1_8
  int v25; // ecx
  bool v26; // zf
  __int64 v27; // r10
  unsigned __int16 v28; // cx
  __int64 v29; // xmm1_8
  int v30; // ecx
  __int64 v31; // xmm1_8
  int v32; // ecx
  __int64 v33; // xmm1_8
  int v34; // ecx
  __int64 v35; // xmm1_8
  int v36; // ecx
  __int64 v37; // xmm1_8
  int v38; // ecx
  __int64 v39; // xmm1_8
  int v40; // ecx
  unsigned __int16 **result; // rax

  v6 = a3 - 12;
  v7 = (unsigned __int16 *)(a2
                          + 12
                          * (((__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1)
                           / 2));
  v8 = (__int64)(a3 - 12 - a2) / 12;
  if ( v8 <= 40 )
  {
    v15 = a3 - 12;
    v13 = a2;
  }
  else
  {
    v9 = 12 * ((v8 + 1) >> 3) + a2;
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      a2,
      v9,
      24 * ((v8 + 1) >> 3) + a2);
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      (char *)v7 - v10,
      v7,
      (char *)v7 + v10);
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v6 - v11,
      v6 - v12,
      v6);
    v13 = v9;
    v15 = v14;
  }
  std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
    v13,
    v7,
    v15);
  v16 = v7 + 6;
  v17 = v7;
  if ( a2 < (unsigned __int64)v7 )
  {
    v18 = v7;
    while ( 1 )
    {
      v19 = *(v7 - 6);
      if ( v19 < *v7 || v19 == *v7 && *(v7 - 4) < v7[2] )
        break;
      if ( *v7 < v19 || *v7 == v19 && v7[2] < *(v7 - 4) )
        break;
      v7 = v18 - 6;
      v18 = v7;
      v17 = v7;
      if ( a2 >= (unsigned __int64)v7 )
        goto LABEL_15;
    }
    v17 = v18;
  }
LABEL_15:
  if ( (unsigned __int64)v16 < a3 )
  {
    v20 = *v17;
    do
    {
      if ( *v16 < v20 || *v16 == v20 && v16[2] < v7[2] )
        break;
      if ( v20 < *v16 || v20 == *v16 && v7[2] < v16[2] )
        break;
      v16 += 6;
    }
    while ( (unsigned __int64)v16 < a3 );
  }
  v21 = v16;
  v22 = (__int64 *)v7;
  while ( 2 )
  {
    while ( (unsigned __int64)v21 < a3 )
    {
      v23 = *v21;
      if ( *v7 >= *v21 && (*v7 != v23 || v7[2] >= v21[2]) )
      {
        if ( v23 < *v7 || v23 == *v7 && v21[2] < v7[2] )
          break;
        if ( v16 != v21 )
        {
          v24 = *(_QWORD *)v16;
          v25 = *((_DWORD *)v16 + 2);
          *(_QWORD *)v16 = *(_QWORD *)v21;
          *((_DWORD *)v16 + 2) = *((_DWORD *)v21 + 2);
          *(_QWORD *)v21 = v24;
          *((_DWORD *)v21 + 2) = v25;
        }
        v16 += 6;
      }
LABEL_34:
      v21 += 6;
    }
    v26 = v22 == (__int64 *)a2;
    if ( (unsigned __int64)v22 <= a2 )
      goto LABEL_48;
    v27 = (__int64)v22 - 12;
    while ( 1 )
    {
      v28 = *v7;
      if ( *(_WORD *)v27 >= *v7 && (*(_WORD *)v27 != v28 || *(_WORD *)(v27 + 4) >= v7[2]) )
        break;
LABEL_46:
      v22 = (__int64 *)((char *)v22 - 12);
      v27 -= 12LL;
      if ( a2 >= (unsigned __int64)v22 )
        goto LABEL_47;
    }
    if ( v28 >= *(_WORD *)v27 && (v28 != *(_WORD *)v27 || v7[2] >= *(_WORD *)(v27 + 4)) )
    {
      v7 -= 6;
      if ( v7 != (unsigned __int16 *)v27 )
      {
        v29 = *(_QWORD *)v7;
        v30 = *((_DWORD *)v7 + 2);
        *(_QWORD *)v7 = *(_QWORD *)v27;
        *((_DWORD *)v7 + 2) = *(_DWORD *)(v27 + 8);
        *(_QWORD *)v27 = v29;
        *(_DWORD *)(v27 + 8) = v30;
      }
      goto LABEL_46;
    }
LABEL_47:
    v26 = v22 == (__int64 *)a2;
LABEL_48:
    if ( !v26 )
    {
      v22 = (__int64 *)((char *)v22 - 12);
      if ( v21 != (unsigned __int16 *)a3 )
      {
        v39 = *(_QWORD *)v21;
        v40 = *((_DWORD *)v21 + 2);
        *(_QWORD *)v21 = *v22;
        *((_DWORD *)v21 + 2) = *((_DWORD *)v22 + 2);
        *v22 = v39;
        *((_DWORD *)v22 + 2) = v40;
        goto LABEL_34;
      }
      v7 -= 6;
      if ( v22 != (__int64 *)v7 )
      {
        v35 = *v22;
        v36 = *((_DWORD *)v22 + 2);
        *v22 = *(_QWORD *)v7;
        *((_DWORD *)v22 + 2) = *((_DWORD *)v7 + 2);
        *(_QWORD *)v7 = v35;
        *((_DWORD *)v7 + 2) = v36;
      }
      v37 = *(_QWORD *)v7;
      v16 -= 6;
      v38 = *((_DWORD *)v7 + 2);
      *(_QWORD *)v7 = *(_QWORD *)v16;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v16 + 2);
      *(_QWORD *)v16 = v37;
      *((_DWORD *)v16 + 2) = v38;
      continue;
    }
    break;
  }
  if ( v21 != (unsigned __int16 *)a3 )
  {
    if ( v16 != v21 )
    {
      v31 = *(_QWORD *)v7;
      v32 = *((_DWORD *)v7 + 2);
      *(_QWORD *)v7 = *(_QWORD *)v16;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v16 + 2);
      *(_QWORD *)v16 = v31;
      *((_DWORD *)v16 + 2) = v32;
    }
    v33 = *(_QWORD *)v7;
    v16 += 6;
    v34 = *((_DWORD *)v7 + 2);
    *(_QWORD *)v7 = *(_QWORD *)v21;
    *((_DWORD *)v7 + 2) = *((_DWORD *)v21 + 2);
    v7 += 6;
    *(_QWORD *)v21 = v33;
    *((_DWORD *)v21 + 2) = v34;
    goto LABEL_34;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v16;
  return result;
}
