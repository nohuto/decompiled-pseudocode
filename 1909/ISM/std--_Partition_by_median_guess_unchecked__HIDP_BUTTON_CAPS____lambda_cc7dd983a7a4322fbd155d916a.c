/*
 * XREFs of std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DDD30
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DE468 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     std::_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800DD8D8 (std--_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800DE874 (_lambda_cc7dd983a7a4322fbd155d916a9399c1_--operator().c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  __int128 *v11; // r9
  unsigned __int64 v12; // r10
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int64 v17; // xmm2_8
  bool v18; // zf
  unsigned __int64 v19; // r11
  __int64 v20; // r11
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  __int64 v25; // xmm2_8
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int64 v30; // xmm2_8
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  __int128 v34; // xmm6
  __int64 v35; // xmm2_8
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int128 v38; // xmm5
  __int128 v39; // xmm6
  __int64 v40; // xmm2_8
  __int128 v41; // xmm3
  __int128 v42; // xmm4
  __int128 v43; // xmm5
  __int128 v44; // xmm6
  __int64 v45; // xmm2_8
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int128 v48; // xmm5
  __int128 v49; // xmm6
  __int64 v50; // xmm2_8
  unsigned __int64 *result; // rax

  v7 = a2 + 72 * (((__int64)(a3 - a2) / 72) >> 1);
  std::_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
    a2,
    a2 + 72 * (((__int64)(a3 - a2) / 72) >> 1),
    a3 - 72,
    a4);
  v8 = v7 + 72;
  if ( a2 < v7 )
  {
    v9 = v7;
    do
    {
      if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v9 - 72, v7) )
        break;
      if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v7, v10) )
        break;
      v7 = v9;
    }
    while ( a2 < v9 );
  }
  while ( v8 < a3
       && !(unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v8, v7)
       && !(unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v7, v8) )
    v8 += 72LL;
  v11 = (__int128 *)v8;
  v12 = v7;
  while ( 1 )
  {
    while ( (unsigned __int64)v11 < a3 )
    {
      if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v7, v11) )
        goto LABEL_17;
      if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v11, v7) )
        break;
      if ( (__int128 *)v8 != v11 )
      {
        v13 = *(_OWORD *)v8;
        v14 = *(_OWORD *)(v8 + 16);
        v15 = *(_OWORD *)(v8 + 32);
        v16 = *(_OWORD *)(v8 + 48);
        v17 = *(_QWORD *)(v8 + 64);
        *(_OWORD *)v8 = *v11;
        *(_OWORD *)(v8 + 16) = v11[1];
        *(_OWORD *)(v8 + 32) = v11[2];
        *(_OWORD *)(v8 + 48) = v11[3];
        *(_QWORD *)(v8 + 64) = *((_QWORD *)v11 + 8);
        *v11 = v13;
        v11[1] = v14;
        v11[2] = v15;
        v11[3] = v16;
        *((_QWORD *)v11 + 8) = v17;
      }
      v8 += 72LL;
LABEL_17:
      v11 = (__int128 *)((char *)v11 + 72);
    }
    v18 = v12 == a2;
    if ( v12 > a2 )
    {
      v19 = v12 - 72;
      do
      {
        if ( !(unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v19, v7) )
        {
          if ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v8, v7, v20) )
            break;
          v7 -= 72LL;
          if ( v7 != v20 )
          {
            v21 = *(_OWORD *)v7;
            v22 = *(_OWORD *)(v7 + 16);
            v23 = *(_OWORD *)(v7 + 32);
            v24 = *(_OWORD *)(v7 + 48);
            v25 = *(_QWORD *)(v7 + 64);
            *(_OWORD *)v7 = *(_OWORD *)v20;
            *(_OWORD *)(v7 + 16) = *(_OWORD *)(v20 + 16);
            *(_OWORD *)(v7 + 32) = *(_OWORD *)(v20 + 32);
            *(_OWORD *)(v7 + 48) = *(_OWORD *)(v20 + 48);
            *(_QWORD *)(v7 + 64) = *(_QWORD *)(v20 + 64);
            *(_OWORD *)v20 = v21;
            *(_OWORD *)(v20 + 16) = v22;
            *(_OWORD *)(v20 + 32) = v23;
            *(_OWORD *)(v20 + 48) = v24;
            *(_QWORD *)(v20 + 64) = v25;
          }
        }
        v12 -= 72LL;
        v19 = v20 - 72;
      }
      while ( a2 < v12 );
      v18 = v12 == a2;
    }
    if ( v18 )
      break;
    v12 -= 72LL;
    if ( v11 != (__int128 *)a3 )
    {
      v46 = *v11;
      v47 = v11[1];
      v48 = v11[2];
      v49 = v11[3];
      v50 = *((_QWORD *)v11 + 8);
      *v11 = *(_OWORD *)v12;
      v11[1] = *(_OWORD *)(v12 + 16);
      v11[2] = *(_OWORD *)(v12 + 32);
      v11[3] = *(_OWORD *)(v12 + 48);
      *((_QWORD *)v11 + 8) = *(_QWORD *)(v12 + 64);
      *(_OWORD *)v12 = v46;
      *(_OWORD *)(v12 + 16) = v47;
      *(_OWORD *)(v12 + 32) = v48;
      *(_OWORD *)(v12 + 48) = v49;
      *(_QWORD *)(v12 + 64) = v50;
      goto LABEL_17;
    }
    v7 -= 72LL;
    if ( v12 != v7 )
    {
      v36 = *(_OWORD *)v12;
      v37 = *(_OWORD *)(v12 + 16);
      v38 = *(_OWORD *)(v12 + 32);
      v39 = *(_OWORD *)(v12 + 48);
      v40 = *(_QWORD *)(v12 + 64);
      *(_OWORD *)v12 = *(_OWORD *)v7;
      *(_OWORD *)(v12 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(v12 + 32) = *(_OWORD *)(v7 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(v7 + 48);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(v7 + 64);
      *(_OWORD *)v7 = v36;
      *(_OWORD *)(v7 + 16) = v37;
      *(_OWORD *)(v7 + 32) = v38;
      *(_OWORD *)(v7 + 48) = v39;
      *(_QWORD *)(v7 + 64) = v40;
    }
    v41 = *(_OWORD *)v7;
    v8 -= 72LL;
    v42 = *(_OWORD *)(v7 + 16);
    v43 = *(_OWORD *)(v7 + 32);
    v44 = *(_OWORD *)(v7 + 48);
    v45 = *(_QWORD *)(v7 + 64);
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(v8 + 48);
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 64);
    *(_OWORD *)v8 = v41;
    *(_OWORD *)(v8 + 16) = v42;
    *(_OWORD *)(v8 + 32) = v43;
    *(_OWORD *)(v8 + 48) = v44;
    *(_QWORD *)(v8 + 64) = v45;
  }
  if ( v11 != (__int128 *)a3 )
  {
    if ( (__int128 *)v8 != v11 )
    {
      v26 = *(_OWORD *)v7;
      v27 = *(_OWORD *)(v7 + 16);
      v28 = *(_OWORD *)(v7 + 32);
      v29 = *(_OWORD *)(v7 + 48);
      v30 = *(_QWORD *)(v7 + 64);
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *(_OWORD *)(v7 + 16) = *(_OWORD *)(v8 + 16);
      *(_OWORD *)(v7 + 32) = *(_OWORD *)(v8 + 32);
      *(_OWORD *)(v7 + 48) = *(_OWORD *)(v8 + 48);
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 64);
      *(_OWORD *)v8 = v26;
      *(_OWORD *)(v8 + 16) = v27;
      *(_OWORD *)(v8 + 32) = v28;
      *(_OWORD *)(v8 + 48) = v29;
      *(_QWORD *)(v8 + 64) = v30;
    }
    v8 += 72LL;
    v31 = *(_OWORD *)v7;
    v32 = *(_OWORD *)(v7 + 16);
    v33 = *(_OWORD *)(v7 + 32);
    v34 = *(_OWORD *)(v7 + 48);
    v35 = *(_QWORD *)(v7 + 64);
    *(_OWORD *)v7 = *v11;
    *(_OWORD *)(v7 + 16) = v11[1];
    *(_OWORD *)(v7 + 32) = v11[2];
    *(_OWORD *)(v7 + 48) = v11[3];
    *(_QWORD *)(v7 + 64) = *((_QWORD *)v11 + 8);
    v7 += 72LL;
    *v11 = v31;
    v11[1] = v32;
    v11[2] = v33;
    v11[3] = v34;
    *((_QWORD *)v11 + 8) = v35;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v8;
  return result;
}
