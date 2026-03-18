/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18006A8EC (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800A979C (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA1B4 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18017F1DC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     McTemplateU0xnn @ 0x1801BA280 (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        unsigned __int8 a4,
        bool a5)
{
  char v9; // al
  unsigned int v10; // edi
  float left; // xmm8_4
  float right; // xmm9_4
  float top; // xmm6_4
  float bottom; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  _BYTE *v23; // rdx
  unsigned int v24; // edx
  int v26; // [rsp+30h] [rbp-69h]
  struct tagRECT v27; // [rsp+48h] [rbp-51h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v29[4]; // [rsp+68h] [rbp-31h] BYREF

  if ( *((char *)this + 93) < 0 )
  {
    *((_DWORD *)this + 156) = 0;
    *(_QWORD *)((char *)this + 628) = 1LL;
    *((_BYTE *)this + 93) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 992));
  }
  v9 = *((_BYTE *)this + 954);
  if ( v9 )
    *((_BYTE *)this + 955) = 0;
  v10 = 0;
  if ( a3 )
  {
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xnn(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 80),
          a4,
          (__int64)&a2[v10],
          v26,
          (__int64)this + 728);
      if ( !*((_BYTE *)this + 954) && (!*((_BYTE *)this + 953) || !a5) )
      {
        CopyRect(&rcDst, (const RECT *)((char *)this + 680));
        OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
        IntersectRect(&rcDst, &a2[v10], &rcDst);
        left = (float)rcDst.left;
        right = (float)rcDst.right;
        top = (float)rcDst.top;
        bottom = (float)rcDst.bottom;
        if ( (float)rcDst.right > (float)rcDst.left && bottom > top )
        {
          if ( *((char *)this + 93) < 0 )
          {
            *((_DWORD *)this + 156) = 0;
            *((_DWORD *)this + 158) = 0;
            *((_DWORD *)this + 157) = 1;
            *((_BYTE *)this + 93) &= ~0x80u;
            CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 992));
          }
          v15 = (float)(*((_DWORD *)this + 171) - *((_DWORD *)this + 183));
          v16 = v15 + top;
          v17 = v15 + bottom;
          v18 = (float)(*((_DWORD *)this + 170) - *((_DWORD *)this + 182));
          *(float *)&v29[1] = v16;
          *(float *)&v29[3] = v17;
          v19 = v18 + left;
          v20 = v18 + right;
          *(float *)v29 = v19;
          *(float *)&v29[2] = v20;
          if ( qword_180308258 )
          {
            v21 = *((_DWORD *)qword_180308258 + 18);
            v22 = 0;
            if ( v21 )
            {
              while ( 1 )
              {
                v23 = *(_BYTE **)(*((_QWORD *)qword_180308258 + 6) + 8LL * v22);
                if ( v23[326] || v23[325] || v23[320] )
                  break;
                if ( ++v22 >= v21 )
                  goto LABEL_20;
              }
              v27.left = (int)v19;
              v27.right = (int)v20;
              v27.top = (int)v16;
              v27.bottom = (int)v17;
              CDwmMetaRegion::AddDirtyRectangle((CWindowNode *)((char *)this + 992), &v27);
            }
          }
LABEL_20:
          CMergedRectBase<4>::Add((char *)this + 560, v29);
        }
      }
      ++v10;
    }
    while ( v10 < a3 );
    v9 = *((_BYTE *)this + 954);
  }
  if ( !v9 && *((_BYTE *)this + 953) && a5 )
  {
    *((_BYTE *)this + 952) = 0;
    v24 = 5;
  }
  else
  {
    v24 = a4 + 8;
  }
  CVisual::PropagateFlags((__int64)this, v24, 0);
  CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
  return 0LL;
}
