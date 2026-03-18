/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180221908
 * Callers:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801F4B4C (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180221640 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        bool a6,
        struct InteractionOutput *a7)
{
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm1_4
  int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  int v15; // xmm1_4
  __m128 v16; // xmm2
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __m128 v20; // xmm1
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  _OWORD v28[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h] BYREF
  int v30; // [rsp+128h] [rbp+28h]
  __int64 v31; // [rsp+130h] [rbp+30h]
  unsigned int v32; // [rsp+138h] [rbp+38h]
  unsigned int v33; // [rsp+13Ch] [rbp+3Ch]
  __int64 v34; // [rsp+140h] [rbp+40h]
  unsigned int v35; // [rsp+148h] [rbp+48h]
  unsigned int v36; // [rsp+14Ch] [rbp+4Ch]

  memset_0(&v21, 0, 0x70uLL);
  v11 = *((_DWORD *)a2 + 2);
  v12 = *((_DWORD *)a2 + 3);
  HIDWORD(v21) = 0;
  LODWORD(v24) = 0;
  *(_QWORD *)&v21 = __PAIR64__(v12, v11);
  DWORD2(v21) = *((_DWORD *)a2 + 4);
  DWORD1(v22) = *((_DWORD *)a2 + 11);
  v13 = *((_DWORD *)a2 + 10);
  DWORD1(v23) = *((_DWORD *)a2 + 7);
  v14 = *((_DWORD *)a2 + 9);
  LODWORD(v22) = v13;
  LODWORD(v23) = *((_DWORD *)a2 + 6);
  *((_QWORD *)&v23 + 1) = __PAIR64__(*((_DWORD *)a2 + 8), v14);
  DWORD2(v22) = *((_DWORD *)a2 + 12);
  DWORD1(v26) = 2;
  v15 = *((_DWORD *)a2 + 13);
  v28[0] = v21;
  HIDWORD(v22) = v15;
  v28[2] = v23;
  v28[1] = v22;
  v28[4] = v25;
  v28[3] = v24;
  v28[6] = v27;
  v28[5] = v26;
  memset_0(&v29, 0, 0x70uLL);
  CInteractionContextTransformHelper::TransformOutput(
    this,
    (const struct INTERACTION_CHANGESET *)v28,
    a3,
    a4,
    a5,
    a6,
    (struct INTERACTION_CHANGESET *)&v29);
  memset_0(&v21, 0, 0x3CuLL);
  *((_QWORD *)&v21 + 1) = v29;
  LODWORD(v22) = v30;
  *((_QWORD *)&v23 + 1) = v31;
  *((_QWORD *)&v22 + 1) = v34;
  v16 = (__m128)v33;
  v17 = DWORD2(v24);
  *(_QWORD *)&v23 = __PAIR64__(v35, v36);
  v18 = v22;
  *(_OWORD *)a7 = v21;
  v19 = v23;
  *((_OWORD *)a7 + 1) = v18;
  v20 = (__m128)v32;
  *((_OWORD *)a7 + 2) = v19;
  *((_QWORD *)a7 + 6) = _mm_unpacklo_ps(v20, v16).m128_u64[0];
  *((_DWORD *)a7 + 14) = v17;
}
