/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001724
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180028630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002B6B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180001A00 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x180001AAC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180001B0C (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028B9C (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800385E4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAtlasedRectsVisual **this)
{
  CAtlasedImage **v1; // r12
  struct CAtlasedImage *v2; // rbp
  unsigned int v3; // r15d
  unsigned int v5; // r14d
  struct CAtlasedImage **v6; // rsi
  const struct tagSIZE *v7; // rbx
  const struct tagSIZE **v8; // r13
  int v9; // eax
  int v10; // eax
  struct CAtlasedImage *v11; // rbp
  CBaseObject *v12; // rcx
  __int64 v13; // rcx
  struct CAtlasedImage *v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 i; // r9
  CAtlasedImage *v19; // rcx
  CAtlasedImage *v20; // rcx
  CAtlasedImage *v21; // rcx
  CAtlasedImage *v22; // rcx
  CAtlasedImage *v23; // rcx
  CAtlasedImage *v24; // rcx
  CAtlasedImage *v25; // rcx
  CAtlasedImage *v26; // rcx
  void *v28; // [rsp+28h] [rbp-40h]
  struct CAtlasedImage *v29; // [rsp+80h] [rbp+18h]
  const struct tagSIZE *v30; // [rsp+88h] [rbp+20h]

  v1 = this + 55;
  v2 = 0LL;
  v3 = 0;
  v29 = 0LL;
  v5 = 0;
  v6 = this + 55;
  v7 = *(const struct tagSIZE **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v30 = v7;
  v8 = (const struct tagSIZE **)&v7[188];
  while ( 1 )
  {
    if ( !*v6 )
    {
      v9 = CAtlasedImage::Create(v6);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x19Bu, v28);
        return v3;
      }
      *((_DWORD *)*v6 + 30) = v5;
      v10 = CAtlasedRectsVisual::InsertAfterAtlasImage(this[53], *v6, v2);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1A2u, v28);
        return v3;
      }
    }
    if ( v7 )
    {
      v7 = *(v8 - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
      {
        if ( *v8 )
          v7 = *v8;
      }
    }
    v11 = *v6;
    v12 = (CBaseObject *)*((_QWORD *)*v6 + 9);
    if ( v12 != (CBaseObject *)v7 )
    {
      if ( v12 )
        CBaseObject::Release(v12);
      *((_QWORD *)v11 + 9) = v7;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)&v7[1]);
      *((_DWORD *)v11 + 24) |= 1u;
      v13 = *((_QWORD *)v11 + 10);
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 0x2000LL);
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17))
      && v7
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, v5) )
    {
      CAtlasedImage::SetSize(*v6, v7 + 3);
      v2 = *v6;
      v29 = *v6;
    }
    else
    {
      v14 = *v6;
      v15 = *((_QWORD *)*v6 + 10);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 264);
        v17 = 0LL;
        for ( i = *(_QWORD *)(v15 + 240); (unsigned int)v17 < v16; v17 = (unsigned int)(v17 + 1) )
        {
          if ( v14 == *(struct CAtlasedImage **)(i + 8 * v17) )
            break;
        }
        if ( (unsigned int)v17 < v16 )
        {
          while ( (unsigned int)v17 < v16 - 1 )
          {
            *(_QWORD *)(i + 8 * v17) = *(_QWORD *)(i + 8LL * (unsigned int)(v17 + 1));
            v17 = (unsigned int)(v17 + 1);
            v16 = *(_DWORD *)(v15 + 264);
          }
          *(_DWORD *)(v15 + 264) = v16 - 1;
        }
        *((_QWORD *)v14 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v14)(v14, 1LL);
        (*(void (__fastcall **)(__int64, __int64, struct CAtlasedImage *, __int64))(*(_QWORD *)v15 + 24LL))(
          v15,
          0x2000LL,
          v14,
          i);
        v14 = *v6;
      }
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v14)(v14, 1LL);
        *v6 = 0LL;
      }
      v2 = v29;
    }
    ++v6;
    ++v5;
    v8 += 2;
    if ( v5 >= 0x16 )
      break;
    v7 = v30;
  }
  v19 = *v1;
  if ( *v1 && *((_DWORD *)v19 + 16) )
  {
    *((_DWORD *)v19 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v19, 1u, 0x2000u);
  }
  v20 = this[56];
  if ( v20 && *((_DWORD *)v20 + 16) )
  {
    *((_DWORD *)v20 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v20, 1u, 0x2000u);
  }
  v21 = this[57];
  if ( v21 && *((_DWORD *)v21 + 16) )
  {
    *((_DWORD *)v21 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v21, 1u, 0x2000u);
  }
  v22 = this[58];
  if ( v22 && *((_DWORD *)v22 + 16) )
  {
    *((_DWORD *)v22 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v22, 1u, 0x2000u);
  }
  v23 = this[59];
  if ( v23 && *((_DWORD *)v23 + 16) )
  {
    *((_DWORD *)v23 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v23, 1u, 0x2000u);
  }
  v24 = this[60];
  if ( v24 && *((_DWORD *)v24 + 16) )
  {
    *((_DWORD *)v24 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v24, 1u, 0x2000u);
  }
  v25 = this[61];
  if ( v25 && *((_DWORD *)v25 + 16) )
  {
    *((_DWORD *)v25 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v25, 1u, 0x2000u);
  }
  v26 = this[62];
  if ( v26 && *((_DWORD *)v26 + 16) )
  {
    *((_DWORD *)v26 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
  }
  return v3;
}
