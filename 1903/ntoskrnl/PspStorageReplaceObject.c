/*
 * XREFs of PspStorageReplaceObject @ 0x1408CD9EC
 * Callers:
 *     PsReplaceSiloContext @ 0x1408C4CA0 (PsReplaceSiloContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x14077C5AC (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, unsigned int a2, void *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  ULONG_PTR v8; // rbx
  void *v9; // rdi
  void *v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArray(a1, a2, &v11, &v12);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    v8 = v12 + 16LL * v11;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = *(void **)(v8 + 8);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      v9 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    if ( (v7 & 0x80000000) != 0 )
    {
      v10 = a3;
    }
    else
    {
      if ( !v9 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v9;
        return v7;
      }
      v10 = v9;
    }
    ObfDereferenceObject(v10);
    return v7;
  }
  return result;
}
