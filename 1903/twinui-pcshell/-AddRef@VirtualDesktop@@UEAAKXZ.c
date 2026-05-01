/*
 * XREFs of ?AddRef@VirtualDesktop@@UEAAKXZ @ 0x180082010
 * Callers:
 *     ?AddRef@VirtualDesktop@@W7EAAKXZ @ 0x1800BEDB0 (-AddRef@VirtualDesktop@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x1800BEDC0 (-AddRef@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x1800BEDD0 (-AddRef@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCA@EAAKXZ @ 0x1800BEDE0 (-AddRef@VirtualDesktop@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(VirtualDesktop *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 9);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
