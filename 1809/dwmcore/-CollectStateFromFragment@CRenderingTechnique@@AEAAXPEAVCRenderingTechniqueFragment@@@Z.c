/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DFFC0
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800C37F8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800E19F4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800E1BE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int i; // ebp
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r8d
  const struct CBrushRenderingGraph *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 j; // r8
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int64 v22; // rcx
  int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h]
  int v26; // [rsp+38h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v10 = v4 + 1;
      v7 += 2;
      if ( !v9 )
        v10 = v4;
      v4 = v10;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v13 = *((_QWORD *)a2 + 4);
    v14 = 0;
    LODWORD(v15) = i;
    v16 = (*((_QWORD *)a2 + 5) - v13) >> 4;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(v13 + 16LL * v14 + 8) )
        {
          v17 = (int)v15;
          v15 = (const struct CBrushRenderingGraph *)(unsigned int)((_DWORD)v15 - 1);
          if ( !v17 )
            break;
        }
        if ( ++v14 >= (unsigned int)v16 )
          goto LABEL_14;
      }
      CRenderingTechniqueFragment::GetSurfaceDescription(
        a2,
        v15,
        v14,
        (struct CRenderingTechniqueFragment::SurfaceDescription *)&v24);
    }
LABEL_14:
    if ( BYTE4(v24) )
      goto LABEL_17;
    v18 = *((unsigned int *)this + 23);
    for ( j = 0LL; (unsigned int)j < (unsigned int)v18; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(
                              &v24,
                              (char *)this + 60 * (unsigned int)j + 100,
                              j,
                              v18) )
        break;
    }
    if ( (unsigned int)j >= (unsigned int)v18 )
    {
LABEL_17:
      v20 = v24;
      v21 = v25;
      v22 = 60LL * (unsigned int)(*((_DWORD *)this + 23))++;
      v23 = v26;
      *(_OWORD *)((char *)this + v22 + 100) = v20;
      *(_QWORD *)((char *)this + v22 + 116) = v21;
      *(_DWORD *)((char *)this + v22 + 124) = v23;
    }
    else
    {
      *((_BYTE *)this + 60 * (unsigned int)j + 110) |= BYTE10(v24);
    }
  }
  *((_DWORD *)this + 24) |= *((_DWORD *)a2 + 7);
  v12 = *((_DWORD *)a2 + 5);
  if ( (v12 & 0xF) != 0 )
    v12 = v12 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 22) += v12;
}
