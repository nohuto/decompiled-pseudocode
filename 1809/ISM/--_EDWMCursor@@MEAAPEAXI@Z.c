/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x180107CF4
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x1801089B0 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x18009ECB0 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106F3C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 57) )
    DWMCursorBroker::UnregisterCursor(*((DWMCursorBroker **)this + 4), this);
  TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken((DWMCursor *)((char *)this + 136));
  v4 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
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
