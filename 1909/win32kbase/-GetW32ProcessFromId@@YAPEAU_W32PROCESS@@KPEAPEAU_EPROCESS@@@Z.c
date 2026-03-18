/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0022080
 * Callers:
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00BB240 (HmgIsProcessCleanupRequiredByW32Pid.c)
 * Callees:
 *     <none>
 */

struct _W32PROCESS *__fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v3; // rdi
  __int64 v4; // rcx

  *a2 = 0LL;
  v3 = (void *)a1;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v4);
  if ( PsLookupProcessByProcessId(v3, a2) < 0 )
    return 0LL;
  return (struct _W32PROCESS *)PsGetProcessWin32Process(*a2);
}
