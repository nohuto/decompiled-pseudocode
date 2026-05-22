/*
 * XREFs of ?Release@InputServiceProcessor@@UEAAKXZ @ 0x180008350
 * Callers:
 *     ?Release@InputServiceProcessor@@W7EAAKXZ @ 0x1800390F0 (-Release@InputServiceProcessor@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProcessor::Release(InputServiceProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 8);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 4) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 8);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
