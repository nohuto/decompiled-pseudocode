/*
 * XREFs of ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x180027B1C
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDXGIEnumeration::IsUpToDate(CDXGIEnumeration *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)this + 14) )
  {
    return qword_180339CF8 == this;
  }
  return v2;
}
