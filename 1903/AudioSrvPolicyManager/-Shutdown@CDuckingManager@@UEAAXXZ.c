/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x180009030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  struct CAudioThreadPool *v1; // r9
  __int64 v2; // rdx

  v1 = ThreadPool;
  *((_DWORD *)this + 72) = 1;
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 34);
    if ( v2 )
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)v1 + 40LL))(v1, v2, 0LL);
  }
}
