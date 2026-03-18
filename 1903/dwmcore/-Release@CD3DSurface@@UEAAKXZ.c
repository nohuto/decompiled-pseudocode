/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x1800C1860
 * Callers:
 *     ?Release@CD3DSurface@@WBI@EAAKXZ @ 0x1800ECA80 (-Release@CD3DSurface@@WBI@EAAKXZ.c)
 *     ?Release@CD3DSurface@@WHI@EAAKXZ @ 0x1800ECA90 (-Release@CD3DSurface@@WHI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, CD3DSurface *); // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, CD3DSurface *))*((_QWORD *)this + 2);
    if ( v4 )
      (**v4)(v4, this);
    else
      (*(void (__fastcall **)(CD3DSurface *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  }
  return v2;
}
