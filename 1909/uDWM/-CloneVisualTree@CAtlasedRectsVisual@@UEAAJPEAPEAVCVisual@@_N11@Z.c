/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180003394 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BF4C (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800175C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018130 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180019D8C (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180025DC4 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180039714 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(
        const struct _MARGINS **this,
        struct CVisual **a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  unsigned __int8 v7; // bp
  int v9; // eax
  int v10; // esi
  struct CAtlasedRectsVisual *v11; // rbx
  int v12; // eax
  const struct _MARGINS *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  CAtlasedImage *v16; // rax
  CAtlasedImage *v17; // rax
  CAtlasedImage *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __int64 v27; // rcx
  const RECT *v28; // rsi
  const struct _MARGINS *v29; // rcx
  int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  CBaseObject *v33; // rcx
  volatile signed __int32 *v34; // rsi
  __int64 v35; // rcx
  const struct _MARGINS *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v40; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r9
  CAtlasedImage **v44; // rdx
  CAtlasedImage **v45; // r8
  struct CAtlasedRectsVisual *v46; // rcx
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // [rsp+20h] [rbp-58h]
  void *v52; // [rsp+28h] [rbp-50h]
  CBaseObject *v53; // [rsp+30h] [rbp-48h]
  struct CAtlasedRectsVisual *v54; // [rsp+38h] [rbp-40h] BYREF
  CAtlasedImage **v55; // [rsp+40h] [rbp-38h] BYREF
  CAtlasedImage *v56; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v54 = 0LL;
  v53 = 0LL;
  v7 = a3;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v54);
  v9 = CAtlasedRectsVisual::Create(&v54);
  v10 = v9;
  if ( v9 < 0 )
  {
    v48 = (unsigned int)v9;
    v49 = 272LL;
    goto LABEL_70;
  }
  v11 = v54;
  *a2 = v54;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v11 = v54;
  }
  v12 = CVisual::CloneVisualTree((CVisual *)this, a2, 0, 0, 1);
  v10 = v12;
  if ( v12 < 0 )
  {
    v48 = (unsigned int)v12;
    v49 = 276LL;
    goto LABEL_70;
  }
  v13 = this[34];
  if ( v13 )
    CAtlasedRectsVisual::SetClipMargins(v11, v13);
  v14 = 0LL;
  if ( !*((_DWORD *)this + 66) )
  {
LABEL_47:
    v10 = 0;
    goto LABEL_48;
  }
  while ( 1 )
  {
    v15 = 8 * v14;
    LOBYTE(v51) = a5;
    if ( !(*(unsigned __int8 (__fastcall **)(const struct _MARGINS **, _QWORD, _QWORD, _QWORD, int))&(*this)[13].cxLeftWidth)(
            this,
            *((_QWORD *)&this[30]->cxLeftWidth + v14),
            v7,
            a4,
            v51) )
      goto LABEL_46;
    v16 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             128LL);
    if ( !v16 )
      break;
    v17 = CAtlasedImage::CAtlasedImage(v16);
    v18 = v17;
    if ( !v17 )
      break;
    v53 = v17;
    v19 = *(_QWORD *)((char *)&this[30]->cxLeftWidth + v15);
    if ( *(_DWORD *)(v19 + 16) != *((_DWORD *)v17 + 4) || *(_DWORD *)(v19 + 20) != *((_DWORD *)v17 + 5) )
    {
      v20 = *(_QWORD *)(v19 + 16);
      *((_DWORD *)v18 + 24) |= 1u;
      v21 = *((_QWORD *)v18 + 10);
      *((_QWORD *)v18 + 2) = v20;
      if ( v21 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 0x2000LL);
    }
    v22 = *(_QWORD *)((char *)&this[30]->cxLeftWidth + v15);
    if ( *((_DWORD *)v18 + 6) != *(_DWORD *)(v22 + 24) || *((_DWORD *)v18 + 7) != *(_DWORD *)(v22 + 28) )
    {
      v23 = *(_QWORD *)(v22 + 24);
      *((_DWORD *)v18 + 24) |= 1u;
      v24 = *((_QWORD *)v18 + 10);
      *((_QWORD *)v18 + 3) = v23;
      if ( v24 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL);
    }
    v25 = *(_QWORD *)((char *)&this[30]->cxLeftWidth + v15);
    if ( *((_DWORD *)v18 + 8) != *(_DWORD *)(v25 + 32)
      || *((_DWORD *)v18 + 9) != *(_DWORD *)(v25 + 36)
      || *((_DWORD *)v18 + 10) != *(_DWORD *)(v25 + 40)
      || *((_DWORD *)v18 + 11) != *(_DWORD *)(v25 + 44) )
    {
      v26 = *(_OWORD *)(v25 + 32);
      *((_DWORD *)v18 + 24) |= 1u;
      v27 = *((_QWORD *)v18 + 10);
      *((_OWORD *)v18 + 2) = v26;
      if ( v27 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, 4096LL);
    }
    v28 = *(const RECT **)((char *)&this[30]->cxLeftWidth + v15);
    if ( !EqualRect((const RECT *)v18 + 3, v28 + 3) )
    {
      *((RECT *)v18 + 3) = v28[3];
      CAtlasedImage::SetDirtyFlags(v18, 1, 0x2000u);
    }
    v29 = this[30];
    v30 = *(_DWORD *)(*((_QWORD *)&v29->cxLeftWidth + v14) + 64LL);
    if ( *((_DWORD *)v18 + 16) != v30 )
    {
      *((_DWORD *)v18 + 16) = v30;
      CAtlasedImage::SetDirtyFlags(v18, 1, 0x2000u);
      v29 = this[30];
    }
    v31 = *(_DWORD *)(*(_QWORD *)((char *)&v29->cxLeftWidth + v15) + 68LL);
    if ( v31 != *((_DWORD *)v18 + 17) )
    {
      CAtlasedImage::SetDirtyFlags(v18, 2, 0x2000u);
      *((_DWORD *)v18 + 17) = v31;
      v29 = this[30];
    }
    v32 = *(_QWORD *)((char *)&v29->cxLeftWidth + v15);
    v33 = (CBaseObject *)*((_QWORD *)v18 + 9);
    v34 = *(volatile signed __int32 **)(v32 + 72);
    if ( v33 != (CBaseObject *)v34 )
    {
      if ( v33 )
        CBaseObject::Release(v33);
      *((_QWORD *)v18 + 9) = v34;
      if ( v34 )
      {
        _InterlockedIncrement(v34 + 2);
        v11 = v54;
      }
      *((_DWORD *)v18 + 24) |= 1u;
      v35 = *((_QWORD *)v18 + 10);
      if ( v35 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 24LL))(v35, 0x2000LL);
    }
    v36 = this[30];
    v37 = *((_QWORD *)&v36->cxLeftWidth + v14);
    if ( *(_BYTE *)(v37 + 116) )
    {
      CAtlasedImage::SetMarginClip(v18, (struct tagRECT *)(v37 + 100));
      v36 = this[30];
    }
    v38 = *(_QWORD *)((char *)&v36->cxLeftWidth + v15);
    v56 = v18;
    *((_DWORD *)v18 + 30) = *(_DWORD *)(v38 + 120);
    v39 = *((unsigned int *)v11 + 66);
    v40 = (char *)v11 + 240;
    if ( (unsigned int)v39 > *((_DWORD *)v40 + 6) )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u, v52);
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4Du, v52);
      goto LABEL_42;
    }
    v55 = &v56;
    v41 = DynArrayImpl<0>::Grow((_DWORD)v40, 8, 1, 0, (__int64)&v55);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1CDu, v52);
    }
    else
    {
      v42 = *((unsigned int *)v40 + 6);
      v43 = *(_QWORD *)v40;
      *((_DWORD *)v40 + 6) = v42 + 1;
      if ( (unsigned int)v42 > (unsigned int)v39 )
      {
        v50 = v43 + 8 * v42;
        do
        {
          v42 = (unsigned int)(v42 - 1);
          v50 -= 8LL;
          *(_QWORD *)(v50 + 8) = *(_QWORD *)(v43 + 8 * v42);
        }
        while ( (unsigned int)v42 > (unsigned int)v39 );
      }
      v44 = v55;
      v45 = (CAtlasedImage **)(v43 + 8 * v39);
      if ( v55 >= v45 && (unsigned __int64)v55 < v43 + 8 * ((unsigned __int64)*((unsigned int *)v40 + 6) - 1) )
        v44 = ++v55;
      *v45 = *v44;
    }
    if ( v10 < 0 )
      goto LABEL_60;
    _InterlockedIncrement((volatile signed __int32 *)v56 + 2);
    v46 = v54;
    *((_QWORD *)v56 + 10) = v54;
    (*(void (__fastcall **)(struct CAtlasedRectsVisual *, __int64))(*(_QWORD *)v46 + 24LL))(v46, 0x2000LL);
LABEL_42:
    if ( v10 < 0 )
    {
      v49 = 310LL;
      goto LABEL_69;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CAtlasedImage *, __int64))v18)(v18, 1LL);
    v7 = a3;
    v11 = v54;
LABEL_46:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *((_DWORD *)this + 66) )
      goto LABEL_47;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA3u, v52);
  v49 = 293LL;
  v53 = 0LL;
LABEL_69:
  v48 = (unsigned int)v10;
LABEL_70:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v49,
    (unsigned int)"windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)v48,
    v51);
  if ( v53 )
    CBaseObject::Release(v53);
LABEL_48:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v54);
  return (unsigned int)v10;
}
