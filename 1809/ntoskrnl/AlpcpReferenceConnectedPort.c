/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x14068ED54
 * Callers:
 *     AlpcpPortQueryServerSessionInfo @ 0x140582088 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpExposeHandleAttribute @ 0x140633868 (AlpcpExposeHandleAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1406378A0 (AlpcpImpersonateMessage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EBAC (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x14010C0F0 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
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
LABEL_8:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 )
      v2 &= -(__int64)(ObReferenceObjectSafe(v2) != 0);
    goto LABEL_8;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
