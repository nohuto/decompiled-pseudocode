/*
 * XREFs of ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180022CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rbx

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 98);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 232LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 232LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v4);
  --*(_DWORD *)(v4 + 52);
}
