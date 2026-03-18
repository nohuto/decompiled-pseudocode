/*
 * XREFs of ?ProcessSetIsLocal@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL@@@Z @ 0x18019130C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetIsLocal(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 108) != v3 )
  {
    *((_BYTE *)this + 108) = v3;
    (*(void (__fastcall **)(CCompositionSkyBoxBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  return 0LL;
}
