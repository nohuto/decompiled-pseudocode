/*
 * XREFs of ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800ABDB0
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800AA630 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x1800AD55C (--1CVisualReferenceController@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D5684 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  char *v1; // rdi
  __int64 v3; // rbx
  CVisualReferenceController **v4; // r8
  CVisualReferenceController **i; // rcx

  v1 = (char *)this + 64;
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
