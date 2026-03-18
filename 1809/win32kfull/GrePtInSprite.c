/*
 * XREFs of GrePtInSprite @ 0x1C00A28B0
 * Callers:
 *     LayerHitTest @ 0x1C0005498 (LayerHitTest.c)
 *     DCELayerHitTest @ 0x1C00A2B0C (DCELayerHitTest.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00A2A48 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C0252CA4 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C02627F4 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // edi
  char v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r15
  _DWORD *v14; // rcx
  BOOL v15; // eax
  unsigned __int8 v16; // r8
  int v17; // esi
  __int64 v19; // rax
  int v20; // r13d
  int v21; // r12d
  struct _SURFOBJ *v22; // rdx
  unsigned int ShapePixel; // eax
  unsigned int v24; // ecx
  struct _SURFOBJ *v25; // rdx
  HDEV v26; // r14
  RECTL si128; // xmm0
  _DWORD *v28; // rsi
  SURFOBJ *v29; // rdx
  SURFOBJ *v30; // rcx
  int v31; // [rsp+44h] [rbp-85h] BYREF
  HDEV v32; // [rsp+48h] [rbp-81h]
  _QWORD v33[3]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v36; // [rsp+78h] [rbp-51h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v38; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v39; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v40; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v32 = a1;
  v33[2] = a2;
  v10 = 0;
  v11 = 1;
  v36 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v10 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_10;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v35, ghsemSprite);
  v31 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v34, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 168LL);
    v14 = (_DWORD *)(*(_QWORD *)&prclSrc.left + 56LL);
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v15 = PtInRect(v14, __PAIR64__(a4, a3));
    v17 = *(_DWORD *)(v12 + 72);
    v10 = v15;
    if ( (v17 & 0xFFFFFFFB) == 0 || v17 == 2 && *(_BYTE *)(v12 + 79) == v16 && *(_BYTE *)(v12 + 78) > v16 || !v15 )
      goto LABEL_8;
    v19 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v13 + 184));
    v20 = a3 - *(_DWORD *)(v12 + 56);
    v21 = a4 - *(_DWORD *)(v12 + 60);
    *(_QWORD *)&prclSrc.left = v19;
    if ( (v17 & 2) != 0 )
    {
      if ( v17 != 3 || *(_BYTE *)(v12 + 79) )
        v11 = 0;
      v25 = *(struct _SURFOBJ **)(v13 + 184);
      v33[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v33, v25);
      if ( v33[0] && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6 )
      {
        if ( v11
          && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v20, v21, a5) & 0xFFFFFF) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v26 = v32;
          si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
          v28 = *(_DWORD **)(*((_QWORD *)v32 + 139) + 56LL);
          *v28 = 0;
          v29 = *(SURFOBJ **)(v13 + 184);
          v30 = (SURFOBJ *)*((_QWORD *)v26 + 139);
          prclSrc.right = v20 + 1;
          prclSrc.bottom = v21 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v20;
          prclSrc.top = v21;
          v38 = xloIdent;
          v39 = xloIdent;
          v40 = xloIdent;
          EngAlphaBlend(v30, v29, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v28 )
          {
            *v28 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v26 + 139),
              *(SURFOBJ **)(v13 + 184),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v10 = *v28 != -1;
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
      if ( v17 != 1 )
      {
LABEL_8:
        DEC_SHARE_REF_CNT(v12);
        goto LABEL_9;
      }
      v22 = *(struct _SURFOBJ **)(v13 + 184);
      v33[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v33, v22);
      if ( v33[0] && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6 )
      {
        ShapePixel = crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v20, v21, a5);
        v24 = 0;
        if ( (*(_DWORD *)(v12 + 80) & 0xFFFFFF) != (ShapePixel & 0xFFFFFF) )
          v24 = v10;
        v10 = v24;
        goto LABEL_32;
      }
    }
    v10 = 0;
LABEL_32:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
    goto LABEL_8;
  }
LABEL_9:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v34);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v31);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v35);
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v36);
  return v10;
}
