/*
 * XREFs of bVtfdLoadFont @ 0x1C0228FC0
 * Callers:
 *     vtfdLoadFontFile @ 0x1C02299CC (vtfdLoadFontFile.c)
 * Callees:
 *     bGetFntResource @ 0x1C02285EC (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0228700 (bInitWinResData.c)
 *     bVerifyVTFD @ 0x1C0228D24 (bVerifyVTFD.c)
 *     cjVTFDIFIMETRICS @ 0x1C0229258 (cjVTFDIFIMETRICS.c)
 *     iDefaultFace @ 0x1C0229344 (iDefaultFace.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0229378 (vVtfdFill_IFIMetrics.c)
 *     pcpComputeGlyphset @ 0x1C02ADA2C (pcpComputeGlyphset.c)
 */

__int64 __fastcall bVtfdLoadFont(__int64 a1, unsigned int a2, __int64 a3, int a4, PVOID *a5)
{
  _BYTE *v6; // r14
  unsigned int v7; // edi
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  ULONG v13; // r12d
  unsigned int v14; // r14d
  unsigned int v15; // eax
  int v16; // eax
  ULONG v17; // ecx
  int v18; // eax
  _DWORD *v19; // rax
  int v20; // ecx
  unsigned int v21; // r13d
  unsigned int *v22; // r12
  __int64 v23; // xmm1_8
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-50h]
  ULONG v31; // [rsp+24h] [rbp-4Ch]
  __int128 v32; // [rsp+28h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h]
  __int64 v34[3]; // [rsp+40h] [rbp-30h] BYREF
  int v35; // [rsp+58h] [rbp-18h]
  int v38; // [rsp+C8h] [rbp+58h]
  unsigned int v39; // [rsp+D0h] [rbp+60h]

  v38 = a4;
  v6 = 0LL;
  v7 = 0;
  v32 = 0uLL;
  v33 = 0LL;
  v9 = 0;
  *a5 = 0LL;
  v30 = 0;
  if ( a4 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a1, a2, (__int64)v34) )
      return v7;
    v10 = v35;
    v9 = 0;
    a4 = 2;
  }
  else
  {
    v10 = 1;
    *(_QWORD *)&v32 = a1;
    v35 = 1;
    v6 = (_BYTE *)a1;
    DWORD2(v32) = 0;
    HIDWORD(v32) = a2;
    v33 = 0LL;
  }
  v11 = 0;
  v12 = 48 * v10 + 40;
  v39 = 0;
  v13 = v12;
  if ( v10 )
  {
    while ( 1 )
    {
      v31 = v13;
      v14 = v9;
      if ( a4 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v34, v11, (__int64)&v32) )
          return v7;
        v10 = v35;
        v9 = v30;
      }
      v15 = -1;
      if ( v9 + HIDWORD(v32) >= v9 )
        v15 = v9 + HIDWORD(v32);
      v30 = v15;
      if ( v9 + HIDWORD(v32) < v14 )
        break;
      if ( v15 > a2 )
        break;
      if ( !(unsigned int)bVerifyVTFD((unsigned __int16 **)&v32) )
        break;
      v6 = (_BYTE *)v32;
      v16 = cjVTFDIFIMETRICS(v32);
      if ( !v16 )
        break;
      v17 = v16 + v13;
      v18 = -1;
      if ( v17 >= v13 )
        v18 = v17;
      v13 = v18;
      if ( v17 < v31 || v18 - v12 > a2 )
        break;
      v9 = v30;
      v11 = v39 + 1;
      a4 = v38;
      v39 = v11;
      if ( v11 >= v10 )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    v19 = EngAllocMem(1u, v13, 0x64667456u);
    *a5 = v19;
    if ( v19 )
    {
      v20 = v38;
      *v19 = v38;
      *((_DWORD *)*a5 + 7) = 0;
      *((_DWORD *)*a5 + 8) = 0;
      *((_QWORD *)*a5 + 1) = a3;
      *((_QWORD *)*a5 + 2) = a1;
      *((_DWORD *)*a5 + 6) = a2;
      v21 = 0;
      *((_DWORD *)*a5 + 9) = v10;
      v22 = (unsigned int *)((char *)*a5 + v12);
      if ( v10 )
      {
        while ( 1 )
        {
          if ( v20 == 2 )
          {
            if ( !(unsigned int)bGetFntResource(v34, v21, (__int64)&v32) )
              break;
            v6 = (_BYTE *)v32;
            v10 = v35;
          }
          v23 = v33;
          v24 = *a5;
          v25 = 6LL * v21;
          *(_OWORD *)&v24[v25 + 5] = v32;
          v24[v25 + 7] = v23;
          *((_DWORD *)*a5 + 12 * v21 + 16) = iDefaultFace(v6);
          *((_QWORD *)*a5 + 6 * v21 + 10) = v22;
          LOBYTE(v26) = v6[85];
          *((_QWORD *)*a5 + 6 * v21 + 9) = pcpComputeGlyphset(
                                             &gpcpVTFD,
                                             (unsigned __int8)v6[95],
                                             (unsigned __int8)v6[96],
                                             v26);
          v27 = *((_QWORD *)*a5 + 6 * v21 + 9);
          if ( !v27 )
            break;
          vVtfdFill_IFIMetrics(v6, v27 + 24, v22);
          v28 = *v22;
          if ( !(_DWORD)v28 )
            break;
          v20 = v38;
          v22 = (unsigned int *)((char *)v22 + v28);
          if ( ++v21 >= v10 )
            return 1;
        }
        EngFreeMem(*a5);
        *a5 = 0LL;
      }
      else
      {
        return 1;
      }
    }
  }
  return v7;
}
