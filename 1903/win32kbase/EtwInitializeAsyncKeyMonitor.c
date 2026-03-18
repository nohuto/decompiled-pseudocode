/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1C010D068
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0071D10 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  _DWORD *v0; // rax
  __int64 v1; // rbx

  v0 = Win32AllocPoolZInit(0x68uLL, 1634945861LL);
  v1 = (__int64)v0;
  if ( v0 )
  {
    *v0 = 0;
    v0[1] = 0;
    *((_QWORD *)v0 + 12) = 0LL;
    *((_BYTE *)v0 + 88) = 0;
    memset(v0 + 2, -1, 0x50uLL);
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpAsyncKeyEventMonitor, v1, 0LL) )
    Win32FreePool(v1);
  return 0LL;
}
