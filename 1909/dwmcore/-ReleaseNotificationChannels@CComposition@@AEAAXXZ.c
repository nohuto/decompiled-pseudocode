/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18017643C
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801760AC (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 114); i = (unsigned int)(i + 1) )
    CDirtyRegion::Release(*(CDirtyRegion **)(*((_QWORD *)this + 54) + 8 * i));
  *((_DWORD *)this + 114) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 432, 8u);
}
