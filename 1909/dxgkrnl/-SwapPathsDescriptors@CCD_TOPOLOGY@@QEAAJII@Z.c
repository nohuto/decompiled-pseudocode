/*
 * XREFs of ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02C14A8
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0620 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02C1030 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C02C1128 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C4C04 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4CFC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00D98C4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SwapPathsDescriptors(void **this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  _WORD *v6; // r9
  unsigned __int16 v7; // ax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int64 v11; // r10
  _OWORD *v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  char *v22; // rax
  __int64 v23; // r9
  char *v24; // rax
  __int128 v25; // xmm1
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _BYTE v35[272]; // [rsp+20h] [rbp-118h] BYREF

  v3 = a3;
  v5 = a2;
  CCD_TOPOLOGY::ClearModalitySetId(this);
  v6 = this[8];
  v7 = 0;
  if ( v6 )
    v7 = v6[10];
  if ( (unsigned int)v5 >= v7 || (unsigned int)v3 >= v7 )
    return 3221225485LL;
  if ( (_DWORD)v5 != (_DWORD)v3 )
  {
    v9 = 2LL;
    v10 = v35;
    v11 = 2LL;
    v12 = &v6[136 * v5 + 24];
    v13 = v12;
    do
    {
      v14 = v13[1];
      *v10 = *v13;
      v15 = v13[2];
      v10[1] = v14;
      v16 = v13[3];
      v10[2] = v15;
      v17 = v13[4];
      v10[3] = v16;
      v18 = v13[5];
      v10[4] = v17;
      v19 = v13[6];
      v10[5] = v18;
      v20 = v13[7];
      v13 += 8;
      v10[6] = v19;
      v10 += 8;
      *(v10 - 1) = v20;
      --v11;
    }
    while ( v11 );
    v21 = *v13;
    v22 = (char *)(v6 + 24);
    v23 = 2LL;
    *v10 = v21;
    v24 = &v22[272 * v3];
    do
    {
      *v12 = *(_OWORD *)v24;
      v12[1] = *((_OWORD *)v24 + 1);
      v12[2] = *((_OWORD *)v24 + 2);
      v12[3] = *((_OWORD *)v24 + 3);
      v12[4] = *((_OWORD *)v24 + 4);
      v12[5] = *((_OWORD *)v24 + 5);
      v12[6] = *((_OWORD *)v24 + 6);
      v12 += 8;
      v25 = *((_OWORD *)v24 + 7);
      v24 += 128;
      *(v12 - 1) = v25;
      --v23;
    }
    while ( v23 );
    *v12 = *(_OWORD *)v24;
    v26 = (char *)this[8] + 272 * v3 + 48;
    v27 = v35;
    do
    {
      v28 = v27[1];
      *v26 = *v27;
      v29 = v27[2];
      v26[1] = v28;
      v30 = v27[3];
      v26[2] = v29;
      v31 = v27[4];
      v26[3] = v30;
      v32 = v27[5];
      v26[4] = v31;
      v33 = v27[6];
      v26[5] = v32;
      v34 = v27[7];
      v27 += 8;
      v26[6] = v33;
      v26 += 8;
      *(v26 - 1) = v34;
      --v9;
    }
    while ( v9 );
    *v26 = *v27;
  }
  return 0LL;
}
