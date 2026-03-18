/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18002043C (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18009F378 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18009FD04 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18009FD28 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800A2818 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A5B60 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  CVisual *v5; // rbx
  int v6; // r8d
  int v7; // r8d
  double v8; // xmm6_8
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

  v4 = 0;
  v5 = (CVisual *)a1;
  v6 = a3 - 17;
  if ( !v6 )
  {
    if ( a2 == 38 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return v4;
    }
    goto LABEL_41;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v10 = v7 - 17;
    if ( !v10 )
    {
      if ( a2 == 29 )
      {
        v14 = a4[1];
        v15 = *a4;
LABEL_14:
        CVisual::SetSize((CVisual *)a1, v15, v14);
        return v4;
      }
      if ( a2 != 31 )
      {
LABEL_41:
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0xA0Bu);
        return v4;
      }
      *(_QWORD *)&v19 = *((unsigned int *)a4 + 1);
      *(_QWORD *)&v20 = *(unsigned int *)a4;
LABEL_24:
      CVisual::SetRelativeSize((CVisual *)a1, v20, v19);
      return v4;
    }
    if ( v10 != 17 )
      goto LABEL_41;
    if ( a2 == 28 )
    {
      v11 = a4[2];
      v12 = a4[1];
      v13 = *a4;
      goto LABEL_11;
    }
    if ( a2 != 30 )
      goto LABEL_41;
    z = a4[2];
    *(_QWORD *)&v17 = *((unsigned int *)a4 + 1);
    *(_QWORD *)&v18 = *(unsigned int *)a4;
    goto LABEL_19;
  }
  *(_QWORD *)&v8 = *(unsigned int *)a4;
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
              goto LABEL_41;
            *(_QWORD *)&v19 = *(unsigned int *)a4;
            *(_QWORD *)&v20 = **(unsigned int **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1, &v32);
            goto LABEL_23;
          }
        }
        else
        {
          *(_QWORD *)&v28 = LODWORD(CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v32)->y);
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v5, &v33);
          CVisual::SetRelativeOffset(
            v5,
            COERCE_DOUBLE((unsigned __int64)LODWORD(RelativeOffsetInternal->x)),
            v28,
            *(FLOAT *)&v8);
        }
        v20 = v8;
        *(_QWORD *)&v19 = *(unsigned int *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v5, &v32) + 4LL);
LABEL_23:
        a1 = (float *)v5;
        goto LABEL_24;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v33)->z;
      v17 = v8;
      *(_QWORD *)&v18 = LODWORD(CVisual::GetRelativeOffsetInternal(v5, &v32)->x);
    }
    else
    {
      CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v33);
      v30 = CVisual::GetRelativeOffsetInternal(v5, &v32);
      z = *(float *)(v31 + 8);
      v18 = v8;
      *(_QWORD *)&v17 = LODWORD(v30->y);
    }
    a1 = (float *)v5;
LABEL_19:
    CVisual::SetRelativeOffset((CVisual *)a1, v18, v17, z);
    return v4;
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
            goto LABEL_14;
          }
          if ( v23 == 1 )
          {
            v15 = a1[31];
            v14 = *a4;
            goto LABEL_14;
          }
          goto LABEL_41;
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
LABEL_11:
    CVisual::SetOffset((CVisual *)a1, v13, v12, v11);
    return v4;
  }
  CVisual::SetOpacity((CVisual *)a1, *a4);
  return v4;
}
