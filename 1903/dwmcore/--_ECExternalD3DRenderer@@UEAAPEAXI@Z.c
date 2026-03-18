/*
 * XREFs of ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x18023F450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CExternalD3DRenderer *__fastcall CExternalD3DRenderer::`vector deleting destructor'(
        CExternalD3DRenderer *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
