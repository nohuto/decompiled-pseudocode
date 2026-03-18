/*
 * XREFs of ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x1801A9A90
 * Callers:
 *     ?ProcessUpdateSDRToHDRMultiplier@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x1801A74A8 (-ProcessUpdateSDRToHDRMultiplier@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::SetSDRBoost(CHwndRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 110) != CCommonRegistryData::m_flSDRBoostOverride )
  {
    *((float *)this + 110) = CCommonRegistryData::m_flSDRBoostOverride;
    v3 = *((_QWORD *)this + 14);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3);
    *((_BYTE *)this + 97) = 1;
  }
}
