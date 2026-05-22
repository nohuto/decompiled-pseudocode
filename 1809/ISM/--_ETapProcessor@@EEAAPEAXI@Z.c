/*
 * XREFs of ??_ETapProcessor@@EEAAPEAXI@Z @ 0x1800D2530
 * Callers:
 *     ??_ETapProcessor@@GBI@EAAPEAXI@Z @ 0x1800D2CF0 (--_ETapProcessor@@GBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
TapProcessor *__fastcall TapProcessor::`vector deleting destructor'(TapProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &TapProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &TapProcessor::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 2) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
  *((_QWORD *)this + 3) = &TapProcessor::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    DestroyInteractionContext(v4);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
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
