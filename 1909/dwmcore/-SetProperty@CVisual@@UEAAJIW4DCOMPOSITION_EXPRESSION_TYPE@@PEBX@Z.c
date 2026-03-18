/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A2E90
 * Callers:
 *     ?SetProperty@CParticleEmitterVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801EC950 (-SetProperty@CParticleEmitterVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020794 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800A0844 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800A0980 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800A111C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800A1140 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800A2F2C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A31D0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A3370 (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  CVisual *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  double v7; // xmm6_8
  unsigned int v8; // ebx
  int v10; // r8d
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  FLOAT z; // xmm3_4
  double v17; // xmm2_8
  double v18; // xmm1_8
  double v19; // xmm2_8
  double v20; // xmm1_8
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  double v28; // xmm2_8
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F *v30; // rax
  __int64 v31; // r11
  struct D2D_VECTOR_3F v32; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_VECTOR_3F v33; // [rsp+40h] [rbp-28h] BYREF

  v4 = (CVisual *)a1;
  v5 = a3 - 17;
  if ( !v5 )
  {
    if ( a2 == 38 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    goto LABEL_42;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v10 = v6 - 17;
    if ( !v10 )
    {
      if ( a2 == 29 )
      {
        v14 = a4[1];
        v15 = *a4;
LABEL_15:
        CVisual::SetSize((CVisual *)a1, v15, v14);
        return 0;
      }
      if ( a2 != 31 )
      {
LABEL_42:
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0xA42u, 0LL);
        return v8;
      }
      *(_QWORD *)&v19 = *((unsigned int *)a4 + 1);
      *(_QWORD *)&v20 = *(unsigned int *)a4;
LABEL_25:
      CVisual::SetRelativeSize((CVisual *)a1, v20, v19);
      return 0;
    }
    if ( v10 != 17 )
      goto LABEL_42;
    if ( a2 == 28 )
    {
      v11 = a4[2];
      v12 = a4[1];
      v13 = *a4;
      goto LABEL_12;
    }
    if ( a2 != 30 )
      goto LABEL_42;
    z = a4[2];
    *(_QWORD *)&v17 = *((unsigned int *)a4 + 1);
    *(_QWORD *)&v18 = *(unsigned int *)a4;
    goto LABEL_20;
  }
  *(_QWORD *)&v7 = *(unsigned int *)a4;
  if ( a2 > 0x1A )
  {
    v24 = a2 - 32;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_42;
            *(_QWORD *)&v19 = *(unsigned int *)a4;
            *(_QWORD *)&v20 = **(unsigned int **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1, &v32);
            goto LABEL_24;
          }
        }
        else
        {
          *(_QWORD *)&v28 = LODWORD(CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v32)->y);
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v4, &v33);
          CVisual::SetRelativeOffset(
            v4,
            COERCE_DOUBLE((unsigned __int64)LODWORD(RelativeOffsetInternal->x)),
            v28,
            *(FLOAT *)&v7);
        }
        v20 = v7;
        *(_QWORD *)&v19 = *(unsigned int *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v4, &v32) + 4LL);
LABEL_24:
        a1 = (float *)v4;
        goto LABEL_25;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v33)->z;
      v17 = v7;
      *(_QWORD *)&v18 = LODWORD(CVisual::GetRelativeOffsetInternal(v4, &v32)->x);
    }
    else
    {
      CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v33);
      v30 = CVisual::GetRelativeOffsetInternal(v4, &v32);
      z = *(float *)(v31 + 8);
      v18 = v7;
      *(_QWORD *)&v17 = LODWORD(v30->y);
    }
    a1 = (float *)v4;
LABEL_20:
    CVisual::SetRelativeOffset((CVisual *)a1, v18, v17, z);
    return 0;
  }
  if ( a2 != 26 )
  {
    if ( a2 )
    {
      v21 = a2 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 22;
          if ( !v23 )
          {
            v14 = a1[32];
            v15 = *a4;
            goto LABEL_15;
          }
          if ( v23 == 1 )
          {
            v15 = a1[31];
            v14 = *a4;
            goto LABEL_15;
          }
          goto LABEL_42;
        }
        v12 = a1[27];
        v11 = *a4;
      }
      else
      {
        v11 = a1[28];
        v12 = *a4;
      }
      v13 = a1[26];
    }
    else
    {
      v11 = a1[28];
      v13 = *a4;
      v12 = a1[27];
    }
LABEL_12:
    CVisual::SetOffset((CVisual *)a1, v13, v12, v11);
    return 0;
  }
  CVisual::SetOpacity((CVisual *)a1, *a4);
  return 0;
}
