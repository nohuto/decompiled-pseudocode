/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180197668
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002E3A0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180197668 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180197668 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // rbx
  int v17; // r13d
  char v18; // al
  __int64 v19; // rcx
  int Bounds; // eax
  __m128i v21; // xmm1
  unsigned __int64 v22; // xmm0_8
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-49h]
  __int128 v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+40h] [rbp-29h]
  unsigned int v31; // [rsp+48h] [rbp-21h]
  __int64 v32; // [rsp+50h] [rbp-19h]
  __int128 v33; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v34[20]; // [rsp+68h] [rbp-1h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = 0LL;
  v32 = a3;
  v30 = 0LL;
  v31 = 0;
  v7 = 0LL;
  v8 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  *(_DWORD *)(a1 + 32) = v8;
  LOBYTE(v8) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v29 = 0LL;
  if ( (_BYTE)v8 == 2 )
  {
    v11 = *(_DWORD *)(a1 + 152);
    if ( !v11 )
    {
      v12 = *a2;
      *(_DWORD *)v34 = 0;
      *(_OWORD *)&v34[4] = v12;
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 20, 1, v34);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v13, 0xC0u);
      if ( v9 < 0 )
      {
        v28 = 238;
LABEL_9:
        v10 = v9;
LABEL_10:
        LODWORD(v7) = 0;
        goto LABEL_3;
      }
LABEL_32:
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, &v29, v32);
      goto LABEL_33;
    }
    v14 = *(int *)(a1 + 152);
    v9 = 0;
    if ( v11 <= 0 )
      goto LABEL_32;
    v15 = v32;
    while ( 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v5);
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v5);
      v33 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v8 = *(_QWORD *)(v16 + 24);
      if ( v8 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 54LL, v7);
        v19 = *(_QWORD *)(v16 + 24);
        if ( v18 )
        {
          Bounds = CFilterEffect::GetBounds(v19, a2, &v33);
          v9 = Bounds;
          if ( Bounds < 0 )
          {
            v28 = 258;
            v10 = Bounds;
            goto LABEL_10;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 37LL) )
          {
            v9 = -2147467263;
            v28 = 276;
            goto LABEL_9;
          }
          v21 = *(__m128i *)(v16 + 4);
          *(_QWORD *)&v33 = 0LL;
          v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
          v8 = HIDWORD(v21.m128i_i64[0]);
          *((float *)&v33 + 3) = (float)(HIDWORD(v22) - v21.m128i_i32[1]);
          *((float *)&v33 + 2) = (float)((int)v22 - v21.m128i_i32[0]);
        }
        LODWORD(v7) = v31;
      }
      else
      {
        v33 = *a2;
      }
      v23 = v7 + 1;
      *(_DWORD *)v34 = v17;
      *(_OWORD *)&v34[4] = v33;
      if ( (int)v7 + 1 >= (unsigned int)v7 )
        v15 = v7 + 1;
      v9 = v23 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( v23 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xB5u);
      }
      else
      {
        if ( v15 <= HIDWORD(v30) )
        {
          v8 = v29;
          v24 = (unsigned int)v7;
          v7 = v15;
          v25 = 5 * v24;
          *(_OWORD *)(v29 + 4 * v25) = *(_OWORD *)v34;
          *(_DWORD *)(v8 + 4 * v25 + 16) = *(_DWORD *)&v34[16];
          v31 = v15;
          goto LABEL_30;
        }
        v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 20, 1, v34);
        v9 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v26, 0xC0u);
      }
      v7 = v31;
LABEL_30:
      if ( v9 < 0 )
      {
        v28 = 285;
        goto LABEL_9;
      }
      if ( ++v5 >= v14 )
        goto LABEL_32;
    }
  }
  v9 = -2147467259;
  v28 = 232;
  v10 = -2147467259;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, v7, v10, v28);
LABEL_33:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v29);
  return (unsigned int)v9;
}
