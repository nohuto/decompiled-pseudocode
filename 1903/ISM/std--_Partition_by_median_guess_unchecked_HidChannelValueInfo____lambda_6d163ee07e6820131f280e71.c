/*
 * XREFs of std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B2404
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B2CC4 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B1DC0 (std--_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int128 v14; // xmm6
  __int64 v15; // xmm2_8
  bool v16; // zf
  unsigned __int64 v17; // r8
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int128 v21; // xmm6
  __int64 v22; // xmm2_8
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int128 v26; // xmm6
  __int64 v27; // xmm2_8
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  __int128 v31; // xmm6
  __int64 v32; // xmm2_8
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  __int128 v35; // xmm5
  __int128 v36; // xmm6
  __int64 v37; // xmm2_8
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int128 v40; // xmm5
  __int128 v41; // xmm6
  __int64 v42; // xmm2_8
  __int128 v43; // xmm3
  __int128 v44; // xmm4
  __int128 v45; // xmm5
  __int128 v46; // xmm6
  __int64 v47; // xmm2_8

  v6 = a2 + 72 * (((__int64)(a3 - a2) / 72) >> 1);
  std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a2, v6, a3 - 72);
  v7 = v6 + 72;
  while ( a2 < v6 && *(_DWORD *)(v6 - 72) >= *(_DWORD *)v6 && *(_DWORD *)(v6 - 72) <= *(_DWORD *)v6 )
    v6 -= 72LL;
  if ( v7 < a3 )
  {
    v8 = *(_DWORD *)v6;
    do
    {
      if ( *(_DWORD *)v7 < v8 )
        break;
      if ( *(_DWORD *)v7 > v8 )
        break;
      v7 += 72LL;
    }
    while ( v7 < a3 );
  }
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( *(_DWORD *)v6 < *(_DWORD *)v9 )
        goto LABEL_17;
      if ( *(_DWORD *)v6 > *(_DWORD *)v9 )
        break;
      if ( v7 != v9 )
      {
        v11 = *(_OWORD *)v7;
        v12 = *(_OWORD *)(v7 + 16);
        v13 = *(_OWORD *)(v7 + 32);
        v14 = *(_OWORD *)(v7 + 48);
        v15 = *(_QWORD *)(v7 + 64);
        *(_OWORD *)v7 = *(_OWORD *)v9;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v7 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v7 + 48) = *(_OWORD *)(v9 + 48);
        *(_QWORD *)(v7 + 64) = *(_QWORD *)(v9 + 64);
        *(_OWORD *)v9 = v11;
        *(_OWORD *)(v9 + 16) = v12;
        *(_OWORD *)(v9 + 32) = v13;
        *(_OWORD *)(v9 + 48) = v14;
        *(_QWORD *)(v9 + 64) = v15;
      }
      v7 += 72LL;
LABEL_17:
      v9 += 72LL;
    }
    v16 = v10 == a2;
    if ( v10 > a2 )
    {
      v17 = v10 - 72;
      do
      {
        if ( *(_DWORD *)v17 >= *(_DWORD *)v6 )
        {
          if ( *(_DWORD *)v17 > *(_DWORD *)v6 )
            break;
          v6 -= 72LL;
          if ( v6 != v17 )
          {
            v18 = *(_OWORD *)v6;
            v19 = *(_OWORD *)(v6 + 16);
            v20 = *(_OWORD *)(v6 + 32);
            v21 = *(_OWORD *)(v6 + 48);
            v22 = *(_QWORD *)(v6 + 64);
            *(_OWORD *)v6 = *(_OWORD *)v17;
            *(_OWORD *)(v6 + 16) = *(_OWORD *)(v17 + 16);
            *(_OWORD *)(v6 + 32) = *(_OWORD *)(v17 + 32);
            *(_OWORD *)(v6 + 48) = *(_OWORD *)(v17 + 48);
            *(_QWORD *)(v6 + 64) = *(_QWORD *)(v17 + 64);
            *(_OWORD *)v17 = v18;
            *(_OWORD *)(v17 + 16) = v19;
            *(_OWORD *)(v17 + 32) = v20;
            *(_OWORD *)(v17 + 48) = v21;
            *(_QWORD *)(v17 + 64) = v22;
          }
        }
        v10 -= 72LL;
        v17 -= 72LL;
      }
      while ( a2 < v10 );
      v16 = v10 == a2;
    }
    if ( v16 )
      break;
    v10 -= 72LL;
    if ( v9 != a3 )
    {
      v43 = *(_OWORD *)v9;
      v44 = *(_OWORD *)(v9 + 16);
      v45 = *(_OWORD *)(v9 + 32);
      v46 = *(_OWORD *)(v9 + 48);
      v47 = *(_QWORD *)(v9 + 64);
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(v10 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(v10 + 48);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(v10 + 64);
      *(_OWORD *)v10 = v43;
      *(_OWORD *)(v10 + 16) = v44;
      *(_OWORD *)(v10 + 32) = v45;
      *(_OWORD *)(v10 + 48) = v46;
      *(_QWORD *)(v10 + 64) = v47;
      goto LABEL_17;
    }
    v6 -= 72LL;
    if ( v10 != v6 )
    {
      v33 = *(_OWORD *)v10;
      v34 = *(_OWORD *)(v10 + 16);
      v35 = *(_OWORD *)(v10 + 32);
      v36 = *(_OWORD *)(v10 + 48);
      v37 = *(_QWORD *)(v10 + 64);
      *(_OWORD *)v10 = *(_OWORD *)v6;
      *(_OWORD *)(v10 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(v10 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(v10 + 48) = *(_OWORD *)(v6 + 48);
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(v6 + 64);
      *(_OWORD *)v6 = v33;
      *(_OWORD *)(v6 + 16) = v34;
      *(_OWORD *)(v6 + 32) = v35;
      *(_OWORD *)(v6 + 48) = v36;
      *(_QWORD *)(v6 + 64) = v37;
    }
    v38 = *(_OWORD *)v6;
    v7 -= 72LL;
    v39 = *(_OWORD *)(v6 + 16);
    v40 = *(_OWORD *)(v6 + 32);
    v41 = *(_OWORD *)(v6 + 48);
    v42 = *(_QWORD *)(v6 + 64);
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(v7 + 64);
    *(_OWORD *)v7 = v38;
    *(_OWORD *)(v7 + 16) = v39;
    *(_OWORD *)(v7 + 32) = v40;
    *(_OWORD *)(v7 + 48) = v41;
    *(_QWORD *)(v7 + 64) = v42;
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 )
    {
      v23 = *(_OWORD *)v6;
      v24 = *(_OWORD *)(v6 + 16);
      v25 = *(_OWORD *)(v6 + 32);
      v26 = *(_OWORD *)(v6 + 48);
      v27 = *(_QWORD *)(v6 + 64);
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(v7 + 48);
      *(_QWORD *)(v6 + 64) = *(_QWORD *)(v7 + 64);
      *(_OWORD *)v7 = v23;
      *(_OWORD *)(v7 + 16) = v24;
      *(_OWORD *)(v7 + 32) = v25;
      *(_OWORD *)(v7 + 48) = v26;
      *(_QWORD *)(v7 + 64) = v27;
    }
    v7 += 72LL;
    v28 = *(_OWORD *)v6;
    v29 = *(_OWORD *)(v6 + 16);
    v30 = *(_OWORD *)(v6 + 32);
    v31 = *(_OWORD *)(v6 + 48);
    v32 = *(_QWORD *)(v6 + 64);
    *(_OWORD *)v6 = *(_OWORD *)v9;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v9 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(v9 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(v9 + 64);
    v6 += 72LL;
    *(_OWORD *)v9 = v28;
    *(_OWORD *)(v9 + 16) = v29;
    *(_OWORD *)(v9 + 32) = v30;
    *(_OWORD *)(v9 + 48) = v31;
    *(_QWORD *)(v9 + 64) = v32;
    goto LABEL_17;
  }
  *a1 = v6;
  a1[1] = v7;
  return a1;
}
