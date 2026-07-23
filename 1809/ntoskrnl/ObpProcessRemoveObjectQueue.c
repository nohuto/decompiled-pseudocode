/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140692B80
 * Callers:
 *     <none>
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010E044 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x140646E80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140692D20 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x1406D08F0 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x140863E20 (ObpDeregisterObject.c)
 */

void ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  _KPROCESS *NextSession; // rax
  __int64 v7; // rbx
  int v8; // r8d
  __int128 **v9; // r11
  int v10; // r10d
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  int v14; // r9d
  int *v15; // r14
  int v16; // edx
  __int64 v17; // rax
  signed __int32 v18[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v19; // [rsp+28h] [rbp-70h]
  __int128 *v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140406910 )
  {
    v3 = __rdtsc();
    v4 = 41929663 * ((((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) >> 4);
    qword_140406910 = v4;
    if ( !v4 )
      qword_140406910 = 1LL;
    v5 = __rdtsc();
    qword_140406918 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4)) ^ 0xC24LL;
    qword_140406920 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140406920 )
  {
    v19 = &xmmword_1405429E0;
    v20 = &xmmword_1405429A0;
    NextSession = (_KPROCESS *)MmGetNextSession(0LL);
    v7 = (__int64)NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession, (__int64)v21) >= 0 )
      {
        if ( !qword_140406928 )
          qword_140406928 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_1405429B0 && (_BYTE)KdDebuggerNotPresent )
        {
          v8 = 0;
          v9 = &v20;
          v10 = 2;
          do
          {
            v11 = 0;
            v12 = *(_QWORD *)*v9;
            v13 = *((_DWORD *)*v9 + 4);
            v14 = v8 + (unsigned int)*v9 + v12;
            if ( v13 )
            {
              v15 = *(int **)*v9;
              do
              {
                v16 = *v15;
                ++v11;
                v17 = *v15++;
                v14 = v11 * ((v16 + *(_DWORD *)((v17 >> 4) + v12)) ^ v14);
              }
              while ( v11 < v13 );
            }
            --v9;
            v8 += 2 * v14;
            --v10;
          }
          while ( v10 );
          if ( v8 != qword_140406928 && !qword_1404068E0 )
          {
            v18[8] = -2071986176;
            qword_1404068E0 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_1404068E8 = 0LL;
            qword_1404068F0 = 0LL;
            qword_1404068F8 = 266LL;
            qword_140406900 = v12;
          }
          MmDetachSession(v7, (__int64)v21);
        }
        else
        {
          MmDetachSession(v7, (__int64)v21);
        }
      }
      MmQuitNextSession(v7);
    }
    if ( qword_1404068E0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140406908 = 3878784LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140406920 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  do
  {
    v0 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v0);
      if ( v1 )
        ObpHandleRevocationBlockRemoveObject(v1);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v0);
      v2 = *(_QWORD *)(v0 + 8);
      ObpRemoveObjectRoutine(v0, 1);
      v0 = v2;
    }
    while ( v2 && v2 != 1 );
  }
  while ( ObpRemoveObjectList != 1 || _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL) != 1 );
  _InterlockedOr(v18, 0);
  if ( ObpRemoveObjectWait )
    ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
}
