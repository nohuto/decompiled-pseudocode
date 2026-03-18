/*
 * XREFs of ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801625C4
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003EB40 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
        CD3DResourceManager *this,
        struct IUnknown *a2)
{
  unsigned int v3; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  CD3DResourceManager *v8; // rbx
  CD3DResourceManager **v9; // rdx

  v3 = 0;
  v5 = operator new(0x20uLL);
  v7 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = a2;
    v5[2] = 3;
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = (CD3DResourceManager *)(v7 + 4);
    v9 = (CD3DResourceManager **)*((_QWORD *)this + 8);
    if ( *v9 != (CD3DResourceManager *)((char *)this + 56) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 56;
    *((_QWORD *)v8 + 1) = v9;
    *v9 = v8;
    *((_QWORD *)this + 8) = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x2BFu, 0LL);
  }
  return v3;
}
