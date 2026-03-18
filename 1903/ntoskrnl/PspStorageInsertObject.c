/*
 * XREFs of PspStorageInsertObject @ 0x14077C504
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x1408C4B20 (PsInsertSiloContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PspGetStorageArray @ 0x14077C5AC (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, signed __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rdx
  signed __int64 v9; // rsi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArray(a1, a2, &v10, &v11);
  if ( (int)result >= 0 )
  {
    ObfReferenceObject((PVOID)a4);
    v7 = v11 + 16LL * v10;
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = a4 | 1;
    if ( !a3 )
      v8 = a4;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease(v7);
    if ( v9 )
    {
      ObfDereferenceObject((PVOID)a4);
      return 3221225659LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
