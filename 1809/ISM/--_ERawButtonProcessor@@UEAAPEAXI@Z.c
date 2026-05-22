/*
 * XREFs of ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x1800D2EAC
 * Callers:
 *     ??_ERawButtonProcessor@@W7EAAPEAXI@Z @ 0x1800D3250 (--_ERawButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

RawButtonProcessor *__fastcall RawButtonProcessor::`vector deleting destructor'(RawButtonProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_QWORD *)this + 5) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 5) = 0LL;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
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
