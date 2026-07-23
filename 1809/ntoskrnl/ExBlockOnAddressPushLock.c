/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140111A80
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x140111A18 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1402FE420 (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     MiLockImageSection @ 0x14062025C (MiLockImageSection.c)
 *     CmpRollbackLightWeightTransaction @ 0x140694AB0 (CmpRollbackLightWeightTransaction.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140698A24 (ExpBlockOnLockedHandleEntry.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x14071D464 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x14086256C (ObDrainDeferredObjectDeletion.c)
 *     EtwpKsrCallback @ 0x1408CB240 (EtwpKsrCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x140111B30 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140111B50 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  bool v10; // zf
  int v12; // ebx
  int v13; // ebx
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_11;
  v9 = a4 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
          goto LABEL_11;
        v10 = *a2 == *a3;
      }
      else
      {
        v10 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v10 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v10 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v10 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_11:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
