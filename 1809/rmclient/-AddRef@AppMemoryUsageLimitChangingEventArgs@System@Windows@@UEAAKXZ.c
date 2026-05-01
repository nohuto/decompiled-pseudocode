/*
 * XREFs of ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180001A10
 * Callers:
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x180009F40 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x180009F50 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18000D994 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
}
