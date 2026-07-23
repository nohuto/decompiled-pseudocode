/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140615368
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1406151D8 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1406BE090 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rsi
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v4 - 2), 0LL);
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = *v4;
      v9 = v4[1];
      goto LABEL_4;
    }
    v8 = v4[2];
  }
  else
  {
    v8 = *v4;
  }
  v9 = v8;
LABEL_4:
  if ( v8 )
    v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
  if ( v9 )
    v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
  if ( v8 && v9 )
  {
    ExAcquirePushLockSharedEx(v8 + 352, 0LL);
    if ( v9 != v8 )
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
    if ( (*(_DWORD *)(v8 + 416) & 0x20) == 0 && (*(_DWORD *)(v9 + 416) & 0x20) == 0 )
    {
      *a2 = v8;
      result = 0LL;
      *a3 = v9;
      return result;
    }
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v8, v9);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
  }
  return 3221225527LL;
}
