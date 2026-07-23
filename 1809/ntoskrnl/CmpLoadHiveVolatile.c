/*
 * XREFs of CmpLoadHiveVolatile @ 0x140803AF8
 * Callers:
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x1406CE220 (CmpAddToHiveFileList.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r13
  int Hive; // ebx
  _BYTE *v8; // r15
  int v9; // eax
  volatile signed __int32 *v10; // rsi
  char IsKeyDeletedForKeyBody; // al
  _QWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int16 v15; // r15
  unsigned __int16 v16; // r15
  unsigned __int16 v18; // cx
  __int16 v19; // cx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[2]; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  PVOID v26; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  UUID v30; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v32[352]; // [rsp+E0h] [rbp-20h] BYREF

  v24[0] = -1;
  v24[1] = 0;
  v4 = 0LL;
  memset(v32, 0, sizeof(v32));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    Hive = CmpUuidCreate(&Uuid);
    if ( Hive >= 0 )
    {
      Hive = CmpUuidCreate(&v30);
      if ( Hive >= 0 )
      {
        v8 = *(_BYTE **)(v6 + 24);
        if ( v8 != CmpMasterHive )
        {
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          Hive = -1073741811;
          goto LABEL_26;
        }
        memset(v29, 0, sizeof(v29));
        v29[0] = a2;
        Hive = CmpCreateHive((ULONG_PTR *)&v26, 2u, 0x8000u, 0, 0LL, v29, 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)v32);
        if ( Hive >= 0 )
        {
          v9 = CmpCreateHive((ULONG_PTR *)&P, 0, 1u, 0, 0LL, 0LL, 0LL, 17956864, &Uuid, &v30, 0LL, (__int64)v32);
          v10 = (volatile signed __int32 *)v26;
          Hive = v9;
          if ( v9 >= 0 )
          {
            CmpLockRegistryExclusive();
            IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
            v12 = P;
            if ( IsKeyDeletedForKeyBody )
            {
              Hive = -1073741444;
            }
            else if ( v8[2936] == 1 )
            {
              Hive = -1073741431;
            }
            else
            {
              v13 = CmpCopyKeyPartial(
                      (__int64)v10,
                      *(unsigned int *)(*((_QWORD *)v10 + 8) + 36LL),
                      (ULONG_PTR)P,
                      0xFFFFFFFF,
                      2,
                      v22,
                      1u);
              if ( v13 != -1 )
              {
                *(_DWORD *)(v12[8] + 36LL) = v13;
                if ( CmpCopySyncTree((int)v10, *(_DWORD *)(*((_QWORD *)v10 + 8) + 36LL), (ULONG_PTR)v12, v13, 2, 0) )
                {
                  v14 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _DWORD *))v12[1])(v12, v13, v24);
                  if ( v14 )
                  {
                    SourceString = 0LL;
                    CmpConstructNameWithStatus(v6, &SourceString);
                    v4 = (UNICODE_STRING *)SourceString;
                    v15 = 2 * *(_WORD *)(v14 + 72);
                    if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
                      v15 = *(_WORD *)(v14 + 72);
                    v16 = SourceString->Length + v15 + 2;
                    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v16;
                      DestinationString.Length = v16;
                      RtlCopyUnicodeString(&DestinationString, v4);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v18 = *(_WORD *)(v14 + 72);
                      if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v14 + 76),
                          (unsigned __int16)(2 * v18));
                        v19 = 2 * *(_WORD *)(v14 + 72);
                        if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
                          v19 = *(_WORD *)(v14 + 72);
                        DestinationString.Length += v19;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v14 + 72);
                        Source.Length = v18;
                        Source.Buffer = (wchar_t *)(v14 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v24);
                      Hive = CmpLinkHiveToMaster(
                               (__int64)&DestinationString,
                               0LL,
                               (__int64)v12,
                               0,
                               0x200u,
                               0,
                               0LL,
                               0LL,
                               0LL,
                               0LL,
                               1);
                      if ( Hive >= 0 )
                      {
                        CmpAddToHiveFileList((__int64)v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        v20 = (_QWORD *)qword_14096F7D0;
                        v21 = v12 + 200;
                        if ( *(__int64 **)qword_14096F7D0 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v21 = &CmpHiveListHead;
                        v12[201] = v20;
                        *v20 = v21;
                        qword_14096F7D0 = (__int64)(v12 + 200);
                        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        if ( !BYTE5(NlsMbCodePageTag) )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          BYTE5(NlsMbCodePageTag) = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( Hive < 0 )
                        CmpDestroyHive((volatile signed __int32 *)v12);
                      CmpDestroyHive(v10);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v4, 0x624E4D43u);
                      goto LABEL_25;
                    }
                    ((void (__fastcall *)(_QWORD *, _DWORD *))v12[2])(v12, v24);
                  }
                }
              }
              Hive = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyHive((volatile signed __int32 *)v12);
          }
          CmpDestroyHive(v10);
          if ( v4 )
            CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
        }
      }
    }
LABEL_25:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_26;
  }
  Hive = -1073741431;
LABEL_26:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)Hive;
}
