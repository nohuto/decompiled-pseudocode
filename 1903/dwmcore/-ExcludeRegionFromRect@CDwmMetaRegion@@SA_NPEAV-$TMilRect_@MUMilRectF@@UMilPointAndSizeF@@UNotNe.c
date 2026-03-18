/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801820C8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r8d
  char v4; // di
  int v6; // edx
  int v7; // r9d
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // r10d
  FastRegion::Internal::CRgnData *v13; // rcx
  __m128 v15; // [rsp+30h] [rbp-59h]
  _BYTE v16[8]; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-41h]
  int *v18; // [rsp+50h] [rbp-39h]
  __int64 v19; // [rsp+58h] [rbp-31h]
  int v20; // [rsp+60h] [rbp-29h]
  __int128 v21; // [rsp+70h] [rbp-19h]
  FastRegion::Internal::CRgnData *v22; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v23[3]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v24[2]; // [rsp+94h] [rbp+Bh] BYREF
  _DWORD v25[13]; // [rsp+9Ch] [rbp+13h] BYREF

  v2 = (int)a1[2];
  v4 = 0;
  v22 = (FastRegion::Internal::CRgnData *)v23;
  v6 = (int)*a1;
  v7 = (int)a1[3];
  if ( v6 >= v2 || (int)a1[1] >= v7 )
  {
    v23[0] = 0;
  }
  else
  {
    v24[0] = (int)a1[1];
    v23[0] = 2;
    v23[1] = v6;
    v23[2] = v2;
    v24[1] = (unsigned int)v23 + 1 + 27 - (unsigned int)v24;
    v25[2] = v6;
    v25[3] = v2;
    v25[1] = (unsigned int)v23 + 1 + 27 - (unsigned int)v25 + 8;
    v25[0] = v7;
  }
  v8 = FastRegion::CRegion::Subtract(&v22, a2);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x31Cu, 0LL);
  }
  else
  {
    FastRegion::Internal::CRgnData::BeginIterator(v22, (struct FastRegion::CRegion::Iterator *)v16);
    while ( (unsigned __int64)v18 < v17 )
    {
      v10 = 2 * v20;
      v11 = *(_DWORD *)(v19 + 4 * v10);
      v12 = *(_DWORD *)(v19 + 4 * v10 + 4);
      v13 = (FastRegion::Internal::CRgnData *)(unsigned int)((v18[2] - *v18) * (v12 - v11));
      if ( (int)v13 > 0 )
      {
        v4 = 1;
        v15.m128_f32[0] = (float)v11;
        v15.m128_f32[1] = (float)*v18;
        v15.m128_f32[2] = (float)v12;
        v15.m128_f32[3] = (float)v18[2];
        *(float *)&v21 = (float)v11;
        HIDWORD(v21) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
        DWORD1(v21) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
        DWORD2(v21) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        *(_OWORD *)a1 = v21;
      }
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v16);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v22);
  return v4;
}
