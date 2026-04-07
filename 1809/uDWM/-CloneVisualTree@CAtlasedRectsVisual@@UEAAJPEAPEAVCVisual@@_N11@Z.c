/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x1800048C0 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x1800195F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x18001B524 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18002016C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180025544 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180025B84 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180038090 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(
        CAtlasedRectsVisual *this,
        struct CVisual **a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  unsigned int v5; // r13d
  unsigned __int8 v7; // bp
  __int64 v9; // rsi
  CAtlasedRectsVisual *v10; // rax
  CAtlasedRectsVisual *v11; // rax
  CBaseObject *v12; // rbx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  const struct _MARGINS *v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // r14
  __int64 v19; // rsi
  CAtlasedImage *v20; // rax
  CAtlasedImage *v21; // rax
  CAtlasedImage *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 *v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // rcx
  const RECT *v33; // rsi
  __int64 v34; // rcx
  int v35; // eax
  int v36; // esi
  __int64 v37; // rax
  CBaseObject *v38; // rcx
  volatile signed __int32 *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbp
  char *v45; // rbx
  int v46; // eax
  __int64 v47; // rdx
  char *v48; // r9
  char *v49; // rdx
  char *v50; // r8
  CBaseObject *v51; // rcx
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  char *v55; // r8
  int v56; // [rsp+20h] [rbp-68h]
  CBaseObject *v57; // [rsp+30h] [rbp-58h] BYREF
  char *v58; // [rsp+38h] [rbp-50h] BYREF
  CAtlasedImage *v59; // [rsp+40h] [rbp-48h] BYREF
  CBaseObject *v60; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = 0;
  v57 = 0LL;
  v60 = 0LL;
  v7 = a4;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v57);
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v10 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
  if ( !v10 || (v11 = CAtlasedRectsVisual::CAtlasedRectsVisual(v10), (v12 = v11) == 0LL) )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Fu);
    goto LABEL_69;
  }
  v13 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)v11 + 8LL))(v11, v9);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3Fu);
    CBaseObject::Release(v12);
    v12 = v57;
  }
  else
  {
    v57 = v12;
  }
  if ( v14 < 0 )
  {
LABEL_69:
    v54 = 275LL;
LABEL_70:
    v53 = (unsigned int)v14;
    goto LABEL_71;
  }
  *a2 = v12;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v12 = v57;
  }
  LOBYTE(v56) = 1;
  v15 = CVisual::CloneVisualTree(this, a2);
  v14 = v15;
  if ( v15 < 0 )
  {
    v53 = (unsigned int)v15;
    v54 = 279LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v54,
      (unsigned int)"windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
      (const char *)v53,
      v56);
    v5 = v14;
    if ( v60 )
      CBaseObject::Release(v60);
    goto LABEL_51;
  }
  v16 = (const struct _MARGINS *)*((_QWORD *)this + 34);
  if ( v16 )
    CAtlasedRectsVisual::SetClipMargins(v12, v16);
  v17 = 0;
  if ( *((_DWORD *)this + 66) )
  {
    while ( 1 )
    {
      LOBYTE(v56) = a5;
      v18 = 8LL * v17;
      if ( !(*(unsigned __int8 (__fastcall **)(CAtlasedRectsVisual *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)this
                                                                                                  + 208LL))(
              this,
              *(_QWORD *)(v18 + *((_QWORD *)this + 30)),
              a3,
              v7,
              v56) )
        goto LABEL_50;
      v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v20 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               136LL);
      if ( !v20 || (v21 = CAtlasedImage::CAtlasedImage(v20), (v22 = v21) == 0LL) )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
        v54 = 296LL;
        goto LABEL_70;
      }
      *((_QWORD *)v21 + 13) = v19;
      v60 = v21;
      v23 = *(_QWORD *)(v18 + *((_QWORD *)this + 30));
      if ( *(_DWORD *)(v23 + 16) != *((_DWORD *)v21 + 4) || *(_DWORD *)(v23 + 20) != *((_DWORD *)v21 + 5) )
      {
        v24 = *(_QWORD *)(v23 + 16);
        *((_DWORD *)v22 + 24) |= 1u;
        v25 = *((_QWORD *)v22 + 10);
        *((_QWORD *)v22 + 2) = v24;
        if ( v25 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, 0x2000LL);
      }
      v26 = *(_QWORD *)(v18 + *((_QWORD *)this + 30));
      if ( *((_DWORD *)v22 + 6) != *(_DWORD *)(v26 + 24) || *((_DWORD *)v22 + 7) != *(_DWORD *)(v26 + 28) )
      {
        v27 = *(_QWORD *)(v26 + 24);
        *((_DWORD *)v22 + 24) |= 1u;
        v28 = *((_QWORD *)v22 + 10);
        *((_QWORD *)v22 + 3) = v27;
        if ( v28 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 24LL))(v28, 0x2000LL);
      }
      if ( !(unsigned __int8)operator==((char *)v22 + 32, *(_QWORD *)(v18 + *((_QWORD *)this + 30)) + 32LL) )
      {
        v31 = *v29;
        *((_DWORD *)v22 + 24) |= 1u;
        *v30 = v31;
        v32 = *((_QWORD *)v22 + 10);
        if ( v32 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, 4096LL);
      }
      v33 = *(const RECT **)(v18 + *((_QWORD *)this + 30));
      if ( !EqualRect((const RECT *)v22 + 3, v33 + 3) )
      {
        *((RECT *)v22 + 3) = v33[3];
        CAtlasedImage::SetDirtyFlags(v22, 1u, 0x2000u);
      }
      v34 = *((_QWORD *)this + 30);
      v35 = *(_DWORD *)(*(_QWORD *)(v18 + v34) + 64LL);
      if ( *((_DWORD *)v22 + 16) != v35 )
      {
        *((_DWORD *)v22 + 16) = v35;
        CAtlasedImage::SetDirtyFlags(v22, 1u, 0x2000u);
        v34 = *((_QWORD *)this + 30);
      }
      v36 = *(_DWORD *)(*(_QWORD *)(v18 + v34) + 68LL);
      if ( v36 != *((_DWORD *)v22 + 17) )
      {
        CAtlasedImage::SetDirtyFlags(v22, 2u, 0x2000u);
        *((_DWORD *)v22 + 17) = v36;
        v34 = *((_QWORD *)this + 30);
      }
      v37 = *(_QWORD *)(v18 + v34);
      v38 = (CBaseObject *)*((_QWORD *)v22 + 9);
      v39 = *(volatile signed __int32 **)(v37 + 72);
      if ( v38 != (CBaseObject *)v39 )
      {
        if ( v38 )
          CBaseObject::Release(v38);
        *((_QWORD *)v22 + 9) = v39;
        if ( v39 )
        {
          _InterlockedIncrement(v39 + 2);
          v12 = v57;
        }
        *((_DWORD *)v22 + 24) |= 1u;
        v40 = *((_QWORD *)v22 + 10);
        if ( v40 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, 0x2000LL);
      }
      v41 = *((_QWORD *)this + 30);
      v42 = *(_QWORD *)(v18 + v41);
      if ( *(_BYTE *)(v42 + 128) )
      {
        CAtlasedImage::SetMarginClip(v22, (struct tagRECT *)(v42 + 112));
        v41 = *((_QWORD *)this + 30);
      }
      v43 = *(_QWORD *)(v18 + v41);
      v59 = v22;
      *((_DWORD *)v22 + 33) = *(_DWORD *)(v43 + 132);
      v44 = *((unsigned int *)v12 + 66);
      v45 = (char *)v12 + 240;
      if ( (unsigned int)v44 > *((_DWORD *)v45 + 6) )
        break;
      v58 = (char *)&v59;
      v46 = DynArrayImpl<0>::Grow((char **)v45, 8u, 1, 0, (unsigned __int64 *)&v58);
      v14 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x1CDu);
      }
      else
      {
        v47 = *((unsigned int *)v45 + 6);
        v48 = *(char **)v45;
        *((_DWORD *)v45 + 6) = v47 + 1;
        if ( (unsigned int)v47 > (unsigned int)v44 )
        {
          v55 = &v48[8 * v47];
          do
          {
            v47 = (unsigned int)(v47 - 1);
            v55 -= 8;
            *((_QWORD *)v55 + 1) = *(_QWORD *)&v48[8 * v47];
          }
          while ( (unsigned int)v47 > (unsigned int)v44 );
        }
        v49 = v58;
        v50 = &v48[8 * v44];
        if ( v58 >= v50 && v58 < &v48[8 * *((unsigned int *)v45 + 6) - 8] )
        {
          v49 = v58 + 8;
          v58 += 8;
        }
        *(_QWORD *)v50 = *(_QWORD *)v49;
      }
      if ( v14 < 0 )
        goto LABEL_59;
      _InterlockedIncrement((volatile signed __int32 *)v59 + 2);
      v51 = v57;
      *((_QWORD *)v59 + 10) = v57;
      (*(void (__fastcall **)(CBaseObject *, __int64))(*(_QWORD *)v51 + 24LL))(v51, 0x2000LL);
LABEL_46:
      if ( v14 < 0 )
      {
        v54 = 313LL;
        goto LABEL_70;
      }
      v60 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(CAtlasedImage *, __int64))v22)(v22, 1LL);
      v7 = a4;
      v12 = v57;
LABEL_50:
      if ( ++v17 >= *((_DWORD *)this + 66) )
        goto LABEL_51;
    }
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4Du);
    goto LABEL_46;
  }
LABEL_51:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v57);
  return v5;
}
