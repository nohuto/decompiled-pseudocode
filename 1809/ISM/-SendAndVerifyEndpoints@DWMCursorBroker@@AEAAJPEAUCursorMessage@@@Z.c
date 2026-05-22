/*
 * XREFs of ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801067E4
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180106400 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106F3C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180108810 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
      && (*(int (__fastcall **)(_QWORD, _QWORD, __int64, struct CursorMessage *, int))(**((_QWORD **)this + 22) + 152LL))(
           *((_QWORD *)this + 22),
           *v3,
           4LL,
           a2,
           64) < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 144LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
