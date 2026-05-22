/*
 * XREFs of ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800036E0
 * Callers:
 *     ?Release@DWMCursor@@W7EAAKXZ @ 0x180005770 (-Release@DWMCursor@@W7EAAKXZ.c)
 *     ?Release@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180005780 (-Release@WGIRawInputProvider@@WBA@EAAKXZ.c)
 *     ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18006C0BC (--1-$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1WGIController@@UEAA@XZ @ 0x18006CEDC (--1WGIController@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAVWGIRawInputProvider@@@Z @ 0x18006D044 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006DAD4 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyInputTarget::Release(EdgyInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
