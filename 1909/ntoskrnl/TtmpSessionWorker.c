/*
 * XREFs of TtmpSessionWorker @ 0x1408BE740
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     TtmiSessionDeviceListWorker @ 0x1408BAAFC (TtmiSessionDeviceListWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1408BBFE0 (TtmiSessionTerminalListWorker.c)
 *     TtmpAcquireSessionLock @ 0x1408BDD0C (TtmpAcquireSessionLock.c)
 *     TtmpActivateSessionWorker @ 0x1408BDD3C (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408BDF44 (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408BDFC4 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpReleaseSessionLock @ 0x1408BE680 (TtmpReleaseSessionLock.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogSessionWorkerPass @ 0x1408C2E9C (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1408C2F60 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1408C2FF4 (TtmiLogSessionWorkerStop.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  char v2; // r13
  __int64 v3; // r14
  unsigned int v4; // r15d
  unsigned int v5; // ecx
  ULONG_PTR SessionById; // rax
  int v7; // esi
  unsigned int v8; // ebx
  unsigned int i; // r12d
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  char v14; // bl
  unsigned int v15; // ebp
  unsigned int v16; // eax
  char v18; // [rsp+20h] [rbp-68h] BYREF
  char v19[7]; // [rsp+21h] [rbp-67h] BYREF
  _BYTE v20[48]; // [rsp+28h] [rbp-60h] BYREF

  memset(v20, 0, sizeof(v20));
  v2 = 0;
  v3 = 0LL;
  TtmpAcquireSessionLock();
  v4 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v5 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v5;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v5 & 4) == 0 )
  {
    SessionById = MmGetSessionById(v4);
    v3 = SessionById;
    if ( !SessionById )
    {
      v7 = -1073740715;
LABEL_4:
      TtmiLogError("TtmpSessionWorker");
      goto LABEL_24;
    }
    v7 = MmAttachSession(SessionById);
    if ( v7 < 0 )
      goto LABEL_4;
    v2 = 1;
  }
  v8 = a1[56];
  v7 = 0;
  a1[56] = 0;
  for ( i = 1; ; ++i )
  {
    v12 = v8 & 7;
    if ( !v12 )
      break;
    TtmiLogSessionWorkerPass(v4, v12, i);
    if ( (v12 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v18, v19);
      v11 = (v12 & 0xFD ^ (v12 & 0xFD | (unsigned __int8)(4 * v18))) & 4 ^ v12 & 0xFFFFFFFD;
      v12 = ((unsigned __int8)v11 ^ (unsigned __int8)(v11 | v19[0])) & 1 ^ v11;
    }
    v13 = v12;
    v14 = v12 & 0xFB;
    v15 = v13 >> 2;
    if ( (_BYTE)v15 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v7 = TtmpActivateSessionWorker((__int64)a1, v10);
        if ( v7 != 259 )
        {
          v16 = a1[1];
          if ( (v16 & 0x1000) != 0 )
          {
            v14 = 1;
            a1[1] = v16 & 0xFFFFEFFF;
          }
        }
      }
    }
    if ( (v14 & 1) != 0 )
      TtmiSessionDeviceListWorker((__int64)a1);
    if ( (_BYTE)v15 && (a1[1] & 0x20) != 0 )
      v7 = TtmpDeactivateSessionWorker((__int64)a1, v10);
    v8 = a1[56];
    a1[56] = 0;
  }
  if ( v2 )
    MmDetachSession(v3, (__int64)v20);
LABEL_24:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  TtmpReleaseSessionLock();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v4, (unsigned int)v7);
}
