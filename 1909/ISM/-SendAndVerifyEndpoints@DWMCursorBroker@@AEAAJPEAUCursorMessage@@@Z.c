/*
 * XREFs of ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180143E5C
 * Callers:
 *     ?OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x180143C4C (-OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180143D00 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18014403C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::SendAndVerifyEndpoints(DWMCursorBroker *this, struct CursorMessage *a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi

  v3 = (_QWORD *)((char *)this + 216);
  v5 = 10LL;
  do
  {
    if ( *v3
      && (*(int (__fastcall **)(_QWORD, _QWORD, __int64, struct CursorMessage *, int))(**((_QWORD **)this + 22) + 160LL))(
           *((_QWORD *)this + 22),
           *v3,
           4LL,
           a2,
           72) < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 152LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
    }
    v3 += 3;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
