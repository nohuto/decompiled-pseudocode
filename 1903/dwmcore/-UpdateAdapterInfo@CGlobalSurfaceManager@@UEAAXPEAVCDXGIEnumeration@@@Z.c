/*
 * XREFs of ?UpdateAdapterInfo@CGlobalSurfaceManager@@UEAAXPEAVCDXGIEnumeration@@@Z @ 0x1800CECD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 */

void __fastcall CGlobalSurfaceManager::UpdateAdapterInfo(CGlobalSurfaceManager *this, struct CDXGIEnumeration *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 60,
    (void (__fastcall ***)(_QWORD))a2);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  CGlobalSurfaceManager::ResetTokenThread(this);
}
