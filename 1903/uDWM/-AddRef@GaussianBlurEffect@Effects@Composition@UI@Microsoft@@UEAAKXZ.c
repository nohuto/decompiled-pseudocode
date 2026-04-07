/*
 * XREFs of ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x18003D3E0
 * Callers:
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAKXZ @ 0x1800501A0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ @ 0x1800501B0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ @ 0x1800501C0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ @ 0x1800501D0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::AddRef(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
