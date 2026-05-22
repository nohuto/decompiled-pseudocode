/*
 * XREFs of std::_Partition_by_median_guess_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007CB3C
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007D734 (std--_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

__int128 **__fastcall std::_Partition_by_median_guess_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int128 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r14
  __int128 *v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned int *v16; // rdx
  __int128 *v17; // rax
  unsigned int *i; // rcx
  unsigned int v19; // edx
  __int128 *v20; // rcx
  __int128 *v21; // rdx
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int128 v25; // xmm6
  __int64 v26; // xmm2_8
  bool v27; // zf
  __int64 v28; // r8
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  __int64 v33; // xmm2_8
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  __int128 v37; // xmm6
  __int64 v38; // xmm2_8
  __int128 v39; // xmm3
  __int128 v40; // xmm4
  __int128 v41; // xmm5
  __int128 v42; // xmm6
  __int64 v43; // xmm2_8
  __int128 v44; // xmm3
  __int128 v45; // xmm4
  __int128 v46; // xmm5
  __int128 v47; // xmm6
  __int64 v48; // xmm2_8
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int128 v51; // xmm5
  __int128 v52; // xmm6
  __int64 v53; // xmm2_8
  __int128 v54; // xmm3
  __int128 v55; // xmm4
  __int128 v56; // xmm5
  __int128 v57; // xmm6
  __int64 v58; // xmm2_8

  v6 = a3 - 72;
  v7 = (__int128 *)(a2
                  + 72
                  * (((__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2)
                   / 2));
  v8 = a2;
  v9 = (__int64)(a3 - 72 - a2) / 72;
  if ( v9 <= 40 )
  {
    v14 = a3 - 72;
  }
  else
  {
    std::_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
      a2,
      72 * ((v9 + 1) >> 3) + a2,
      144 * ((v9 + 1) >> 3) + a2);
    std::_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
      (char *)v7 - v10,
      v7,
      (char *)v7 + v10);
    std::_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
      v6 - v12,
      v6 - v11,
      a3 - 72);
    v14 = v13;
    v8 = v15;
  }
  std::_Med3_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(v8, v7, v14);
  v17 = (__int128 *)((char *)v7 + 72);
  for ( i = (unsigned int *)v7; a2 < (unsigned __int64)v7; i = (unsigned int *)v7 )
  {
    i = v16;
    if ( *((_DWORD *)v7 - 18) < *(_DWORD *)v7 )
      break;
    if ( *(_DWORD *)v7 < *((_DWORD *)v7 - 18) )
      break;
    v7 = (__int128 *)(v16 - 18);
    v16 = (unsigned int *)v7;
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v19 = *i;
    do
    {
      if ( *(_DWORD *)v17 < v19 )
        break;
      if ( v19 < *(_DWORD *)v17 )
        break;
      v17 = (__int128 *)((char *)v17 + 72);
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v20 = v17;
  v21 = v7;
  while ( 1 )
  {
    while ( (unsigned __int64)v20 < a3 )
    {
      if ( *(_DWORD *)v7 < *(_DWORD *)v20 )
        goto LABEL_19;
      if ( *(_DWORD *)v20 < *(_DWORD *)v7 )
        break;
      if ( v17 != v20 )
      {
        v22 = *v17;
        v23 = v17[1];
        v24 = v17[2];
        v25 = v17[3];
        v26 = *((_QWORD *)v17 + 8);
        *v17 = *v20;
        v17[1] = v20[1];
        v17[2] = v20[2];
        v17[3] = v20[3];
        *((_QWORD *)v17 + 8) = *((_QWORD *)v20 + 8);
        *v20 = v22;
        v20[1] = v23;
        v20[2] = v24;
        v20[3] = v25;
        *((_QWORD *)v20 + 8) = v26;
      }
      v17 = (__int128 *)((char *)v17 + 72);
LABEL_19:
      v20 = (__int128 *)((char *)v20 + 72);
    }
    v27 = v21 == (__int128 *)a2;
    if ( (unsigned __int64)v21 > a2 )
    {
      v28 = (__int64)v21 - 72;
      do
      {
        if ( *(_DWORD *)v28 >= *(_DWORD *)v7 )
        {
          if ( *(_DWORD *)v7 < *(_DWORD *)v28 )
            break;
          v7 = (__int128 *)((char *)v7 - 72);
          if ( v7 != (__int128 *)v28 )
          {
            v29 = *v7;
            v30 = v7[1];
            v31 = v7[2];
            v32 = v7[3];
            v33 = *((_QWORD *)v7 + 8);
            *v7 = *(_OWORD *)v28;
            v7[1] = *(_OWORD *)(v28 + 16);
            v7[2] = *(_OWORD *)(v28 + 32);
            v7[3] = *(_OWORD *)(v28 + 48);
            *((_QWORD *)v7 + 8) = *(_QWORD *)(v28 + 64);
            *(_OWORD *)v28 = v29;
            *(_OWORD *)(v28 + 16) = v30;
            *(_OWORD *)(v28 + 32) = v31;
            *(_OWORD *)(v28 + 48) = v32;
            *(_QWORD *)(v28 + 64) = v33;
          }
        }
        v21 = (__int128 *)((char *)v21 - 72);
        v28 -= 72LL;
      }
      while ( a2 < (unsigned __int64)v21 );
      v27 = v21 == (__int128 *)a2;
    }
    if ( v27 )
      break;
    v21 = (__int128 *)((char *)v21 - 72);
    if ( v20 != (__int128 *)a3 )
    {
      v54 = *v20;
      v55 = v20[1];
      v56 = v20[2];
      v57 = v20[3];
      v58 = *((_QWORD *)v20 + 8);
      *v20 = *v21;
      v20[1] = v21[1];
      v20[2] = v21[2];
      v20[3] = v21[3];
      *((_QWORD *)v20 + 8) = *((_QWORD *)v21 + 8);
      *v21 = v54;
      v21[1] = v55;
      v21[2] = v56;
      v21[3] = v57;
      *((_QWORD *)v21 + 8) = v58;
      goto LABEL_19;
    }
    v7 = (__int128 *)((char *)v7 - 72);
    if ( v21 != v7 )
    {
      v44 = *v21;
      v45 = v21[1];
      v46 = v21[2];
      v47 = v21[3];
      v48 = *((_QWORD *)v21 + 8);
      *v21 = *v7;
      v21[1] = v7[1];
      v21[2] = v7[2];
      v21[3] = v7[3];
      *((_QWORD *)v21 + 8) = *((_QWORD *)v7 + 8);
      *v7 = v44;
      v7[1] = v45;
      v7[2] = v46;
      v7[3] = v47;
      *((_QWORD *)v7 + 8) = v48;
    }
    v49 = *v7;
    v17 = (__int128 *)((char *)v17 - 72);
    v50 = v7[1];
    v51 = v7[2];
    v52 = v7[3];
    v53 = *((_QWORD *)v7 + 8);
    *v7 = *v17;
    v7[1] = v17[1];
    v7[2] = v17[2];
    v7[3] = v17[3];
    *((_QWORD *)v7 + 8) = *((_QWORD *)v17 + 8);
    *v17 = v49;
    v17[1] = v50;
    v17[2] = v51;
    v17[3] = v52;
    *((_QWORD *)v17 + 8) = v53;
  }
  if ( v20 != (__int128 *)a3 )
  {
    if ( v17 != v20 )
    {
      v34 = *v7;
      v35 = v7[1];
      v36 = v7[2];
      v37 = v7[3];
      v38 = *((_QWORD *)v7 + 8);
      *v7 = *v17;
      v7[1] = v17[1];
      v7[2] = v17[2];
      v7[3] = v17[3];
      *((_QWORD *)v7 + 8) = *((_QWORD *)v17 + 8);
      *v17 = v34;
      v17[1] = v35;
      v17[2] = v36;
      v17[3] = v37;
      *((_QWORD *)v17 + 8) = v38;
    }
    v17 = (__int128 *)((char *)v17 + 72);
    v39 = *v7;
    v40 = v7[1];
    v41 = v7[2];
    v42 = v7[3];
    v43 = *((_QWORD *)v7 + 8);
    *v7 = *v20;
    v7[1] = v20[1];
    v7[2] = v20[2];
    v7[3] = v20[3];
    *((_QWORD *)v7 + 8) = *((_QWORD *)v20 + 8);
    v7 = (__int128 *)((char *)v7 + 72);
    *v20 = v39;
    v20[1] = v40;
    v20[2] = v41;
    v20[3] = v42;
    *((_QWORD *)v20 + 8) = v43;
    goto LABEL_19;
  }
  *a1 = v7;
  a1[1] = v17;
  return a1;
}
