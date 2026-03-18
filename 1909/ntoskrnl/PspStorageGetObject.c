/*
 * XREFs of PspStorageGetObject @ 0x14030A3B8
 * Callers:
 *     PsGetSiloContext @ 0x140306680 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1408C42E0 (PsFreeSiloContextSlot.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  signed __int64 *v4; // rdi
  unsigned __int64 v5; // rbx

  if ( a2 < 0x20 )
    goto LABEL_4;
  a2 -= 32;
  if ( a2 < 0x100 )
  {
    a1 = *(_QWORD *)(a1 + 512);
    if ( !a1 )
      return 3221226021LL;
LABEL_4:
    v4 = (signed __int64 *)(a1 + 16LL * a2);
    ExAcquirePushLockSharedEx((ULONG_PTR)v4, 0LL);
    v5 = v4[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 )
      ObfReferenceObjectWithTag((PVOID)(v4[1] & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    if ( v5 )
    {
      *a3 = v5;
      return 0LL;
    }
    return 3221226021LL;
  }
  return 3221225485LL;
}
