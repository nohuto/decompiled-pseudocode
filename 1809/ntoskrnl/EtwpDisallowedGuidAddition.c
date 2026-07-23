/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x1408B6364
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1408C43DC (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x1405C660C (EtwpIsGuidAllowed.c)
 *     EtwpCalculateUpdateNotification @ 0x140658BC8 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x140659E08 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  _QWORD *result; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rbp
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int8 v12; // r13
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // r11
  __int64 v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // dl
  volatile signed __int32 *v20; // r15
  char updated; // al
  __int64 v22; // r8
  __int64 v23; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v26; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0LL;
  v2 = (_DWORD *)a2;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v5 = (__int64)result;
  if ( result )
  {
    KeEnterCriticalRegion();
    v6 = v5 + 408;
    ExAcquirePushLockExclusiveEx(v5 + 408, 0LL);
    *(_QWORD *)(v5 + 416) = KeGetCurrentThread();
    v7 = EtwpBuildNotificationPacket(v5, 0LL, 0, &v26);
    v8 = v26;
    if ( !v7 )
    {
      *v26 = 3;
      *(_OWORD *)(v8 + 10) = *(_OWORD *)a1;
      *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
      if ( !EtwpIsGuidAllowed((__int64)v2, a1) )
      {
        v9 = 0LL;
        if ( !*(_QWORD *)(v5 + 400) )
        {
          v10 = *(_QWORD *)(v5 + 16);
          if ( v10 != v5 + 16 )
            v9 = v10 - 16;
        }
        v11 = v5;
        v12 = 0;
        while ( 1 )
        {
          v13 = *(_QWORD **)(v11 + 56);
LABEL_27:
          while ( v13 != (_QWORD *)(v11 + 56) )
          {
            v14 = v13;
            v23 = (__int64)v13;
            v15 = (__int64)v13;
            v13 = (_QWORD *)*v13;
            v16 = v14[5];
            if ( v16 )
            {
              if ( v12 )
                v16 = *(_QWORD *)(v16 + 400);
              v17 = *((_BYTE *)v14 + 2 * v12 + 101);
              if ( v17 )
              {
                v18 = 0;
                while ( !*(_DWORD *)(32 * (v18 + 4LL) + v16) || *(unsigned __int16 *)(32LL * v18 + v16 + 134) != *v2 )
                {
                  if ( ++v18 >= 8u )
                    goto LABEL_27;
                }
                v19 = 1 << v18;
                if ( 1 << v18 && (v17 & v19) != 0 )
                {
                  v20 = v8;
                  *(_BYTE *)(v15 + 2LL * v12 + 101) = v17 & ~v19;
                  updated = EtwpCalculateUpdateNotification(v15, v19, v17, v17, 2, v12, 0, (_OWORD **)&v26);
                  v8 = v26;
                  v25 = updated;
                  if ( v20 != v26 )
                  {
                    if ( v26 )
                    {
                      EtwpUnreferenceDataBlock(v20);
                      updated = v25;
                    }
                    else
                    {
                      v8 = v20;
                      v26 = v20;
                    }
                  }
                  if ( updated )
                    EtwpSendDataBlock(v23, (__int64)v8, v22);
                  v2 = (_DWORD *)a2;
                }
              }
            }
          }
          if ( v11 != v5 )
          {
            *(_QWORD *)(v11 + 416) = 0LL;
            ExReleasePushLockEx(v11 + 408, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( !v9 )
            break;
          v12 = 1;
          v11 = v9;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v9 + 408, 0LL);
          *(_QWORD *)(v9 + 416) = KeGetCurrentThread();
          v9 = *(_QWORD *)(v9 + 16) - 16LL;
          if ( v9 == v5 )
            v9 = 0LL;
          v8 = v26;
        }
        v6 = v5 + 408;
      }
    }
    if ( v8 )
      EtwpUnreferenceDataBlock(v8);
    *(_QWORD *)(v5 + 416) = 0LL;
    ExReleasePushLockEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (_QWORD *)EtwpUnreferenceGuidEntry((volatile signed __int64 *)v5);
  }
  return result;
}
