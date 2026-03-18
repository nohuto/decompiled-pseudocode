/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x1408F1F54
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14090033C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     EtwpIsGuidAllowed @ 0x1405C55A0 (EtwpIsGuidAllowed.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140663208 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x140666718 (EtwpCalculateUpdateNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x140666F2C (EtwpUnreferenceDataBlock.c)
 */

__int64 *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  __int64 *result; // rax
  __int64 *v5; // rdi
  ULONG_PTR v6; // rbp
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // rbp
  unsigned __int8 v12; // r13
  __int64 *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // r11
  __int64 v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // dl
  volatile signed __int32 *v20; // r15
  char updated; // al
  __int64 v22; // [rsp+40h] [rbp-48h]
  char v24; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v25; // [rsp+A8h] [rbp+20h] BYREF

  v25 = 0LL;
  v2 = (_DWORD *)a2;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1112), a1, 0);
  v5 = result;
  if ( result )
  {
    KeEnterCriticalRegion();
    v6 = (ULONG_PTR)(v5 + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 51), 0LL);
    v5[52] = (__int64)KeGetCurrentThread();
    v7 = EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v25);
    v8 = (__int64)v25;
    if ( !v7 )
    {
      *v25 = 3;
      *(_OWORD *)(v8 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v8 + 36) = PsGetCurrentThreadProcessId();
      if ( !EtwpIsGuidAllowed((__int64)v2, a1) )
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
LABEL_27:
          while ( v13 != v11 + 7 )
          {
            v14 = v13;
            v22 = (__int64)v13;
            v15 = (__int64)v13;
            v13 = (__int64 *)*v13;
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
                  v20 = (volatile signed __int32 *)v8;
                  *(_BYTE *)(v15 + 2LL * v12 + 101) = v17 & ~v19;
                  updated = EtwpCalculateUpdateNotification(v15, v19, v17, v17, 2, v12, 0, &v25);
                  v8 = (__int64)v25;
                  v24 = updated;
                  if ( v20 != v25 )
                  {
                    if ( v25 )
                    {
                      EtwpUnreferenceDataBlock(v20);
                      updated = v24;
                    }
                    else
                    {
                      v8 = (__int64)v20;
                      v25 = v20;
                    }
                  }
                  if ( updated )
                    EtwpSendDataBlock(v22, v8);
                  v2 = (_DWORD *)a2;
                }
              }
            }
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
          v8 = (__int64)v25;
        }
        v6 = (ULONG_PTR)(v5 + 51);
      }
    }
    if ( v8 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v8);
    v5[52] = 0LL;
    ExReleasePushLockEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
