/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C002E1C4
 * Callers:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0024450 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002AE8C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(int a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 ProcessWin32Process; // rax
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = (void *)a1;
    if ( a1 != -2147483630 )
    {
      GreAcquireHmgrSemaphore();
      if ( (_DWORD)v1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
        if ( CurrentProcessWin32Process )
          --*(_DWORD *)(CurrentProcessWin32Process + 60);
      }
      else if ( PsLookupProcessByProcessId(v1, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        if ( ProcessWin32Process )
          --*(_DWORD *)(ProcessWin32Process + 60);
        ObfDereferenceObject(Process);
      }
      GreReleaseHmgrSemaphore();
    }
  }
}
