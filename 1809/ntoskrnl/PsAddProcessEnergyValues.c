/*
 * XREFs of PsAddProcessEnergyValues @ 0x14008E660
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1405FD7EC (PopEtEnergyTrackerUpdateAggregate.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FE228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140601010 (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406047D8 (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsAddProcessEnergyValues(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // edx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // edx
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // edx
  unsigned int v24; // r9d
  int v25; // eax
  int v26; // edx
  unsigned int v27; // r9d
  __int64 v28; // r8
  int *v29; // rax
  __int64 v30; // r9
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 result; // rax
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx

  *(_QWORD *)(a1 + 64) += *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) += *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) += *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) += *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) += *(_QWORD *)(a2 + 96);
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = v4 ^ ((v4 + (*(_DWORD *)(a2 + 108) & 0x7FFFFFFF)) ^ v4) & 0x7FFFFFFF;
  if ( v5 <= *(_DWORD *)(a2 + 104) )
    v5 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 104) = v5;
  *(_DWORD *)(a1 + 116) ^= ((*(_DWORD *)(a1 + 116) + (*(_DWORD *)(a2 + 116) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 116)) & 0x7FFFFFFF;
  v6 = *(_DWORD *)(a1 + 112);
  if ( v6 <= *(_DWORD *)(a2 + 112) )
    v6 = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 112) = v6;
  *(_DWORD *)(a1 + 124) ^= ((*(_DWORD *)(a1 + 124) + (*(_DWORD *)(a2 + 124) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 124)) & 0x7FFFFFFF;
  v7 = *(_DWORD *)(a1 + 120);
  if ( v7 <= *(_DWORD *)(a2 + 120) )
    v7 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 120) = v7;
  v8 = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 388) ^= ((*(_DWORD *)(a1 + 388) + (*(_DWORD *)(a2 + 388) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 388)) & 0x7FFFFFFF;
  if ( v8 <= *(_DWORD *)(a2 + 384) )
    v8 = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(a1 + 384) = v8;
  *(_DWORD *)(a1 + 396) ^= ((*(_DWORD *)(a1 + 396) + (*(_DWORD *)(a2 + 396) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 396)) & 0x7FFFFFFF;
  v9 = *(_DWORD *)(a1 + 392);
  if ( v9 <= *(_DWORD *)(a2 + 392) )
    v9 = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(a1 + 392) = v9;
  *(_DWORD *)(a1 + 404) ^= ((*(_DWORD *)(a1 + 404) + (*(_DWORD *)(a2 + 404) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 404)) & 0x7FFFFFFF;
  v10 = *(_DWORD *)(a1 + 400);
  if ( v10 <= *(_DWORD *)(a2 + 400) )
    v10 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a1 + 400) = v10;
  *(_DWORD *)(a1 + 412) ^= ((*(_DWORD *)(a1 + 412) + (*(_DWORD *)(a2 + 412) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 412)) & 0x7FFFFFFF;
  v11 = *(_DWORD *)(a1 + 408);
  if ( v11 <= *(_DWORD *)(a2 + 408) )
    v11 = *(_DWORD *)(a2 + 408);
  *(_DWORD *)(a1 + 408) = v11;
  *(_DWORD *)(a1 + 420) ^= ((*(_DWORD *)(a1 + 420) + (*(_DWORD *)(a2 + 420) & 0x7FFFFFFF)) ^ *(_DWORD *)(a1 + 420)) & 0x7FFFFFFF;
  v12 = *(_DWORD *)(a1 + 416);
  if ( v12 <= *(_DWORD *)(a2 + 416) )
    v12 = *(_DWORD *)(a2 + 416);
  *(_DWORD *)(a1 + 416) = v12;
  v13 = -1;
  v14 = *(_DWORD *)(a2 + 128);
  if ( v14 == -1 || (v15 = *(_DWORD *)(a1 + 128), ~v14 < v15) )
    v16 = -1;
  else
    v16 = v15 + v14;
  *(_DWORD *)(a1 + 128) = v16;
  v17 = *(_DWORD *)(a2 + 132);
  if ( v17 == -1 || (v18 = *(_DWORD *)(a1 + 132), ~v17 < v18) )
    v19 = -1;
  else
    v19 = v18 + v17;
  *(_DWORD *)(a1 + 132) = v19;
  v20 = *(_DWORD *)(a2 + 136);
  if ( v20 == -1 || (v21 = *(_DWORD *)(a1 + 136), ~v20 < v21) )
    v22 = -1;
  else
    v22 = v21 + v20;
  *(_DWORD *)(a1 + 136) = v22;
  v23 = *(_DWORD *)(a2 + 424);
  if ( v23 == -1 || (v24 = *(_DWORD *)(a1 + 424), ~v23 < v24) )
    v25 = -1;
  else
    v25 = v24 + v23;
  *(_DWORD *)(a1 + 424) = v25;
  v26 = *(_DWORD *)(a2 + 428);
  if ( v26 != -1 )
  {
    v27 = *(_DWORD *)(a1 + 428);
    if ( ~v26 >= v27 )
      v13 = v27 + v26;
  }
  v28 = a2 - a1;
  *(_DWORD *)(a1 + 428) = v13;
  v29 = (int *)(a1 + 284);
  v30 = 2LL;
  do
  {
    v31 = *(int *)((char *)v29 + v28 - 12);
    v32 = *(v29 - 3);
    if ( v31 > v32 )
    {
      *(v29 - 3) = v31;
      if ( v31 - v32 < 0x20 )
      {
        *(v29 - 2) <<= v31 - v32;
        v55 = *(v29 - 2) | *(int *)((char *)v29 + v28 - 8);
      }
      else
      {
        *(v29 - 2) = 0;
        v55 = *(int *)((char *)v29 + v28 - 8);
      }
      *(v29 - 2) = v55;
    }
    else
    {
      v33 = v32 - v31;
      if ( v33 < 0x20 )
        *(v29 - 2) |= *(int *)((char *)v29 + v28 - 8) << v33;
    }
    v34 = *(int *)((char *)v29 + v28 - 4);
    v35 = *(v29 - 1);
    if ( v34 > v35 )
    {
      *(v29 - 1) = v34;
      if ( v34 - v35 < 0x20 )
      {
        *v29 <<= v34 - v35;
        v56 = *v29 | *(int *)((char *)v29 + v28);
      }
      else
      {
        *v29 = 0;
        v56 = *(int *)((char *)v29 + v28);
      }
      *v29 = v56;
    }
    else
    {
      v36 = v35 - v34;
      if ( v36 < 0x20 )
        *v29 |= *(int *)((char *)v29 + v28) << v36;
    }
    v37 = *(int *)((char *)v29 + v28 + 4);
    v38 = v29[1];
    if ( v37 > v38 )
    {
      v29[1] = v37;
      if ( v37 - v38 < 0x20 )
      {
        v29[2] <<= v37 - v38;
        v57 = v29[2] | *(int *)((char *)v29 + v28 + 8);
      }
      else
      {
        v29[2] = 0;
        v57 = *(int *)((char *)v29 + v28 + 8);
      }
      v29[2] = v57;
    }
    else
    {
      v39 = v38 - v37;
      if ( v39 < 0x20 )
        v29[2] |= *(int *)((char *)v29 + v28 + 8) << v39;
    }
    v40 = *(int *)((char *)v29 + v28 + 12);
    v41 = v29[3];
    if ( v40 > v41 )
    {
      v29[3] = v40;
      if ( v40 - v41 < 0x20 )
      {
        v29[4] <<= v40 - v41;
        v58 = v29[4] | *(int *)((char *)v29 + v28 + 16);
      }
      else
      {
        v29[4] = 0;
        v58 = *(int *)((char *)v29 + v28 + 16);
      }
      v29[4] = v58;
    }
    else
    {
      v42 = v41 - v40;
      if ( v42 < 0x20 )
        v29[4] |= *(int *)((char *)v29 + v28 + 16) << v42;
    }
    v43 = *(int *)((char *)v29 + v28 + 20);
    v44 = v29[5];
    if ( v43 > v44 )
    {
      v29[5] = v43;
      if ( v43 - v44 < 0x20 )
      {
        v29[6] <<= v43 - v44;
        v59 = v29[6] | *(int *)((char *)v29 + v28 + 24);
      }
      else
      {
        v29[6] = 0;
        v59 = *(int *)((char *)v29 + v28 + 24);
      }
      v29[6] = v59;
    }
    else
    {
      v45 = v44 - v43;
      if ( v45 < 0x20 )
        v29[6] |= *(int *)((char *)v29 + v28 + 24) << v45;
    }
    v46 = *(int *)((char *)v29 + v28 + 28);
    v47 = v29[7];
    if ( v46 > v47 )
    {
      v29[7] = v46;
      if ( v46 - v47 < 0x20 )
      {
        v29[8] <<= v46 - v47;
        v60 = v29[8] | *(int *)((char *)v29 + v28 + 32);
      }
      else
      {
        v29[8] = 0;
        v60 = *(int *)((char *)v29 + v28 + 32);
      }
      v29[8] = v60;
    }
    else
    {
      v48 = v47 - v46;
      if ( v48 < 0x20 )
        v29[8] |= *(int *)((char *)v29 + v28 + 32) << v48;
    }
    v49 = *(int *)((char *)v29 + v28 + 36);
    v50 = v29[9];
    if ( v49 > v50 )
    {
      v29[9] = v49;
      if ( v49 - v50 < 0x20 )
      {
        v29[10] <<= v49 - v50;
        v61 = v29[10] | *(int *)((char *)v29 + v28 + 40);
      }
      else
      {
        v29[10] = 0;
        v61 = *(int *)((char *)v29 + v28 + 40);
      }
      v29[10] = v61;
    }
    else
    {
      v51 = v50 - v49;
      if ( v51 < 0x20 )
        v29[10] |= *(int *)((char *)v29 + v28 + 40) << v51;
    }
    v29 += 14;
    --v30;
  }
  while ( v30 );
  v52 = (_QWORD *)(a1 + 152);
  v53 = 4LL;
  do
  {
    *(v52 - 19) += *(_QWORD *)((char *)v52 + v28 - 152);
    *(v52 - 1) += *(_QWORD *)((char *)v52 + v28 - 8);
    v52[7] += *(_QWORD *)((char *)v52 + v28 + 56);
    *(v52 - 18) += *(_QWORD *)((char *)v52 + v28 - 144);
    *v52 += *(_QWORD *)((char *)v52 + v28);
    result = *(_QWORD *)((char *)v52 + v28 + 64);
    v52[8] += result;
    v52 += 2;
    --v53;
  }
  while ( v53 );
  return result;
}
