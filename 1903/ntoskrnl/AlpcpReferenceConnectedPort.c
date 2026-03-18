/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1405E4980
 * Callers:
 *     AlpcpPortQueryServerSessionInfo @ 0x1405B0B14 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpExposeHandleAttribute @ 0x1405DFE00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1405E4570 (AlpcpImpersonateMessage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B1744 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    ExAcquirePushLockSharedEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    if ( v4 == 4 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v4 != 6 )
      {
LABEL_9:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 && !ObReferenceObjectSafe(v2) )
      v2 = 0LL;
    goto LABEL_9;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
