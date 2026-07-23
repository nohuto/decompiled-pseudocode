/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140308974
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x1408AD974 (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401279C4 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
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
  _DWORD *v37; // r11
  int v38; // r9d
  int v39; // r10d
  int v40; // r8d
  _QWORD *v41; // rcx
  _DWORD *v42; // rdx
  _QWORD *v43; // rcx
  _DWORD *v44; // rdx
  _QWORD *v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  _DWORD *v49; // rdx
  _QWORD *v50; // rcx
  _DWORD *v51; // rdx
  _QWORD *v52; // rcx
  _DWORD *v53; // rcx
  __int64 v54; // rax
  _DWORD *v55; // rdi
  _QWORD *result; // rax
  __int64 v57; // [rsp+70h] [rbp+48h] BYREF
  int v58; // [rsp+78h] [rbp+50h] BYREF
  int v59; // [rsp+80h] [rbp+58h] BYREF
  int v60; // [rsp+88h] [rbp+60h] BYREF

  v3 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v57 = a1;
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
  v57 = a1 + 80;
  *v8 = v7;
  v9 = v57;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v57 = a1 + 2016;
  *v10 = v8;
  v10[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v11 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v11 = v9;
  v12 = v57;
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
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v57, &v59);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2016, &v58, &v60);
  v37 = (_DWORD *)(*(_QWORD *)(a2 + 8) + v36);
  v38 = v58;
  v39 = v60;
  v40 = v60 + v59;
  *v37 = v58 + v57;
  v41 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v41 = v37;
  v41[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v42 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v42 = v40;
  v43 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v43 = v42;
  v43[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v44 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v44 = *(_DWORD *)(a1 + 856);
  v45 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v45 = v44;
  v45[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v46 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v47 = *(unsigned int *)(a2 + 16);
  if ( a1 != -2872 )
  {
    *v46 = *(_DWORD *)(a1 + 2872);
    v47 = *(unsigned int *)(a2 + 16);
  }
  v48 = (_QWORD *)(*(_QWORD *)a2 + 16 * v47);
  *v48 = v46;
  v48[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v49 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v49 = v38;
  v50 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v50 = v49;
  v50[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v51 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v51 = v39;
  v52 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v52 = v51;
  v52[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v53 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v54 = *(unsigned int *)(a2 + 16);
  v55 = (_DWORD *)(a1 + 1180);
  if ( v55 )
  {
    *v53 = *v55;
    v54 = *(unsigned int *)(a2 + 16);
  }
  result = (_QWORD *)(*(_QWORD *)a2 + 16 * v54);
  *result = v53;
  result[1] = 4LL;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 24) += 4;
  return result;
}
