/*
 * XREFs of ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800AC70C
 * Callers:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x1800084E0 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LampArrayRawInputProvider::Shutdown(ULONG_PTR dwData)
{
  void *v2; // rbx

  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(dwData + 104), 0LL);
  if ( v2 )
  {
    if ( WaitForSingleObject(v2, 0) == 258 )
    {
      if ( QueueUserAPC((PAPCFUNC)LampArrayRawInputProvider::TerminateWorkerThreadApc, v2, dwData) )
        WaitForSingleObject(v2, 0x9C4u);
    }
    CloseHandle(v2);
  }
}
