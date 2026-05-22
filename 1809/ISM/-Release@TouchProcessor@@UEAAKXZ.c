/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x18000B530
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x18000B330 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B350 (-Release@MPCFocusTarget@@WEI@EAAKXZ.c)
 *     ?Release@TouchProcessor@@WCI@EAAKXZ @ 0x1800383A0 (-Release@TouchProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 8);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 4) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 8);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
