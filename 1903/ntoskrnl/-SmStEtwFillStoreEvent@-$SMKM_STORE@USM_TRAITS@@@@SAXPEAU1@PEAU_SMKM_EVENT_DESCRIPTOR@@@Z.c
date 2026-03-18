/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1403261EC
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x1408E9654 (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140126400 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

_QWORD *__fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // xmm0_8
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // xmm0_8
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rdx
  _QWORD *v20; // rcx
  _DWORD *v21; // rdx
  _QWORD *v22; // rcx
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  _QWORD *v25; // rax
  _DWORD *v26; // rdx
  _QWORD *v27; // rcx
  _WORD *v28; // rdx
  _QWORD *v29; // rcx
  _WORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  _DWORD *v33; // rdx
  unsigned int v34; // ecx
  _QWORD *v35; // rax
  __int64 v36; // r11
  __int64 v37; // r10
  _DWORD *v38; // r10
  int v39; // r9d
  int v40; // esi
  int v41; // r8d
  _QWORD *v42; // rcx
  _DWORD *v43; // rdx
  _QWORD *v44; // rcx
  _DWORD *v45; // rdx
  _QWORD *v46; // rcx
  _DWORD *v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rax
  _DWORD *v50; // rdx
  _QWORD *v51; // rcx
  _DWORD *v52; // rdx
  _QWORD *v53; // rcx
  _DWORD *v54; // rcx
  __int64 v55; // rax
  _DWORD *v56; // rbx
  _QWORD *result; // rax
  __int64 v58; // [rsp+60h] [rbp+40h] BYREF
  int v59; // [rsp+68h] [rbp+48h] BYREF
  int v60; // [rsp+70h] [rbp+50h] BYREF
  int v61; // [rsp+78h] [rbp+58h] BYREF

  v3 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v58 = a1;
  *v3 = a1;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v5 = v3;
  v5[1] = 8LL;
  ++*(_DWORD *)(a2 + 16);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 24) + 8);
  *(_DWORD *)(a2 + 24) = v6;
  if ( *(_BYTE *)(a1 + 6020) == 1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 24LL);
  else
    v7 = 0LL;
  v8 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v6);
  v58 = a1 + 80;
  *v8 = v7;
  v9 = v58;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v58 = a1 + 2016;
  *v10 = v8;
  v10[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v11 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v11 = v9;
  v12 = v58;
  v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v13 = v11;
  v13[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v14 = v12;
  v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v15 = v14;
  v15[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v16 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v17 = *(unsigned int *)(a2 + 16);
  if ( a1 != -6208 )
  {
    *v16 = *(_DWORD *)(a1 + 6208);
    v17 = *(unsigned int *)(a2 + 16);
  }
  v18 = (_QWORD *)(*(_QWORD *)a2 + 16 * v17);
  *v18 = v16;
  v18[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v19 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v19 = *(_DWORD *)(a1 + 2872) + *(_DWORD *)(a1 + 936);
  v20 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v20 = v19;
  v20[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v21 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v21 = 4096;
  v22 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v22 = v21;
  v22[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v23 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v24 = *(_DWORD *)(a2 + 16);
  if ( a1 != -16 )
  {
    *v23 = *(_DWORD *)(a1 + 16);
    v24 = *(_DWORD *)(a2 + 16);
  }
  v25 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v24);
  *v25 = v23;
  v25[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v26 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v26 = 8 * *(_DWORD *)(a1 + 4088);
  v27 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v27 = v26;
  v27[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v28 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v28 = *(unsigned __int8 *)(a1 + 6020);
  v29 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v29 = v28;
  v29[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  ++*(_DWORD *)(a2 + 16);
  v30 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v31 = *(unsigned int *)(a2 + 16);
  if ( a1 != -6016 )
  {
    *v30 = *(_WORD *)(a1 + 6016);
    v31 = *(unsigned int *)(a2 + 16);
  }
  v32 = (_QWORD *)(*(_QWORD *)a2 + 16 * v31);
  *v32 = v30;
  v32[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  ++*(_DWORD *)(a2 + 16);
  v33 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v34 = *(_DWORD *)(a2 + 16);
  if ( a1 != -88 )
  {
    *v33 = *(_DWORD *)(a1 + 88);
    v34 = *(_DWORD *)(a2 + 16);
  }
  v35 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v34);
  *v35 = v33;
  v35[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v58, &v60);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2016, &v59, &v61);
  v38 = (_DWORD *)(*(_QWORD *)(v36 + 8) + v37);
  v39 = v59;
  v40 = v61;
  v41 = v61 + v60;
  *v38 = v59 + v58;
  v42 = (_QWORD *)(*(_QWORD *)v36 + 16LL * *(unsigned int *)(v36 + 16));
  *v42 = v38;
  v42[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v43 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  *v43 = v41;
  v44 = (_QWORD *)(*(_QWORD *)v36 + 16LL * *(unsigned int *)(v36 + 16));
  *v44 = v43;
  v44[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v45 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  *v45 = *(_DWORD *)(a1 + 856);
  v46 = (_QWORD *)(*(_QWORD *)v36 + 16LL * *(unsigned int *)(v36 + 16));
  *v46 = v45;
  v46[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v47 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  v48 = *(unsigned int *)(v36 + 16);
  if ( a1 != -2872 )
  {
    *v47 = *(_DWORD *)(a1 + 2872);
    v48 = *(unsigned int *)(v36 + 16);
  }
  v49 = (_QWORD *)(*(_QWORD *)v36 + 16 * v48);
  *v49 = v47;
  v49[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v50 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  *v50 = v39;
  v51 = (_QWORD *)(*(_QWORD *)v36 + 16LL * *(unsigned int *)(v36 + 16));
  *v51 = v50;
  v51[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v52 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  *v52 = v40;
  v53 = (_QWORD *)(*(_QWORD *)v36 + 16LL * *(unsigned int *)(v36 + 16));
  *v53 = v52;
  v53[1] = 4LL;
  *(_DWORD *)(v36 + 24) += 4;
  ++*(_DWORD *)(v36 + 16);
  v54 = (_DWORD *)(*(_QWORD *)(v36 + 8) + *(unsigned int *)(v36 + 24));
  v55 = *(unsigned int *)(v36 + 16);
  v56 = (_DWORD *)(a1 + 1180);
  if ( v56 )
  {
    *v54 = *v56;
    v55 = *(unsigned int *)(v36 + 16);
  }
  result = (_QWORD *)(*(_QWORD *)v36 + 16 * v55);
  *result = v54;
  result[1] = 4LL;
  ++*(_DWORD *)(v36 + 16);
  *(_DWORD *)(v36 + 24) += 4;
  return result;
}
