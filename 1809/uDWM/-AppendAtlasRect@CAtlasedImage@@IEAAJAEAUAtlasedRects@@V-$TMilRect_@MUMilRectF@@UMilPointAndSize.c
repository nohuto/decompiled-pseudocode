/*
 * XREFs of ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180013B34
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800147C0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180004F44 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasRect(struct tagRECT *a1, __int64 a2, __int64 a3, float *a4, char a5)
{
  int v5; // ebx
  char v10; // di
  __int64 v11; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  LONG *p_top; // r9
  unsigned int v18; // r8d
  int top; // r8d
  int left; // edx
  struct tagRECT *v22; // rax
  LONG v23; // xmm1_4
  float v24; // xmm0_4
  LONG v25; // xmm1_4
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  if ( a1[3].left == 0x80000000 && a1[3].top == 0x80000000 && a1[3].right == 0x7FFFFFFF && a1[3].bottom == 0x7FFFFFFF )
  {
    v10 = 0;
    if ( !*(_QWORD *)(a2 + 96) )
      goto LABEL_6;
  }
  else
  {
    v10 = 1;
  }
  top = a1[1].top;
  left = a1[1].left;
  rc = a1[3];
  OffsetRect(&rc, left, top);
  v22 = *(struct tagRECT **)(a2 + 96);
  if ( v22 )
  {
    if ( v10 )
      IntersectRect(&rc, &rc, *(const RECT **)(a2 + 96));
    else
      rc = *v22;
  }
  ClipRectAndSimilarRect(&rc.left, a4, (float *)a3);
LABEL_6:
  if ( (float)(a4[2] - *a4) > 0.0 && (float)(a4[3] - a4[1]) > 0.0 )
  {
    v11 = *(unsigned int *)(a2 + 24);
    v12 = v11 + 1;
    if ( a5 )
    {
      v23 = *(_DWORD *)(a3 + 4);
      rc.left = *(_DWORD *)(a3 + 8);
      v24 = *(float *)a3;
      rc.top = v23;
      v25 = *(_DWORD *)(a3 + 12);
      v5 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      *(float *)&rc.right = v24;
      rc.bottom = v25;
      if ( v12 >= (unsigned int)v11 )
      {
        if ( v12 > *(_DWORD *)(a2 + 20) )
        {
          v26 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &rc);
          v5 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
        }
        else
        {
          *(struct tagRECT *)(*(_QWORD *)a2 + 16 * v11) = rc;
          *(_DWORD *)(a2 + 24) = v12;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x369u);
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      if ( v12 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v12 > *(_DWORD *)(a2 + 20) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, a3);
        v5 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)a2 + 16 * v11) = *(_OWORD *)a3;
        *(_DWORD *)(a2 + 24) = v12;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x36Du);
        return (unsigned int)v5;
      }
    }
    v13 = (_QWORD *)(a2 + 32);
    v14 = *(unsigned int *)(a2 + 56);
    v15 = v14 + 1;
    v5 = (int)v14 + 1 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( (int)v14 + 1 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( v15 > *(_DWORD *)(a2 + 52) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet(v13, 16LL, 1LL, a4);
      v5 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v13 + 16 * v14) = *(_OWORD *)a4;
      *(_DWORD *)(a2 + 56) = v15;
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x370u);
    }
    else
    {
      v16 = *(_DWORD *)(a2 + 88);
      p_top = &a1[4].top;
      v18 = v16 + 1;
      v5 = v16 + 1 < v16 ? 0x80070216 : 0;
      if ( v16 + 1 < v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v18 > *(_DWORD *)(a2 + 84) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 64, 4LL, 1LL, p_top);
        v5 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 64) + 4LL * v16) = *p_top;
        *(_DWORD *)(a2 + 88) = v18;
      }
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x371u);
    }
  }
  return (unsigned int)v5;
}
