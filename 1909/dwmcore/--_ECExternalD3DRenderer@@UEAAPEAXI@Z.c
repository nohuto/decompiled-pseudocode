/*
 * XREFs of ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x18023DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
