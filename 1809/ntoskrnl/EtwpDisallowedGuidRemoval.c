/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x1408B6618
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
 *     EtwpUpdateRegEntryEnableMask @ 0x140658DA8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x140659E08 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r12
  _QWORD *result; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rbp
  int v7; // eax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int8 v12; // r13
  _QWORD *v13; // r14
  int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // r8
  __int64 v22; // rbx
  volatile signed __int32 *v23; // r12
  char updated; // al
  __int64 v25; // r8
  _QWORD *v26; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A0h] [rbp+18h]
  char v30; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v31; // [rsp+A8h] [rbp+20h] BYREF

  v31 = 0LL;
  v2 = (_DWORD *)a2;
  LOBYTE(v28) = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v26 = result;
  v5 = (__int64)result;
  if ( result )
  {
    KeEnterCriticalRegion();
    v6 = v5 + 408;
    ExAcquirePushLockExclusiveEx(v5 + 408, 0LL);
    *(_QWORD *)(v5 + 416) = KeGetCurrentThread();
    v7 = EtwpBuildNotificationPacket(v5, 0LL, 0, &v31);
    v8 = v31;
    if ( !v7 )
    {
      *v31 = 3;
      *(_OWORD *)(v8 + 10) = *(_OWORD *)a1;
      *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed((__int64)v2, a1) )
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
          if ( v13 != (_QWORD *)(v11 + 56) )
          {
            v14 = v28;
            v15 = (_QWORD *)(v11 + 56);
            do
            {
              v16 = v13;
              v29 = (__int64)v13;
              v17 = (__int64)v13;
              v13 = (_QWORD *)*v13;
              v18 = v16[5];
              if ( v18 )
              {
                if ( v12 )
                  v18 = *(_QWORD *)(v18 + 400);
                if ( *(_DWORD *)(v18 + 96) )
                {
                  v19 = 0;
                  while ( !*(_DWORD *)(32 * (v19 + 4LL) + v18) || *(unsigned __int16 *)(32LL * v19 + v18 + 134) != *v2 )
                  {
                    if ( ++v19 >= 8u )
                      goto LABEL_20;
                  }
                  v14 = 1;
                  LOBYTE(v14) = 1 << v19;
LABEL_20:
                  if ( (_BYTE)v14 )
                  {
                    v20 = *((_BYTE *)v16 + 2 * v12 + 101);
                    EtwpUpdateRegEntryEnableMask(v17, (__int64)v2, v14, 2, v12, 1);
                    v21 = v20;
                    v22 = v29;
                    v23 = v8;
                    updated = EtwpCalculateUpdateNotification(v29, v14, v21, 0, 2, v12, 1, (_OWORD **)&v31);
                    v8 = v31;
                    v30 = updated;
                    if ( v23 != v31 )
                    {
                      if ( v31 )
                      {
                        EtwpUnreferenceDataBlock(v23);
                        updated = v30;
                      }
                      else
                      {
                        v8 = v23;
                        v31 = v23;
                      }
                    }
                    if ( updated )
                      EtwpSendDataBlock(v22, (__int64)v8, v25);
                    v2 = (_DWORD *)a2;
                  }
                  v15 = (_QWORD *)(v11 + 56);
                }
              }
            }
            while ( v13 != v15 );
            v28 = v14;
            v5 = (__int64)v26;
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
          v8 = v31;
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
