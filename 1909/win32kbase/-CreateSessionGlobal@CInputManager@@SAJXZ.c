/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00A6A50
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00B7548 (--_GCInputManager@@IEAAPEAXI@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 *v0; // rax
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  __int64 KernelEvent; // rax
  unsigned int v4; // edx

  v0 = (__int64 *)Win32AllocPool(128LL, 0x67734D49u);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    *v0 = 0LL;
    v0[1] = 0LL;
    v0[11] = (__int64)&CIgnoreInputQueue::`vftable';
    v0[12] = (__int64)&CDiscardInputQueue::`vftable';
    v0[13] = 0LL;
    v0[14] = 0LL;
    memset(v0 + 2, 0, 0x48uLL);
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    KernelEvent = hUserCreateKernelEvent(1LL);
    *v2 = KernelEvent;
    if ( KernelEvent )
    {
      v2[15] = 0LL;
      g_pInputManager = (CInputManager *)v2;
    }
    else
    {
      v1 = -1073741801;
      CInputManager::`scalar deleting destructor'((CInputManager *)v2, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
