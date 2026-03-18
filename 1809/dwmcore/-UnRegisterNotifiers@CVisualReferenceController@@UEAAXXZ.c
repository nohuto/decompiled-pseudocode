/*
 * XREFs of ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x18009FF00
 * Callers:
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x18009FE50 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800A0044 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180073E04 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rbx
  CVisualReferenceController **v4; // r8
  CVisualReferenceController **i; // rcx

  v1 = (__int64 *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = *(CVisualReferenceController ***)(v3 + 32);
    for ( i = *(CVisualReferenceController ***)(v3 + 24); i != v4 && *i != this; ++i )
      ;
    memmove_0(i, i + 1, (char *)v4 - (char *)(i + 1));
    *(_QWORD *)(v3 + 32) -= 8LL;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(v1);
  }
}
