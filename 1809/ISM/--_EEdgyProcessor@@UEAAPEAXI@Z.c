/*
 * XREFs of ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x1800CA818
 * Callers:
 *     ??_EEdgyProcessor@@W7EAAPEAXI@Z @ 0x1800CAD00 (--_EEdgyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800CE230 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::`vector deleting destructor'(EdgyProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  EdgyImpl::Reset((EdgyProcessor *)((char *)this + 80));
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
