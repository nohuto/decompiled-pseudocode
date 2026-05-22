/*
 * XREFs of ??1DWMCursor@@MEAA@XZ @ 0x180144384
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18014445C (--_EDWMCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x1800D3894 (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180143FFC (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMCursor::~DWMCursor(DWMCursor *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 57) )
    DWMCursorBroker::UnregisterCursor(*((DWMCursorBroker **)this + 4), this);
  if ( *((_BYTE *)this + 160) )
    TestCommandHost::UnregisterForTestCommandMessage(
      *((_DWORD *)this + 34),
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 19));
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 8);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
