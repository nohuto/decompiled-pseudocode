/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C0023B18
 * Callers:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0020C78 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 ProcessWin32Process; // rax
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    v1 = (void *)(int)a1;
    if ( (_DWORD)a1 != -2147483630 )
    {
      GreAcquireHmgrSemaphore(a1);
      if ( (_DWORD)v1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
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
      GreReleaseHmgrSemaphore(v4);
    }
  }
}
