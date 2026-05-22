/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x1800EDAD4
 * Callers:
 *     ??_EMouseProcessor@@OBI@EAAPEAXI@Z @ 0x1800EE7A0 (--_EMouseProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 139) = 0LL;
  v4 = *((_QWORD *)this + 138);
  if ( v4 )
  {
    *((_QWORD *)this + 138) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_BYTE *)this + 1096) )
    *((_BYTE *)this + 1096) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 56LL))(
                                *((_QWORD *)this + 13),
                                (char *)this + 112) < 0;
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
