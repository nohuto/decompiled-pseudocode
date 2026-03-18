/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0093CC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0093A98 (--_GCInputManager@@IEAAPEAXI@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1C0093D58 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 v0; // rax
  CInputManager *v1; // rbx
  int v2; // edi

  v0 = Win32AllocPool(136LL, 0x67734D49u);
  v1 = (CInputManager *)v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_QWORD *)(v0 + 96) = &CIgnoreInputQueue::`vftable';
    *(_QWORD *)(v0 + 104) = &CDiscardInputQueue::`vftable';
    *(_QWORD *)(v0 + 112) = 0LL;
    *(_DWORD *)(v0 + 120) = 0;
    *(_DWORD *)(v0 + 124) = 0;
    memset((void *)(v0 + 16), 0, 0x50uLL);
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
  {
    v2 = CInputManager::Initialize(v1);
    if ( v2 < 0 )
      CInputManager::`scalar deleting destructor'(v1);
    else
      g_pInputManager = v1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
