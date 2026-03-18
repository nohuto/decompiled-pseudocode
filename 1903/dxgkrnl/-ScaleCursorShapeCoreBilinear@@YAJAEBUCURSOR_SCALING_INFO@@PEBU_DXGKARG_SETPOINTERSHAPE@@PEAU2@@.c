/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0256FF0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00F8460 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0256E9C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Value; // r9d
  const struct CURSOR_SCALING_INFO *v6; // rsi
  __int64 v7; // rax
  UINT v8; // r10d
  __int64 v9; // rax
  UINT v10; // r12d
  UINT v11; // r14d
  int v12; // ebp
  UINT v13; // ecx
  bool v14; // r9
  bool v15; // r10
  float v16; // xmm7_4
  float v17; // xmm6_4
  int v18; // r15d
  float v19; // xmm5_4
  __int64 v20; // r12
  int v21; // ebp
  float v22; // xmm4_4
  char *v23; // r11
  __int64 v24; // r13
  __int64 Pitch; // rcx
  char *v26; // rdx
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  int v33; // r8d
  int v34; // r13d
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // edx
  int v38; // r13d
  int v39; // r11d
  int v40; // eax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  UINT v43; // eax
  unsigned int v44; // ecx
  int v46; // [rsp+20h] [rbp-A8h]
  int v47; // [rsp+24h] [rbp-A4h]
  __int64 v48; // [rsp+38h] [rbp-90h]
  int v49; // [rsp+40h] [rbp-88h]
  int v50; // [rsp+48h] [rbp-80h]
  UINT v51; // [rsp+50h] [rbp-78h]
  const struct CURSOR_SCALING_INFO *v52; // [rsp+D0h] [rbp+8h]
  unsigned int v53; // [rsp+E0h] [rbp+18h]
  unsigned int v54; // [rsp+E8h] [rbp+20h]

  v52 = a1;
  Value = a2->Flags.Value;
  v6 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 741LL;
    WdLogEvent5_WdAssertion(v7);
    Value = a2->Flags.Value;
  }
  v8 = a3->Flags.Value;
  LOBYTE(a1) = (a3->Flags.Value & 2) == 0;
  if ( ((unsigned __int8)a1 & ((Value & 4) == 0)) != 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 742LL;
    WdLogEvent5_WdAssertion(v9);
    Value = a2->Flags.Value;
    v8 = a3->Flags.Value;
  }
  v10 = *((_DWORD *)v6 + 5);
  v11 = *((_DWORD *)v6 + 4);
  v12 = 0;
  v13 = 4 * v11;
  v14 = (Value & 4) != 0;
  v15 = (v8 & 4) != 0;
  v51 = v10;
  v47 = 0;
  v16 = (float)(int)a2->Width / (float)(int)v11;
  v17 = (float)(int)a2->Height / (float)(int)v10;
  if ( v10 )
  {
    do
    {
      v18 = 0;
      if ( v11 )
      {
        v19 = (float)v12 * v17;
        v20 = v13 * v12;
        v21 = (int)v19;
        do
        {
          v22 = (float)v18 * v16;
          v23 = (char *)a2->pPixels + (unsigned int)(4 * (int)v22) + (unsigned __int64)(v21 * a2->Pitch);
          v24 = a2->Width - 1 != (int)v22 ? 4 : 0;
          Pitch = 0LL;
          v48 = v24;
          if ( v21 != a2->Height - 1 )
            Pitch = a2->Pitch;
          v26 = &v23[Pitch + v24];
          v27 = v22 - (float)(int)v22;
          v54 = *(_DWORD *)&v23[(unsigned int)Pitch];
          v53 = *(_DWORD *)&v23[v24];
          v28 = v19 - (float)v21;
          v29 = (float)((float)(1.0 - v28) * v27) * 256.0;
          v30 = (float)((float)(1.0 - v28) * (float)(1.0 - v27)) * 256.0;
          v31 = (float)((float)(1.0 - v27) * v28) * 256.0;
          v50 = (int)v29;
          v32 = (float)(v28 * v27) * 256.0;
          v49 = (int)v31;
          v33 = (unsigned __int8)v26[3];
          v34 = (unsigned __int8)((unsigned __int16)((int)v30 * (unsigned __int8)*(_DWORD *)v23
                                                   + v50 * (unsigned __int8)v53
                                                   + v49 * (unsigned __int8)v54
                                                   + (int)v32 * (unsigned __int8)*(_DWORD *)v26) >> 8) | ((unsigned __int16)(int)v30 * (unsigned __int8)v23[1] + (_WORD)v50 * (unsigned __int8)v23[v24 + 1] + (_WORD)v49 * (unsigned __int8)v23[(unsigned int)Pitch + 1] + (unsigned __int16)(int)v32 * (unsigned __int8)v26[1]) & 0xFF00 | (((int)v30 * (unsigned __int8)v23[2] + v50 * (unsigned __int8)v23[v24 + 2] + v49 * (unsigned __int8)v23[(unsigned int)Pitch + 2] + (int)v32 * (unsigned __int8)v26[2]) << 8) & 0xFF0000;
          v46 = v34;
          if ( v15 )
          {
            v35 = v34 | ((((unsigned __int16)(int)v32 * (_WORD)v33
                         + (unsigned __int16)(int)v30 * (unsigned __int8)v23[3]
                         + (unsigned __int16)(int)v29 * (unsigned __int8)v23[v48 + 3]
                         + (unsigned __int16)(int)v31 * (unsigned __int8)v23[(unsigned int)Pitch + 3]) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( v35 >= 0x1000000 )
            {
              v36 = v34 & 0xFFFF00FF | ((((unsigned __int16)(int)v32 * (_WORD)v33
                                        + (unsigned __int16)(int)v30 * (unsigned __int8)v23[3]
                                        + (unsigned __int16)(int)v29 * (unsigned __int8)v23[v48 + 3]
                                        + (unsigned __int16)(int)v31 * (unsigned __int8)v23[(unsigned int)Pitch + 3]) & 0x8000) != 0
                                      ? 0xFF000000
                                      : 0) | (((*(_DWORD *)v26 & (*(_DWORD *)v26 >> 8) | v54 & (v54 >> 8) | v53 & (v53 >> 8) | *(_DWORD *)v23 & (*(_DWORD *)v23 >> 8)) & 0xFFFF0000) != 0
                                            ? 0xFF00
                                            : 0);
              v35 = ((unsigned __int8)(v36 ^ BYTE1(v36)) ^ v36 ^ (((unsigned __int8)(v36 ^ BYTE1(v36)) ^ v36) << 16)) & 0xFF0000 ^ (unsigned __int8)(v36 ^ BYTE1(v36)) ^ v36;
            }
          }
          else
          {
            v37 = (unsigned __int8)v23[(unsigned int)Pitch + 3];
            v38 = (unsigned __int8)v23[v48 + 3];
            v39 = (unsigned __int8)v23[3];
            if ( v14 )
              v40 = (int)v29 * (255 - v38) + (int)v31 * (255 - v37) + (int)v30 * (255 - v39) + (int)v32 * (255 - v33);
            else
              v40 = (int)v32 * v33 + (int)v29 * v38 + (int)v31 * v37 + (int)v30 * v39;
            v35 = v46 | (v40 << 16) & 0xFF000000;
          }
          v41 = (unsigned int)(4 * v18++);
          *(_DWORD *)((char *)a3->pPixels + v20 + v41) = v35;
        }
        while ( v18 < v11 );
        v12 = v47;
        v10 = v51;
        v13 = 4 * v11;
      }
      v47 = ++v12;
    }
    while ( v12 < v10 );
    v6 = v52;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v13;
  v42 = *((_DWORD *)v6 + 2);
  a3->Width = v11;
  a3->Height = v10;
  v43 = (v42 + *(_DWORD *)v6 * a2->XHot - 1) / v42;
  v44 = *((_DWORD *)v6 + 3);
  a3->XHot = v43;
  a3->YHot = (v44 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v44;
  return 0LL;
}
