/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801CB1C0
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800ECDA0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801CB1C0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801CB1C0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // r9d
  int v11; // eax
  __int128 v12; // xmm0
  signed int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // r12d
  char v18; // al
  __int64 v19; // rcx
  int Bounds; // eax
  __m128i v21; // xmm1
  unsigned __int64 v22; // xmm0_8
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  signed int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-60h]
  __int128 v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+40h] [rbp-40h]
  unsigned int v32; // [rsp+44h] [rbp-3Ch]
  unsigned int v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v35[20]; // [rsp+60h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v31 = 0;
  v32 = 0;
  v6 = 0;
  v33 = 0;
  v8 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  *(_DWORD *)(a1 + 32) = v8;
  LOBYTE(v8) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v30 = 0LL;
  if ( (_BYTE)v8 != 2 )
  {
    v9 = -2147467259;
    v10 = -2147467259;
    v29 = 230;
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(a1 + 152);
  if ( !v11 )
  {
    v12 = *a2;
    *(_DWORD *)v35 = 0;
    *(_OWORD *)&v35[4] = v12;
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30, 20, 1, v35);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v13, 0xC3u, 0LL);
    if ( v9 < 0 )
    {
      v29 = 236;
      goto LABEL_9;
    }
    goto LABEL_29;
  }
  v9 = 0;
  v14 = *(int *)(a1 + 152);
  if ( v11 <= 0 )
  {
LABEL_29:
    (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 224LL))(a1, &v30, a3);
    goto LABEL_30;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v15);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v15);
    v34 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v8 = *(_QWORD *)(v16 + 24);
    if ( v8 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 56LL);
      v19 = *(_QWORD *)(v16 + 24);
      if ( v18 )
      {
        Bounds = CFilterEffect::GetBounds(v19, a2, &v34);
        v9 = Bounds;
        if ( Bounds < 0 )
        {
          v10 = Bounds;
          v29 = 256;
          goto LABEL_3;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 39LL) )
        {
          v9 = -2147467263;
          v29 = 274;
          goto LABEL_9;
        }
        v21 = *(__m128i *)(v16 + 4);
        *(_QWORD *)&v34 = 0LL;
        v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
        v8 = HIDWORD(v21.m128i_i64[0]);
        *((float *)&v34 + 3) = (float)(HIDWORD(v22) - v21.m128i_i32[1]);
        *((float *)&v34 + 2) = (float)((int)v22 - v21.m128i_i32[0]);
      }
      v6 = v33;
    }
    else
    {
      v34 = *a2;
    }
    v23 = v6 + 1;
    *(_DWORD *)v35 = v17;
    *(_OWORD *)&v35[4] = v34;
    if ( v6 + 1 < v6 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      goto LABEL_26;
    }
    if ( v23 > v32 )
      break;
    v24 = v30;
    v9 = 0;
    v25 = v6++;
    v26 = 5 * v25;
    *(_OWORD *)(v30 + 4 * v26) = *(_OWORD *)v35;
    *(_DWORD *)(v24 + 4 * v26 + 16) = *(_DWORD *)&v35[16];
    v33 = v23;
LABEL_28:
    if ( ++v15 >= v14 )
      goto LABEL_29;
  }
  v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30, 20, 1, v35);
  v9 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v27, 0xC3u, 0LL);
LABEL_26:
  if ( v9 >= 0 )
  {
    v6 = v33;
    goto LABEL_28;
  }
  v29 = 283;
LABEL_9:
  v10 = v9;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v29, 0LL);
LABEL_30:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30);
  return (unsigned int)v9;
}
