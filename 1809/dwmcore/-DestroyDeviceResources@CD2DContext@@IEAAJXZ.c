/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800E95E0
 * Callers:
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800E9A30 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180022828 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800E97F0 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800E99A0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1800E99DC (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DTarget **this)
{
  CD2DResourceManager *v2; // rcx
  CD2DTarget *v3; // rcx
  CD2DTarget *v4; // rcx
  CD2DTarget *v5; // rcx
  CD2DTarget *v6; // rcx
  CD2DTarget *v7; // rcx
  CD2DTarget *v8; // rcx
  CD2DTarget *v9; // rcx
  __int64 i; // rdi
  CD2DTarget *v12; // r14
  __int64 v13; // rcx

  SAFE_DELETE<CD2DTarget>(this + 58);
  v2 = this[25];
  if ( v2 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v2);
    v3 = this[25];
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      this[25] = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable((CD2DContext *)this);
  v4 = this[43];
  if ( v4 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v4 + 8LL))(v4);
    this[43] = 0LL;
  }
  v5 = this[44];
  if ( v5 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v5 + 16LL))(v5);
    this[44] = 0LL;
  }
  v6 = this[30];
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v6 + 16LL))(v6);
    this[30] = 0LL;
  }
  v7 = this[29];
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v7 + 16LL))(v7);
    this[29] = 0LL;
  }
  v8 = this[27];
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    this[27] = 0LL;
  }
  v9 = this[28];
  if ( v9 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v9 + 16LL))(v9);
    this[28] = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v12 = this[39];
    v13 = *((_QWORD *)v12 + i);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *((_QWORD *)v12 + i) = 0LL;
    }
  }
  *((_DWORD *)this + 84) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)(this + 1));
  return 0LL;
}
