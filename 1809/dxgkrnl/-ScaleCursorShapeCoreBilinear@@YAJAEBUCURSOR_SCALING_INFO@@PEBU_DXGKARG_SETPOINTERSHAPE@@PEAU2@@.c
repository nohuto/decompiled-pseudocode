/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C02228A4
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0130C24 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Value; // r11d
  const struct CURSOR_SCALING_INFO *v6; // rbp
  __int64 v7; // rax
  UINT v8; // esi
  __int64 v9; // rax
  UINT v10; // r13d
  UINT v11; // r15d
  bool v12; // r11
  UINT v13; // ecx
  bool v14; // si
  int v15; // r14d
  float v16; // xmm7_4
  float v17; // xmm6_4
  int v18; // r12d
  float v19; // xmm5_4
  __int64 v20; // rbp
  int v21; // r13d
  float v22; // xmm4_4
  char *v23; // r10
  __int64 v24; // r9
  __int64 Pitch; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  unsigned int v34; // r8d
  int v35; // edx
  __int16 v36; // ax
  int v37; // r10d
  int v38; // r9d
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // ecx
  UINT v44; // eax
  unsigned int v45; // ecx
  unsigned int v47; // [rsp+20h] [rbp-B8h]
  unsigned int v48; // [rsp+24h] [rbp-B4h]
  int v49; // [rsp+28h] [rbp-B0h]
  int v50; // [rsp+2Ch] [rbp-ACh]
  int v51; // [rsp+30h] [rbp-A8h]
  unsigned int v52; // [rsp+34h] [rbp-A4h]
  unsigned int v53; // [rsp+40h] [rbp-98h]
  UINT v54; // [rsp+68h] [rbp-70h]
  const struct CURSOR_SCALING_INFO *v55; // [rsp+E0h] [rbp+8h]
  int v56; // [rsp+E8h] [rbp+10h]
  unsigned int v57; // [rsp+F0h] [rbp+18h]
  unsigned int v58; // [rsp+F8h] [rbp+20h]

  v55 = a1;
  Value = a2->Flags.Value;
  v6 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 721LL;
    WdLogEvent5_WdAssertion(v7);
    Value = a2->Flags.Value;
  }
  v8 = a3->Flags.Value;
  LOBYTE(a1) = (a3->Flags.Value & 2) == 0;
  if ( ((unsigned __int8)a1 & ((Value & 4) == 0)) != 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 722LL;
    WdLogEvent5_WdAssertion(v9);
    Value = a2->Flags.Value;
    v8 = a3->Flags.Value;
  }
  v10 = *((_DWORD *)v6 + 5);
  v11 = *((_DWORD *)v6 + 4);
  v12 = (Value & 4) != 0;
  v13 = 4 * v11;
  v14 = (v8 & 4) != 0;
  v15 = 0;
  v54 = v10;
  v16 = (float)(int)a2->Width / (float)(int)v11;
  v17 = (float)(int)a2->Height / (float)(int)v10;
  if ( v10 )
  {
    do
    {
      v18 = 0;
      if ( v11 )
      {
        v19 = (float)v15 * v17;
        v20 = v13 * v15;
        v21 = (int)v19;
        do
        {
          v22 = (float)v18 * v16;
          v23 = (char *)a2->pPixels + (unsigned int)(4 * (int)v22) + (unsigned __int64)(v21 * a2->Pitch);
          v24 = a2->Width - 1 != (int)v22 ? 4 : 0;
          Pitch = 0LL;
          if ( v21 != a2->Height - 1 )
            Pitch = a2->Pitch;
          v26 = (unsigned int)Pitch;
          v27 = v24 + Pitch;
          v48 = *(_DWORD *)&v23[v27];
          v28 = v22 - (float)(int)v22;
          v29 = v19 - (float)v21;
          v30 = (float)((float)(1.0 - v29) * v28) * 256.0;
          v31 = (float)((float)(1.0 - v29) * (float)(1.0 - v28)) * 256.0;
          v32 = (float)((float)(1.0 - v28) * v29) * 256.0;
          v33 = (float)(v29 * v28) * 256.0;
          v52 = HIBYTE(v48);
          v53 = HIBYTE(v48);
          v51 = HIBYTE(*(_DWORD *)&v23[v26]);
          v47 = *(_DWORD *)&v23[v26];
          v50 = HIBYTE(*(_DWORD *)&v23[v24]);
          v58 = *(_DWORD *)&v23[v24];
          v34 = HIBYTE(v58);
          v57 = *(_DWORD *)v23;
          v49 = HIBYTE(*(_DWORD *)v23);
          v56 = (((int)v31 * (unsigned __int8)v23[2]
                + (int)v30 * (unsigned __int8)v23[v24 + 2]
                + (int)v32 * (unsigned __int8)v23[v26 + 2]
                + (int)v33 * (unsigned __int8)v23[v27 + 2]) << 8) & 0xFF0000;
          LOWORD(v27) = (int)v32 * (unsigned __int8)v23[v26 + 1] + (int)v33 * (unsigned __int8)v23[v27 + 1];
          v35 = (int)v31;
          LOWORD(v27) = (int)v30 * (unsigned __int8)v23[v24 + 1] + v27;
          v36 = (unsigned __int8)v23[1];
          v37 = (int)v30;
          v38 = (unsigned __int8)((unsigned __int16)((int)v33 * (unsigned __int8)v48
                                                   + (int)v32 * (unsigned __int8)v47
                                                   + (int)v30 * (unsigned __int8)v58
                                                   + (int)v31 * (unsigned __int8)v57) >> 8) | ((unsigned __int16)(int)v31
                                                                                             * v36
                                                                                             + (_WORD)v27) & 0xFF00 | v56;
          if ( v14 )
          {
            v39 = v38 | ((((unsigned __int16)(int)v33 * (_WORD)v53
                         + (unsigned __int16)(int)v32 * (_WORD)v51
                         + (_WORD)v35 * (_WORD)v49
                         + (_WORD)v37 * (_WORD)v34) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( v39 >= 0x1000000 )
            {
              v40 = v38 & 0xFFFF00FF | ((((unsigned __int16)(int)v33 * (_WORD)v53
                                        + (unsigned __int16)(int)v32 * (_WORD)v51
                                        + (_WORD)v35 * (_WORD)v49
                                        + (_WORD)v37 * (_WORD)v34) & 0x8000) != 0
                                      ? 0xFF000000
                                      : 0) | (((v48 & (v48 >> 8) | v47 & (v47 >> 8) | v58 & (v58 >> 8) | v57 & (v57 >> 8)) & 0xFFFF0000) != 0
                                            ? 0xFF00
                                            : 0);
              v39 = ((unsigned __int8)(v40 ^ BYTE1(v40)) ^ v40 ^ (((unsigned __int8)(v40 ^ BYTE1(v40)) ^ v40) << 16)) & 0xFF0000 ^ (unsigned __int8)(v40 ^ BYTE1(v40)) ^ v40;
            }
          }
          else
          {
            if ( v12 )
              v41 = (int)v33 * (255 - v52) + (int)v32 * (255 - v51) + v37 * (255 - v50) + v35 * (255 - v49);
            else
              v41 = (int)v33 * v52 + (int)v32 * v51 + v37 * v50 + v35 * v49;
            v39 = v38 | (v41 << 16) & 0xFF000000;
          }
          v42 = (unsigned int)(4 * v18++);
          *(_DWORD *)((char *)a3->pPixels + v20 + v42) = v39;
        }
        while ( v18 < v11 );
        v10 = v54;
        v13 = 4 * v11;
      }
      ++v15;
    }
    while ( v15 < v10 );
    v6 = v55;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v13;
  v43 = *((_DWORD *)v6 + 2);
  a3->Width = v11;
  a3->Height = v10;
  v44 = (v43 + *(_DWORD *)v6 * a2->XHot - 1) / v43;
  v45 = *((_DWORD *)v6 + 3);
  a3->XHot = v44;
  a3->YHot = (v45 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v45;
  return 0LL;
}
