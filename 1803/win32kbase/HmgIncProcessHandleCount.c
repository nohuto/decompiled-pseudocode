/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C001ED30
 * Callers:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0024450 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 * Callees:
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(int a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  struct _ERESOURCE *v5; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // edx
  __int64 ProcessWin32Process; // rax
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)a1;
  v4 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    v5 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz(a1, a2, a3, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
      {
        v7 = *(_DWORD *)(CurrentProcessWin32Process + 60);
        if ( v7 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v9 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          *(_DWORD *)(CurrentProcessWin32Process + 60) = ++v7;
          if ( v7 <= v9 )
            v7 = v9;
          *(_DWORD *)(CurrentProcessWin32Process + 64) = v7;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
      {
        v12 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v12 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v13 = *(_DWORD *)(ProcessWin32Process + 64);
          v14 = v12 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v14;
          if ( v14 <= v13 )
            v14 = v13;
          *(_DWORD *)(ProcessWin32Process + 64) = v14;
        }
      }
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v7, (unsigned int)&LockRelease, v8, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
  }
  return v4;
}
