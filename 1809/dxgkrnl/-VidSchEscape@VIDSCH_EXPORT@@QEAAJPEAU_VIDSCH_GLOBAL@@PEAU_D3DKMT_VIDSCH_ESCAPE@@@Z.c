/*
 * XREFs of ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x1C0039D44
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchEscape(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _D3DKMT_VIDSCH_ESCAPE *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _D3DKMT_VIDSCH_ESCAPE *))(*((_QWORD *)this + 1)
                                                                                            + 64LL))(
           a2,
           a3);
}
