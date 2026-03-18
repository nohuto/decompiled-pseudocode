/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014BDEC
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 52) + 8 * i));
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 416, 8u);
}
