/*
 * XREFs of AllocateW32Process @ 0x1C01239F0
 * Callers:
 *     W32pProcessCallout @ 0x1C0123600 (W32pProcessCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  int v2; // edi
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v2 = 1073741851;
  }
  else
  {
    v4 = (volatile signed __int32 *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v8 = v4;
    if ( v4 )
    {
      memset((void *)v4, 0, W32ProcessSize);
      LOBYTE(v9) = 1;
      GdiPreUserProcessCallout(v8, v9);
      *(_QWORD *)v8 = a1;
      v2 = PsSetProcessWin32Process(a1, v8, 0LL);
      if ( v2 < 0 )
      {
        UserSetLastError(5LL, v10, v11, v12);
        Win32FreePool(v8);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v8);
        _InterlockedIncrement(v8 + 2);
      }
    }
    else
    {
      UserSetLastError(8LL, v5, v6, v7);
      v2 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v2;
}
