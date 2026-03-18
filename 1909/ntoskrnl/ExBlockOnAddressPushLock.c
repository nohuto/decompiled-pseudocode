/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400F8900
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1400F8894 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14031BE6C (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmpTransSearchAddTrans @ 0x1406367D8 (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x1406A5458 (MiLockImageSection.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E34C0 (CmpRollbackLightWeightTransaction.c)
 *     PopBatteryUpdateCurrentState @ 0x140749894 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x140825250 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x14089D5BC (ObDrainDeferredObjectDeletion.c)
 * Callees:
 *     ExBlockPushLock @ 0x1400F89C0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400F89E0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  bool v10; // zf
  int v12; // ebx
  int v13; // ebx
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_10;
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
          goto LABEL_10;
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
LABEL_10:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
