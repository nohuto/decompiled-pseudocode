/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x1800068C0
 * Callers:
 *     ?AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x180009F90 (-AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180009FA0 (-AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ @ 0x180009FB0 (-AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CAppMemoryReport::AddRef(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 5);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
}
