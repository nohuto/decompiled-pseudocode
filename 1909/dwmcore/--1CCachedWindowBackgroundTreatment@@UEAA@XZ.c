/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@UEAA@XZ @ 0x180010EEC
 * Callers:
 *     ??_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x180010EB0 (--_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x1800121F4 (-RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this)
{
  CWindowBackgroundTreatment *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCachedWindowBackgroundTreatment::`vftable';
  v2 = (CWindowBackgroundTreatment *)*((_QWORD *)this + 2);
  if ( v2 )
    CWindowBackgroundTreatment::RemoveDependentCachedTreatment(v2, this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)this + 24);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
