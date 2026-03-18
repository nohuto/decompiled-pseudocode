/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x140646040
 * Callers:
 *     AlpcpSendCloseMessage @ 0x1406494DC (AlpcpSendCloseMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140645AB4 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406461E4 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1406DF1F4 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpLogClosePort @ 0x140886C94 (AlpcpLogClosePort.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  _QWORD *v4; // r15
  __int64 result; // rax
  char v6; // r14
  volatile signed __int32 *v7; // rcx
  signed __int32 v8; // eax
  signed __int64 *v9; // rbx
  signed __int64 *v10; // rsi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v12, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 256) & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v6 = 1;
      v7 = (volatile signed __int32 *)Object;
      *(_WORD *)(v2 + 244) &= ~0x2000u;
      v8 = _InterlockedExchangeAdd(v7 + 100, 1u);
      v9 = (signed __int64 *)Object;
      *(_DWORD *)(v2 + 44) = v8 + 1;
      *(_QWORD *)(v2 + 120) = v9[7];
      *(_QWORD *)(v2 + 184) = v4;
      *(_QWORD *)(v2 + 192) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        AlpcpSetOwnerPortMessage(v2, v9, 1u);
        v10 = (signed __int64 *)v12;
      }
      else
      {
        AlpcpSetOwnerPortMessage(v2, (void *)v1, 1u);
        v10 = (signed __int64 *)v12;
        if ( v9 != (signed __int64 *)v12 )
        {
          if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v9 + 44);
          KeAbPostRelease((ULONG_PTR)(v9 + 44));
          v9 = (signed __int64 *)Object;
          v10 = (signed __int64 *)v12;
        }
        v6 = 0;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogClosePort(v2);
      a1[4] = (__int64)v10;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage((__int64)a1);
      if ( v6 && v9 != v10 )
      {
        if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v9 + 44);
        KeAbPostRelease((ULONG_PTR)(v9 + 44));
        v9 = (signed __int64 *)Object;
      }
      ObfDereferenceObject(v9);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v12, Object);
      return 3221227271LL;
    }
  }
  return result;
}
