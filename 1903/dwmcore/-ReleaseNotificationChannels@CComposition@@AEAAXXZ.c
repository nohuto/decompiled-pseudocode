/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180177BAC
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 114); i = (unsigned int)(i + 1) )
    CDirtyRegion::Release(*(CDirtyRegion **)(*((_QWORD *)this + 54) + 8 * i));
  *((_DWORD *)this + 114) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 432, 8u);
}
