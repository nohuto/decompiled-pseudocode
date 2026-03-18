/*
 * XREFs of ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C2E4
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C023BCE4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0243E90 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C023C684 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseConsumerResources(struct _KPROCESS **this, __int64 a2)
{
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v4; // rdi
  struct _KPROCESS *v5; // rsi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(this, a2);
    v4 = this[7];
    v5 = (struct _KPROCESS *)CurrentProcess;
    if ( (struct _KPROCESS *)CurrentProcess != v4 )
      KeStackAttachProcess(v4, &ApcState);
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 1LL, 1LL);
    if ( v5 != v4 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( *this )
  {
    ObfDereferenceObject(*this);
    *this = 0LL;
  }
}
