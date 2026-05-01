/*
 * XREFs of ?AddRef@CImmersiveWindowFactory@@UEAAKXZ @ 0x180083950
 * Callers:
 *     ?AddRef@CImmersiveWindowFactory@@W7EAAKXZ @ 0x1800C1FD0 (-AddRef@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x1800C1FE0 (-AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WEI@EAAKXZ @ 0x1800C1FF0 (-AddRef@CImmersiveWindowFactory@@WEI@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WFA@EAAKXZ @ 0x1800C2000 (-AddRef@CImmersiveWindowFactory@@WFA@EAAKXZ.c)
 *     ?AddRef@CImmersiveWindowFactory@@WKI@EAAKXZ @ 0x1800C2010 (-AddRef@CImmersiveWindowFactory@@WKI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactory::AddRef(CImmersiveWindowFactory *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 23);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 23, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
