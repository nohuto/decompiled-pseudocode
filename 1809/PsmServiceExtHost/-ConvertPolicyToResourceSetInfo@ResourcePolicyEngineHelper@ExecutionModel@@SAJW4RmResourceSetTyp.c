/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180018100
 * Callers:
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001A1D8 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x180018484 (-GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001A340 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo()
{
  int v0; // edx
  __int64 v1; // r8
  __int64 v2; // r11
  unsigned __int8 v3; // bl
  unsigned int LegacyPriorityForActivityPriority; // eax
  __int64 v5; // r11
  unsigned __int8 v6; // cl
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 *v11; // r11
  unsigned int v12; // edx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // r8d
  int v16; // esi
  __int64 v17; // r14
  char v18; // bl
  unsigned int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // al
  _DWORD *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rax
  _DWORD v39[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  unsigned int v42; // [rsp+50h] [rbp-B0h]
  __int16 v43; // [rsp+58h] [rbp-A8h]
  char v44; // [rsp+5Ah] [rbp-A6h]
  unsigned int v45; // [rsp+5Ch] [rbp-A4h]
  int v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  unsigned int v51; // [rsp+90h] [rbp-70h]
  int v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  unsigned int v54; // [rsp+A8h] [rbp-58h]
  int v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  unsigned int v57; // [rsp+C0h] [rbp-40h]
  _DWORD v58[49]; // [rsp+D4h] [rbp-2Ch]
  __int64 v59; // [rsp+198h] [rbp+98h]
  unsigned int v60; // [rsp+1A4h] [rbp+A4h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v39);
  if ( !v2 || !v1 )
    return 2147942487LL;
  if ( v0 == 57 )
    v39[0] = 57;
  else
    v39[0] = v0;
  v3 = *(_BYTE *)(v2 + 60);
  v39[1] = -1;
  if ( v3 == 0xFF )
  {
    v3 = -1;
  }
  else if ( v3 <= 1u )
  {
    v3 = 1;
  }
  LegacyPriorityForActivityPriority = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v3);
  v6 = *(_BYTE *)(v5 + 61);
  v39[2] = LegacyPriorityForActivityPriority;
  v51 = LegacyPriorityForActivityPriority;
  v54 = LegacyPriorityForActivityPriority;
  v57 = LegacyPriorityForActivityPriority;
  v7 = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v6);
  v12 = *((_DWORD *)v11 + 28);
  v42 = v7;
  v47 = v11[3];
  v59 = v11[2];
  v48 = *v11;
  v13 = v9;
  if ( (v12 & 0x40000000) == 0 )
    v13 = v11[1];
  v14 = *((_DWORD *)v11 + 10) == 3;
  v40 = v8;
  v15 = 1;
  v53 = v13;
  v41 = v11[4];
  HIBYTE(v40) = v3;
  v52 = 1;
  if ( v14 )
  {
    v16 = 1;
    v46 = 1;
  }
  else
  {
    v16 = v46;
  }
  v50 = *((unsigned int *)v11 + 11);
  v17 = 2LL;
  v39[3] = *((_DWORD *)v11 + 12);
  v56 = *((unsigned int *)v11 + 13);
  v60 = v60 & 0xFFF3FFFF | ((v12 & 0x40 | (4 * (v12 & 8))) << 13);
  v49 = v9;
  v55 = 2;
  v43 = v43 & 0xFFE4 | (v12 >> 4) & 1 | (2 * ((v12 >> 5) & 1 | (4 * ((v12 >> 14) & 1 | (2 * ((v12 >> 11) & 1))))));
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 4) != 0 )
    {
      v18 = 4;
    }
    else
    {
      v18 = 2;
      if ( (v12 & 2) != 0 )
        v18 = 3;
    }
    v19 = v12 >> 8;
  }
  else
  {
    v18 = v9;
    v19 = v12 >> 8;
    if ( (v12 & 0x100) != 0 )
      v18 = 1;
  }
  v44 = v18 | (v44 ^ (v44 ^ ((unsigned __int8)(v12 >> 13) << 6)) & 0x40) & 0xC0 | (8
                                                                                 * (((v12 & 0x400) != 0) | (2 * ((2 * (v19 & 1)) | ((v12 & 0x200) != 0)))));
  if ( (v12 & 0x1000) != 0 )
  {
    v15 = v9;
  }
  else if ( (v12 & 0x80u) != 0 )
  {
    v15 = 2;
  }
  v20 = v9;
  if ( v16 )
    v20 = 4;
  v45 = v20 | v15 & 0xFFFFFFF3 | (v12 >> 3) & 8;
  do
  {
    v21 = *((_BYTE *)v11 + v9 + 64);
    if ( v21 )
      v58[v9] = v21;
    ++v9;
  }
  while ( v9 < 47 );
  v22 = v39;
  do
  {
    v10 += 128LL;
    v23 = *(_OWORD *)v22;
    v24 = *((_OWORD *)v22 + 1);
    v22 += 32;
    *(_OWORD *)(v10 - 128) = v23;
    v25 = *((_OWORD *)v22 - 6);
    *(_OWORD *)(v10 - 112) = v24;
    v26 = *((_OWORD *)v22 - 5);
    *(_OWORD *)(v10 - 96) = v25;
    v27 = *((_OWORD *)v22 - 4);
    *(_OWORD *)(v10 - 80) = v26;
    v28 = *((_OWORD *)v22 - 3);
    *(_OWORD *)(v10 - 64) = v27;
    v29 = *((_OWORD *)v22 - 2);
    *(_OWORD *)(v10 - 48) = v28;
    v30 = *((_OWORD *)v22 - 1);
    *(_OWORD *)(v10 - 32) = v29;
    *(_OWORD *)(v10 - 16) = v30;
    --v17;
  }
  while ( v17 );
  v31 = *((_OWORD *)v22 + 1);
  *(_OWORD *)v10 = *(_OWORD *)v22;
  v32 = *((_OWORD *)v22 + 2);
  *(_OWORD *)(v10 + 16) = v31;
  v33 = *((_OWORD *)v22 + 3);
  *(_OWORD *)(v10 + 32) = v32;
  v34 = *((_OWORD *)v22 + 4);
  *(_OWORD *)(v10 + 48) = v33;
  v35 = *((_OWORD *)v22 + 5);
  *(_OWORD *)(v10 + 64) = v34;
  v36 = *((_OWORD *)v22 + 6);
  v37 = *((_QWORD *)v22 + 14);
  *(_OWORD *)(v10 + 80) = v35;
  *(_OWORD *)(v10 + 96) = v36;
  *(_QWORD *)(v10 + 112) = v37;
  return 0LL;
}
