/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1C010A6F8
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C005B840 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00BF640 (memset.c)
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
