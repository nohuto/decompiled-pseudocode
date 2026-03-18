/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CB1C
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18002C6A4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x18002CA34 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18002CAC8 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD2C (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18002DD5C (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DTarget **this, unsigned int a2)
{
  CD2DResourceManager *v3; // rcx
  CD2DTarget *v4; // rcx
  CD2DTarget *v5; // rcx
  CD2DTarget *v6; // rcx
  CD2DTarget *v7; // rcx
  CD2DTarget *v8; // rcx
  CD2DTarget *v9; // rcx
  CD2DTarget *v10; // rcx
  __int64 i; // rdi
  CD2DTarget *v13; // r14
  __int64 v14; // rcx

  SAFE_DELETE<CD2DTarget>(this + 58, a2);
  v3 = this[25];
  if ( v3 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v3);
    v4 = this[25];
    if ( v4 )
    {
      operator delete(v4, 0x20uLL);
      this[25] = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable((CD2DContext *)this);
  v5 = this[43];
  if ( v5 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v5 + 8LL))(v5);
    this[43] = 0LL;
  }
  v6 = this[44];
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v6 + 16LL))(v6);
    this[44] = 0LL;
  }
  v7 = this[30];
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v7 + 16LL))(v7);
    this[30] = 0LL;
  }
  v8 = this[29];
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    this[29] = 0LL;
  }
  v9 = this[27];
  if ( v9 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v9 + 16LL))(v9);
    this[27] = 0LL;
  }
  v10 = this[28];
  if ( v10 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v10 + 16LL))(v10);
    this[28] = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v13 = this[39];
    v14 = *((_QWORD *)v13 + i);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      *((_QWORD *)v13 + i) = 0LL;
    }
  }
  *((_DWORD *)this + 84) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)(this + 1));
  return 0LL;
}
