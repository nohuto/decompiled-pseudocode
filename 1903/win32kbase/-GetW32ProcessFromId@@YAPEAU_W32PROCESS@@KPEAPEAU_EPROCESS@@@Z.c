/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0022018
 * Callers:
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00BE24C (HmgIsProcessCleanupRequiredByW32Pid.c)
 * Callees:
 *     <none>
 */

struct _W32PROCESS *__fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  *a2 = 0LL;
  v3 = (void *)a1;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v5, v4);
  if ( PsLookupProcessByProcessId(v3, a2) < 0 )
    return 0LL;
  return (struct _W32PROCESS *)PsGetProcessWin32Process(*a2);
}
