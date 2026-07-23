/*
 * XREFs of CmpTransMgrCommit @ 0x1406FE250
 * Callers:
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x1407F7440 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 *     CmpInitializeLightWeightTransaction @ 0x1407F7748 (CmpInitializeLightWeightTransaction.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  char v5; // si
  __int64 QuadPart; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  char v11; // [rsp+50h] [rbp-19h]
  _BYTE v12[48]; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  Interval.LowPart = -1000000;
  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
    TlgWrite(&stru_140400AA0, &unk_14036D4FB, 0LL, 0LL, 2u, &pData);
  CmpAttachToRegistryProcess((__int64)v12);
  v4 = CmpInitializeLightWeightTransaction(v9);
  if ( v4 >= 0 )
  {
    v10 = a2;
    v5 = 1;
    QuadPart = Interval.QuadPart;
    v11 = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
      }
      else
      {
        KeDelayExecutionThread(0, 0, &Interval);
        QuadPart *= 2LL;
        Interval.QuadPart = QuadPart;
        if ( QuadPart > -300000000 )
        {
          QuadPart = -300000000LL;
          Interval.QuadPart = -300000000LL;
        }
      }
      v9[0] = 0;
      v4 = CmpCommitLightWeightTransaction((__int64)v9);
    }
    while ( v4 < 0 );
  }
  KiUnstackDetachProcess((__int64)v12, 0LL);
  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
    TlgWrite(&stru_140400AA0, &unk_14036D4D9, 0LL, 0LL, 2u, &pData);
  return (unsigned int)v4;
}
