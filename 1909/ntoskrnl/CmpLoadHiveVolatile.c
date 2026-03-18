/*
 * XREFs of CmpLoadHiveVolatile @ 0x14083B3D0
 * Callers:
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 *     CmpConstructName @ 0x140668820 (CmpConstructName.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpLockHiveListExclusive @ 0x14068CCDC (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14068CCFC (CmpUnlockHiveList.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpCopySyncTree @ 0x14083561C (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r14
  __int64 v5; // r13
  int v7; // ebx
  _BYTE *v8; // r15
  int Hive; // eax
  int v10; // eax
  volatile signed __int32 *v11; // rsi
  char IsKeyDeletedForKeyBody; // al
  _QWORD *v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rbx
  UNICODE_STRING *v16; // rax
  __int16 v17; // r15
  unsigned __int16 v18; // r15
  unsigned __int16 v19; // cx
  __int16 v20; // cx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v25[2]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  PVOID v27; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  UUID v32; // [rsp+B8h] [rbp-48h] BYREF
  UUID Uuid; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v34[352]; // [rsp+E0h] [rbp-20h] BYREF

  v25[0] = -1;
  v25[1] = 0;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  v4 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  *(_QWORD *)&v32.Data1 = 0LL;
  *(_QWORD *)v32.Data4 = 0LL;
  memset(v34, 0, sizeof(v34));
  v5 = *(_QWORD *)(a1 + 8);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return 3221225865LL;
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = CmpUuidCreate(&v32);
    if ( v7 >= 0 )
    {
      v8 = *(_BYTE **)(v5 + 32);
      if ( v8 == CmpMasterHive )
      {
        v31 = 0LL;
        v30 = 0LL;
        v29 = a2;
        Hive = CmpCreateHive(
                 (ULONG_PTR *)&v27,
                 2u,
                 0x8000u,
                 0,
                 0LL,
                 (__int64)&v29,
                 0LL,
                 16777217,
                 0LL,
                 0LL,
                 0LL,
                 (__int64)v34);
        if ( Hive >= 0 )
        {
          v10 = CmpCreateHive((ULONG_PTR *)&P, 0, 1u, 0, 0LL, 0LL, 0LL, 0x1000000, &Uuid, &v32, 0LL, (__int64)v34);
          v11 = (volatile signed __int32 *)v27;
          v7 = v10;
          if ( v10 >= 0 )
          {
            CmpLockRegistryExclusive();
            IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
            v13 = P;
            if ( IsKeyDeletedForKeyBody )
            {
              v7 = -1073741444;
            }
            else if ( v8[2936] == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v14 = CmpCopyKeyPartial(
                      (__int64)v11,
                      *(unsigned int *)(*((_QWORD *)v11 + 8) + 36LL),
                      (ULONG_PTR)P,
                      0xFFFFFFFF,
                      2,
                      v23,
                      1u);
              if ( v14 != -1 )
              {
                *(_DWORD *)(v13[8] + 36LL) = v14;
                if ( CmpCopySyncTree((int)v11, *(_DWORD *)(*((_QWORD *)v11 + 8) + 36LL), (ULONG_PTR)v13, v14, 2, 0) )
                {
                  v15 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _DWORD *))v13[1])(v13, v14, v25);
                  if ( v15 )
                  {
                    v16 = (UNICODE_STRING *)CmpConstructName(v5);
                    v17 = 2 * *(_WORD *)(v15 + 72);
                    v4 = v16;
                    if ( (*(_BYTE *)(v15 + 2) & 0x20) == 0 )
                      v17 = *(_WORD *)(v15 + 72);
                    v18 = v16->Length + v17 + 2;
                    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v18;
                      DestinationString.Length = v18;
                      RtlCopyUnicodeString(&DestinationString, v4);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v19 = *(_WORD *)(v15 + 72);
                      if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          (unsigned __int64)&DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          v15 + 76,
                          (unsigned __int16)(2 * v19));
                        v20 = 2 * *(_WORD *)(v15 + 72);
                        if ( (*(_BYTE *)(v15 + 2) & 0x20) == 0 )
                          v20 = *(_WORD *)(v15 + 72);
                        DestinationString.Length += v20;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v15 + 72);
                        Source.Length = v19;
                        Source.Buffer = (wchar_t *)(v15 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      ((void (__fastcall *)(_QWORD *, _DWORD *))v13[2])(v13, v25);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             (__int64)v13,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1);
                      if ( v7 >= 0 )
                      {
                        CmpAddToHiveFileList((__int64)v13);
                        CmpLockHiveListExclusive();
                        v21 = (_QWORD *)qword_1409AE898;
                        v22 = v13 + 200;
                        if ( *(__int64 **)qword_1409AE898 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v22 = &CmpHiveListHead;
                        v13[201] = v21;
                        *v21 = v22;
                        qword_1409AE898 = (__int64)(v13 + 200);
                        CmpUnlockHiveList();
                        if ( !CmpProfileLoaded )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( v7 < 0 )
                        CmpDestroyHive((volatile signed __int32 *)v13);
                      CmpDestroyHive(v11);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v4, 0x624E4D43u);
                      goto LABEL_25;
                    }
                    ((void (__fastcall *)(_QWORD *, _DWORD *))v13[2])(v13, v25);
                  }
                }
              }
              v7 = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyHive((volatile signed __int32 *)v13);
          }
          CmpDestroyHive(v11);
          if ( v4 )
            CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
        }
        else
        {
          v7 = Hive;
        }
      }
      else
      {
        v7 = -1073741811;
      }
    }
  }
LABEL_25:
  CmpReleaseShutdownRundown();
  return (unsigned int)v7;
}
