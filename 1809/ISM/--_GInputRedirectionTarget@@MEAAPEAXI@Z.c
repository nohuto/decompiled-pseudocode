/*
 * XREFs of ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1800D19F0
 * Callers:
 *     ??_EInputRedirectionTarget@@OBA@EAAPEAXI@Z @ 0x1800D2090 (--_EInputRedirectionTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
InputRedirectionTarget *__fastcall InputRedirectionTarget::`scalar deleting destructor'(
        InputRedirectionTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
  *((_QWORD *)this + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v5);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
