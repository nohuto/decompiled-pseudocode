/*
 * XREFs of ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180054020
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0ffff @ 0x180160DB4 (McTemplateU0ffff.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 98);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0ffff(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_CLEAREVENT_Start,
      v7,
      v8,
      *(_DWORD *)(v6 + 68),
      *(_DWORD *)(v6 + 72));
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 232LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 232LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_CLEAREVENT_Stop);
}
