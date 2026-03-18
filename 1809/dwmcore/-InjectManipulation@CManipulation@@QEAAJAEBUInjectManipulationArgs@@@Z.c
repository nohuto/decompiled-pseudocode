/*
 * XREFs of ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801A58EC
 * Callers:
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18019AC20 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z @ 0x1801A5B6C (-ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_INJEC.c)
 * Callees:
 *     ??0ManipulationData@@QEAA@XZ @ 0x1801A5514 (--0ManipulationData@@QEAA@XZ.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801A6340 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 */

__int64 __fastcall CManipulation::InjectManipulation(CManipulation *this, const struct InjectManipulationArgs *a2)
{
  int *v2; // r9
  __int64 v3; // xmm0_8
  __int64 v4; // xmm2_8
  bool v5; // cf
  int v6; // eax
  int v7; // ecx
  __int64 v8; // xmm0_8
  int v9; // eax
  bool v10; // dl
  __int64 v11; // xmm0_8
  int v12; // eax
  CManipulation *v13; // r10
  __int64 v15; // [rsp+20h] [rbp-69h] BYREF
  int v16; // [rsp+28h] [rbp-61h]
  __int64 v17; // [rsp+2Ch] [rbp-5Dh]
  int v18; // [rsp+34h] [rbp-55h]
  __int64 v19; // [rsp+38h] [rbp-51h]
  int v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+44h] [rbp-45h]
  int v22; // [rsp+4Ch] [rbp-3Dh]
  int v23; // [rsp+50h] [rbp-39h]
  __int64 v24; // [rsp+54h] [rbp-35h]
  int v25; // [rsp+5Ch] [rbp-2Dh]
  __int64 v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  __int64 v28; // [rsp+ACh] [rbp+23h]
  int v29; // [rsp+B4h] [rbp+2Bh]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]
  int v32; // [rsp+C0h] [rbp+37h]
  int v33; // [rsp+C4h] [rbp+3Bh]
  int v34; // [rsp+C8h] [rbp+3Fh]
  int v35; // [rsp+CCh] [rbp+43h]
  int v36; // [rsp+D0h] [rbp+47h]
  char v37; // [rsp+D4h] [rbp+4Bh]

  ManipulationData::ManipulationData((ManipulationData *)&v15);
  v3 = *((_QWORD *)v2 + 5);
  v4 = *(_QWORD *)(v2 + 7);
  v16 = v2[9];
  v18 = v2[12];
  v20 = v2[15];
  v22 = v2[18];
  v25 = v2[29];
  v27 = v2[22];
  v29 = v2[25];
  v31 = *v2;
  v32 = v2[30];
  v33 = v2[31];
  v5 = v2[1] != 0;
  v17 = v3;
  v6 = v2[2];
  v7 = v5 ? 4 : 0;
  v19 = *(_QWORD *)(v2 + 13);
  v8 = *((_QWORD *)v2 + 8);
  v5 = v6 != 0;
  v9 = v2[3];
  v34 = v7;
  v21 = v8;
  LODWORD(v8) = v2[19];
  v35 = v5 ? 4 : 0;
  v23 = v8;
  v10 = v2[4] != 0;
  v24 = *(_QWORD *)(v2 + 27);
  v11 = *((_QWORD *)v2 + 10);
  v36 = v9 != 0 ? 4 : 0;
  v12 = v2[5];
  v26 = v11;
  v28 = *(_QWORD *)(v2 + 23);
  v30 = v2[26];
  v37 = (v12 != 0 ? 2 : 0) | v37 & 0xFC | v10 & 0xFD;
  v15 = v4;
  return CManipulation::Update(v13, (struct ManipulationData *)&v15);
}
