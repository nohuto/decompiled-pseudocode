/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064080
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v20; // [rsp+30h] [rbp-48h] BYREF
  float v21; // [rsp+34h] [rbp-44h]
  float v22; // [rsp+38h] [rbp-40h]
  float v23; // [rsp+3Ch] [rbp-3Ch]

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x61u);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 72);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, float *))(*(_QWORD *)v12 + 168LL))(
                v12,
                a2,
                a3,
                &v20);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x66u);
        }
        else
        {
          if ( v20 > *a4 )
            *a4 = v20;
          if ( v21 > a4[1] )
            a4[1] = v21;
          v15 = a4[2];
          v16 = v22;
          if ( v15 > v22 )
          {
            a4[2] = v22;
            v15 = v16;
          }
          v17 = a4[3];
          v18 = v23;
          if ( v17 > v23 )
          {
            a4[3] = v23;
            v17 = v18;
            v15 = a4[2];
          }
          if ( v15 <= *a4 || v17 <= a4[1] )
          {
            a4[3] = 0.0;
            a4[2] = 0.0;
            a4[1] = 0.0;
            *a4 = 0.0;
          }
        }
      }
    }
  }
  else
  {
    a4[3] = 0.0;
    a4[2] = 0.0;
    a4[1] = 0.0;
    *a4 = 0.0;
  }
  return v5;
}
