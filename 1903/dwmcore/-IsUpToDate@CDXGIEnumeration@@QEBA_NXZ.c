/*
 * XREFs of ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800A8B48
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A8A7C (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDXGIEnumeration::IsUpToDate(CDXGIEnumeration *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)this + 14) )
  {
    return qword_18033CC08 == this;
  }
  return v2;
}
