/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x1800084F0
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180028E40 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180028EF0 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18002AB30 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x180038700 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x180038710 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800AC5DC (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(LampArrayRawInputProvider *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( v2 )
  {
    if ( v2 == 1 )
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this);
  }
  else
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
