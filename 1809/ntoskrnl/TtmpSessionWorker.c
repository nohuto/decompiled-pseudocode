/*
 * XREFs of TtmpSessionWorker @ 0x140882320
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiSessionDeviceListWorker @ 0x14087E97C (TtmiSessionDeviceListWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x14087FE4C (TtmiSessionTerminalListWorker.c)
 *     TtmpActivateSessionWorker @ 0x140881928 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140881B30 (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140881BB0 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogSessionWorkerPass @ 0x140886928 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1408869EC (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x140886A80 (TtmiLogSessionWorkerStop.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // r13
  __int64 v3; // r14
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  _KPROCESS *SessionById; // rax
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int i; // r15d
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebp
  char v19; // bl
  unsigned int v20; // ebp
  unsigned int v21; // eax
  char v23; // [rsp+20h] [rbp-68h] BYREF
  char v24[7]; // [rsp+21h] [rbp-67h] BYREF
  _BYTE v25[48]; // [rsp+28h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v5 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v6 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v6;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v6 & 4) == 0 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(v5);
    v3 = (__int64)SessionById;
    if ( !SessionById )
    {
      v8 = -1073740715;
      v9 = -1;
      v10 = -1073740715;
      v11 = 2860;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v11, v9, v10);
      goto LABEL_25;
    }
    v12 = MmAttachSession(SessionById, (__int64)v25);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = v12;
      v9 = v12;
      v11 = 2869;
      goto LABEL_4;
    }
    v2 = 1;
  }
  v13 = a1[56];
  v8 = 0;
  a1[56] = 0;
  for ( i = 1; ; ++i )
  {
    v17 = v13 & 7;
    if ( !v17 )
      break;
    TtmiLogSessionWorkerPass(v5, v17, i);
    if ( (v17 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v23, v24);
      v16 = (v17 & 0xFD ^ (v17 & 0xFD | (unsigned __int8)(4 * v23))) & 4 ^ v17 & 0xFFFFFFFD;
      v17 = ((unsigned __int8)v16 ^ (unsigned __int8)(v16 | v24[0])) & 1 ^ v16;
    }
    v18 = v17;
    v19 = v17 & 0xFB;
    v20 = v18 >> 2;
    if ( (_BYTE)v20 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v8 = TtmpActivateSessionWorker((__int64)a1, v15);
        if ( v8 != 259 )
        {
          v21 = a1[1];
          if ( (v21 & 0x1000) != 0 )
          {
            v19 = 1;
            a1[1] = v21 & 0xFFFFEFFF;
          }
        }
      }
    }
    if ( (v19 & 1) != 0 )
      TtmiSessionDeviceListWorker((__int64)a1);
    if ( (_BYTE)v20 && (a1[1] & 0x20) != 0 )
      v8 = TtmpDeactivateSessionWorker((__int64)a1, v15);
    v13 = a1[56];
    a1[56] = 0;
  }
  if ( v2 )
    MmDetachSession(v3, (__int64)v25);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v5, v8);
}
