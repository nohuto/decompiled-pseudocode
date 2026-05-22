/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180070A50
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180070530 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180071040 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x180071450 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x180071460 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(ULONG_PTR dwData)
{
  _DWORD *v2; // rbx
  unsigned __int32 v3; // edi
  __int64 v4; // rax
  void *v5; // rbx

  v2 = (_DWORD *)(dwData + 16);
  v3 = _InterlockedDecrement((volatile signed __int32 *)(dwData + 24));
  if ( !v3 )
  {
    v4 = *(_QWORD *)v2;
    *(_DWORD *)(dwData + 24) = 1;
    (*(void (__fastcall **)(ULONG_PTR))(v4 + 32))(dwData + 16);
    v2[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  if ( v3 == 1 )
  {
    v5 = (void *)_InterlockedExchange64((volatile __int64 *)(dwData + 104), 0LL);
    if ( v5 )
    {
      if ( WaitForSingleObject(v5, 0) == 258
        && QueueUserAPC(LampArrayRawInputProvider::TerminateWorkerThreadApc, v5, dwData) )
      {
        WaitForSingleObject(v5, 0x9C4u);
      }
      CloseHandle(v5);
    }
  }
  return v3;
}
