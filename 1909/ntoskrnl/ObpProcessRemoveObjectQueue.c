/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1406B64E0
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140108A40 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x140608E80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406B6830 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x14089EE58 (ObpDeregisterObject.c)
 */

void ObpProcessRemoveObjectQueue()
{
  ULONG_PTR NextSession; // rax
  __int64 v1; // rbx
  int v2; // r8d
  __int128 **v3; // r11
  int v4; // r10d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r9d
  int *v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  signed __int32 v18[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v19; // [rsp+28h] [rbp-70h]
  __int128 *v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_14042BE50 )
  {
    v15 = __rdtsc();
    v16 = 41929663 * ((((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) >> 4);
    qword_14042BE50 = v16;
    if ( !v16 )
      qword_14042BE50 = 1LL;
    v17 = __rdtsc();
    qword_14042BE58 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4)) ^ 0xC24LL;
    qword_14042BE60 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_14042BE60 )
  {
    v19 = &xmmword_140572AE0;
    v20 = &xmmword_140572AA0;
    NextSession = MmGetNextSession(0LL);
    v1 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession) >= 0 )
      {
        if ( !qword_14042BE68 )
          qword_14042BE68 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140572AB0 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v20;
          v4 = 2;
          do
          {
            v5 = 0;
            v6 = *(_QWORD *)*v3;
            v7 = *((_DWORD *)*v3 + 4);
            v8 = v2 + v6 + (unsigned int)*v3;
            if ( v7 )
            {
              v9 = *(int **)*v3;
              do
              {
                v10 = *v9;
                ++v5;
                v11 = *v9++;
                v8 = v5 * ((v10 + *(_DWORD *)((v11 >> 4) + v6)) ^ v8);
              }
              while ( v5 < v7 );
            }
            --v3;
            v2 += 2 * v8;
            --v4;
          }
          while ( v4 );
          if ( v2 != qword_14042BE68 && !qword_14042BE20 )
          {
            v18[8] = -2071986176;
            qword_14042BE20 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_14042BE28 = 0LL;
            qword_14042BE30 = 0LL;
            qword_14042BE38 = 266LL;
            qword_14042BE40 = v6;
          }
        }
        MmDetachSession(v1, (__int64)v21);
      }
      MmQuitNextSession(v1);
    }
    if ( qword_14042BE20 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_14042BE48 = 3878784LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_14042BE60 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  do
  {
    v12 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v12);
      if ( v13 )
        ObpHandleRevocationBlockRemoveObject(v13);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v12);
      v14 = *(_QWORD *)(v12 + 8);
      ObpRemoveObjectRoutine(v12, 1);
      v12 = v14;
    }
    while ( v14 && v14 != 1 );
  }
  while ( ObpRemoveObjectList != 1 || _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL) != 1 );
  _InterlockedOr(v18, 0);
  if ( ObpRemoveObjectWait )
    ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
}
