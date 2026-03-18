/*
 * XREFs of ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801CD9DC
 * Callers:
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801CD94C (--1CVisualGroup@@EEAA@XZ.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801CDCA0 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualGroup::ClearVisualGroupData(CVisualGroup *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 j; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 28); j = (unsigned int)(j + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 8u);
}
