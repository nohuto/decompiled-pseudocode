/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x1408F1B18
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1408FFC9C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     EtwpIsGuidAllowed @ 0x1405C5AA0 (EtwpIsGuidAllowed.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4680 (EtwpFindGuidEntryByGuid.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x140693B2C (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140693D0C (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpBuildNotificationPacket @ 0x1406AAA68 (EtwpBuildNotificationPacket.c)
 */

__int64 *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int64 *result; // rax
  __int64 *v5; // rsi
  ULONG_PTR v6; // rbp
  int v7; // eax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rbp
  __int64 *v10; // rcx
  __int64 *v11; // r15
  unsigned __int8 v12; // r13
  __int64 *v13; // r14
  int v14; // esi
  __int64 *v15; // rax
  __int64 *v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // r8
  __int64 v22; // rbx
  volatile signed __int32 *v23; // r12
  char updated; // al
  __int64 *v25; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A0h] [rbp+18h]
  char v29; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v30; // [rsp+A8h] [rbp+20h] BYREF

  v30 = 0LL;
  v2 = (_DWORD *)a2;
  LOBYTE(v27) = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v25 = result;
  v5 = result;
  if ( result )
  {
    KeEnterCriticalRegion();
    v6 = (ULONG_PTR)(v5 + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 51), 0LL);
    v5[52] = (__int64)KeGetCurrentThread();
    v7 = EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v30);
    v8 = v30;
    if ( !v7 )
    {
      *v30 = 3;
      *(_OWORD *)(v8 + 10) = *(_OWORD *)a1;
      *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed((__int64)v2, a1) )
      {
        v9 = 0LL;
        if ( !v5[50] )
        {
          v10 = (__int64 *)v5[2];
          if ( v10 != v5 + 2 )
            v9 = (__int64)(v10 - 2);
        }
        v11 = v5;
        v12 = 0;
        while ( 1 )
        {
          v13 = (__int64 *)v11[7];
          if ( v13 != v11 + 7 )
          {
            v14 = v27;
            v15 = v11 + 7;
            do
            {
              v16 = v13;
              v28 = (__int64)v13;
              v17 = (__int64)v13;
              v13 = (__int64 *)*v13;
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
                    v22 = v28;
                    v23 = v8;
                    updated = EtwpCalculateUpdateNotification(v28, v14, v21, 0, 2, v12, 1, (_OWORD **)&v30);
                    v8 = v30;
                    v29 = updated;
                    if ( v23 != v30 )
                    {
                      if ( v30 )
                      {
                        EtwpUnreferenceDataBlock(v23);
                        updated = v29;
                      }
                      else
                      {
                        v8 = v23;
                        v30 = v23;
                      }
                    }
                    if ( updated )
                      EtwpSendDataBlock(v22, (__int64)v8);
                    v2 = (_DWORD *)a2;
                  }
                  v15 = v11 + 7;
                }
              }
            }
            while ( v13 != v15 );
            v27 = v14;
            v5 = v25;
          }
          if ( v11 != v5 )
          {
            v11[52] = 0LL;
            ExReleasePushLockEx((ULONG_PTR)(v11 + 51), 0LL);
            KeLeaveCriticalRegion();
          }
          if ( !v9 )
            break;
          v12 = 1;
          v11 = (__int64 *)v9;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v9 + 408, 0LL);
          *(_QWORD *)(v9 + 416) = KeGetCurrentThread();
          v9 = *(_QWORD *)(v9 + 16) - 16LL;
          if ( (__int64 *)v9 == v5 )
            v9 = 0LL;
          v8 = v30;
        }
        v6 = (ULONG_PTR)(v5 + 51);
      }
    }
    if ( v8 )
      EtwpUnreferenceDataBlock(v8);
    v5[52] = 0LL;
    ExReleasePushLockEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
