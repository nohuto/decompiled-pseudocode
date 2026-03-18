/*
 * XREFs of ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800A3648
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800A3110 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceInfo::SetRenderingRealization(
        CCompositionSurfaceInfo *this,
        struct CBitmapRealization *a2)
{
  char v3; // bl
  struct CBitmapRealization *v4; // rcx
  __int64 v7; // rax
  int (__fastcall **v8)(struct CBitmapRealization *, GUID *, __int64 *); // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (struct CBitmapRealization *)*((_QWORD *)this + 15);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      v8 = *(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v4;
      v9 = 0LL;
      if ( (*v8)(v4, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v9) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v7 = *((_QWORD *)this + 26);
    if ( v7 )
      *(_BYTE *)(v7 + 205) = 0;
    *((_QWORD *)this + 15) = a2;
    return 1;
  }
  return v3;
}
